#include "CircuitInfo.h"

System::Void PCShop::CircuitInfo::CircuitInfo_Load(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=ProdStorage.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "SELECT * FROM [Storage]";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

	if (dbReader->HasRows == false) {
		MessageBox::Show("������ ���������� ������", "������");
		return;
	}
	if (Admin != "0") {
		Characteristics->ReadOnly = false;
		name->ReadOnly = false;
		price->ReadOnly = false;
		amount->ReadOnly = false;
		save_Char_button->Visible = true;
		Chose_Pic_button->Visible = true;
		menuStrip1->Visible = true;
		redaction_button1->Visible = true;
		redaction_button2->Visible = true;
		save_Char_button->Enabled = true;
		Chose_Pic_button->Enabled = true;
		menuStrip1->Enabled = true;
		redaction_button1->Enabled = true;
		redaction_button2->Enabled = true;
		if (Add == "0") {
			while (dbReader->Read()) {
				if (dbReader["Id"]->ToString() == ID) {
					/*pictureBox1->Image = new;*/
					if (Admin != "0") {
						this->Text = "��������� ������������� " + dbReader["������������"]->ToString();
					}
					pictureBox1->ImageLocation = dbReader["��������"]->ToString();
					type->Text = dbReader["���"]->ToString();
					name->Text = dbReader["������������"]->ToString();
					producer->Text = dbReader["�������������"]->ToString();
					price->Text = dbReader["����"]->ToString();
					amount->Text = dbReader["�������"]->ToString();
					Characteristics->Text = dbReader["��������"]->ToString();
				}
			}
		}
		else {
			save_Char_button->Text = "��������";
			this->Text = "���������� �������������";
		}
	}
	else {
		while (dbReader->Read()) {
			if (dbReader["Id"]->ToString() == ID) {
				this->Text = "���������� � ������������� " + dbReader["������������"]->ToString();
				pictureBox1->ImageLocation = dbReader["��������"]->ToString();
				type->Text = dbReader["���"]->ToString();
				name->Text = dbReader["������������"]->ToString();
				producer->Text = dbReader["�������������"]->ToString();
				price->Text = dbReader["����"]->ToString();
				amount->Text = dbReader["�������"]->ToString();
				Characteristics->Text = dbReader["��������"]->ToString();
			}
		}
	}
	return System::Void();
}

System::Void PCShop::CircuitInfo::save_Char_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	string amnt, pr;
	int amn, p;
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=ProdStorage.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
	dbConnection->Open();
	if (type->Text == "" ||
		name->Text == "" ||
		producer->Text == "" ||
		price->Text == "" ||
		amount->Text == "" ||
		Characteristics->Text == "") {
		dbConnection->Close();
		MessageBox::Show("��������� �����!", "��������!");
		return;
	}
	amnt = msclr::interop::marshal_as<std::string>(amount->Text->ToString());
	regex re("([1-9]{1}[0-9]{0,10})");
	if (!regex_search(amnt, re)) {
		MessageBox::Show("������� ����� ����� ������������� � �������!", "��������!");
		return;
	}
	amn = stoi(amnt);
	if (amn > 500 && amn < 1000) {
		MessageBox::Show("��� �� � �������!", "�����!");
	}
	if (amn > 1000) {
		MessageBox::Show("� ��� ������ �����! ������� ���������� ���-�� �������������", "��������!");
		return;
	}
	regex reg("([1-9]{1}[0-9]{0,4})");
	pr = msclr::interop::marshal_as<std::string>(price->Text->ToString());
	if (!regex_search(pr, reg)) {
		MessageBox::Show("������� ���������� ����!", "��������!");
		return;
	}
	p = stoi(pr);
	if (p > 2000) {
		MessageBox::Show("�������� ������ �������� �� �����!", "Meh...");
	}
	if (p > 10000) {
		MessageBox::Show("�� � ���� � ��������! �������� ������ ����� �������� ��� �������� ����", "��������!");
		return;
	}
	if (Admin != "0" && Add == "0") {
		System::Windows::Forms::DialogResult i = MessageBox::Show("�� ������������� ������ ���������?", "����������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (i == System::Windows::Forms::DialogResult::Yes) {
			String^ query = "UPDATE [Storage] SET ������� = '" + amount->Text + "', ������������� = '" + producer->Text + "', ��� = '"
				+ type->Text + "', ������������ = '" + name->Text + "', �������� = '" + Characteristics->Text + "', ���� = '"
				+ price->Text + "', �������� = '" + pictureBox1->ImageLocation + "' WHERE Id = " + ID;
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			if (dbCommand->ExecuteNonQuery() != 1)
				MessageBox::Show("������ ���������� �������!", "������!");
			else
				MessageBox::Show("������ ��������� �������!", "������!");
		}
	}
		else if (Admin != "0" && Add != "0") {
				String^ query1 = "INSERT INTO [Storage] (�������, �������������, ���, ������������, ��������, ����, ��������) VALUES (" + amount->Text + ", '"
					+ producer->Text + "', '" + type->Text + "', '" + name->Text + "', '" + Characteristics->Text + "', "
					+ price->Text + ", '" + pictureBox1->ImageLocation + "' )";
				OleDbCommand^ dbCommand1 = gcnew OleDbCommand(query1, dbConnection);

				if (dbCommand1->ExecuteNonQuery() != 1) {
					MessageBox::Show("������ ���������� �������!", "������!");
				}
				else {
					MessageBox::Show("������ ��������� �������!", "������!");
					this->Close();
				}
		}
	dbConnection->Close();
	return System::Void();
}

System::Void PCShop::CircuitInfo::redaction_button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (type->ReadOnly == true) {
		type->ReadOnly = false;
	}
	else {
		type->ReadOnly = true;
	}
	if (type->ReadOnly == false)MessageBox::Show("��������� ���� \"���\" ������� ����� �������� � ������� � ������������ ���� ������!", "��������!");
	return System::Void();
}

System::Void PCShop::CircuitInfo::redaction_button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (producer->ReadOnly == true) {
		producer->ReadOnly = false;
	}
	else {
		producer->ReadOnly = true;
	}
	if (producer->ReadOnly == false)MessageBox::Show("��������� ���� \"�������������\" ������� ����� �������� � ������� � ������������ ���� ������!", "��������!");
	return System::Void();
}

System::Void PCShop::CircuitInfo::Chose_Pic_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	openFileDialog1->Filter = "Image Files(*.BMP;*.JPEG;*.JPG;*.GIF;*.PNG)|*.BMP;*.JPEG;*.JPG;*.GIF;*.PNG|All files (*.*)|*.*";
	String^ path;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
//	openFileDialog1->ShowDialog();
	path = openFileDialog1->FileName;
	pictureBox1->ImageLocation = path;
	MessageBox::Show("�������� �������!", "������!");
}
	else {
		MessageBox::Show("�������� �� �������!", "������!");
	}
	return System::Void();
}
