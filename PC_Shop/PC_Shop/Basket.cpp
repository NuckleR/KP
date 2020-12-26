#include "Basket.h"

System::Void PCShop::Basket::Basket_Load(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Basket.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
	std::string amnt;
	int amn, price = 0;
	char* temp;
	String^ PRICE;
	dbConnection->Open();
	String^ query = "SELECT * FROM [Basket] WHERE Idpol =" + UId;
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
	if (dbReader->HasRows == false) {
		MessageBox::Show("������� �����. ��� ������ �������", "��������!");
		this->Close();
		return;
	}
	else {
		while (dbReader->Read()) {
			if (dbReader["IdPol" == UId])dataGridView1->Rows->Add(dbReader["Idnum"], dbReader["�������������"], dbReader["���"],
				dbReader["������������"], dbReader["����"]);
		}
	}
	query = "SELECT * FROM [Basket] WHERE Idpol =" + UId;
	dbCommand = gcnew OleDbCommand(query, dbConnection);
	dbReader = dbCommand->ExecuteReader();
	while (dbReader->Read()) {
		amnt = msclr::interop::marshal_as<std::string>(dbReader["����"]->ToString());
		int amn = stoi(amnt);
		price += amn;
	}
	temp = new char[64]; itoa(price, temp, 10);
	amnt = std::string(temp);
	PRICE = msclr::interop::marshal_as<String^>(amnt);
	textBox1->Text = PRICE;
	dbReader->Close();
	dbConnection->Close();
	return System::Void();
}

System::Void PCShop::Basket::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
	return System::Void();
}

System::Void PCShop::Basket::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("\t\t   �����!\n\n\t��� ���� ������� �������. ����� ������� ��� ��������� ���� �������������.\n\n"
		"\t\t�������� ������:\n"
		"������ \"������\" - ������� ����� �� ������� ���������\n"
		"������ \"�������� � ������\" - ���� ��� �������������� ���������� � ������.\n"
		"������ \"�������� �����\" - ��������� �� ��� �����\n"
		"������ \"�����\" - ������������ \"��������\" ��������� �������.\n\n"

		"� ��������� ���� \"���� ������\" ������� ���� ������",
		"����������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	return System::Void();
}

System::Void PCShop::Basket::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("�������� ���� ������ ��� ��������!", "��������!");
		return;
	}
	String^ connectionStringP = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Basket.mdb";
	OleDbConnection^ dbConnectionP = gcnew OleDbConnection(connectionStringP);
	dbConnectionP->Open();
	Ci = gcnew CircuitInfo();
	int index = dataGridView1->SelectedRows[0]->Index;
	String^ ID, ^ NID;
	NID = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ queryP = "SELECT * FROM [Basket] WHERE Idnum = " + NID;
	OleDbCommand^ dbCommandP = gcnew OleDbCommand(queryP, dbConnectionP);
	OleDbDataReader^ dbReaderP = dbCommandP->ExecuteReader();
	while (dbReaderP->Read()) {
		ID = dbReaderP["Idprod"]->ToString();
	}
	this->Ci->ID = ID;
	this->Ci->Admin = "0";
	this->Ci->Add = "0";
	dbConnectionP->Close();
	this->AddOwnedForm(Ci);
	this->Ci->Show(this);
	return System::Void();
}

System::Void PCShop::Basket::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DialogResult i = MessageBox::Show("�� ������������� ������ ������� ������� �� ������� ���������?", "�������� ��������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (i == System::Windows::Forms::DialogResult::Yes) {
		if (dataGridView1->SelectedRows->Count != 1) {
			MessageBox::Show("�������� ���� ������ ��� ��������!", "��������!");
			return;
		}
		String^ connectionStringB = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Basket.mdb";
		OleDbConnection^ dbConnectionB = gcnew OleDbConnection(connectionStringB);
		String^ connectionStringP = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=ProdStorage.mdb";
		OleDbConnection^ dbConnectionP = gcnew OleDbConnection(connectionStringP);
		dbConnectionB->Open();
		dbConnectionP->Open();
		int price;
		String^ PRICE;
		int index = dataGridView1->SelectedRows[0]->Index;
		String^ Id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
		String^ Amnt_of, ^ IdProd, ^ UsID;
		String^ queryB = "SELECT * FROM [Basket] WHERE Idnum = " + Id;
		OleDbCommand^ dbCommandB = gcnew OleDbCommand(queryB, dbConnectionB);
		OleDbDataReader^ dbReaderB = dbCommandB->ExecuteReader();
		while (dbReaderB->Read()) {
			IdProd = dbReaderB["Idprod"]->ToString();
			UsID = dbReaderB["Idpol"]->ToString();
		}
		String^ queryP = "SELECT * FROM [Storage] WHERE Id = " + IdProd;
		OleDbCommand^ dbCommandP = gcnew OleDbCommand(queryP, dbConnectionP);
		OleDbDataReader^ dbReaderP = dbCommandP->ExecuteReader();
		while (dbReaderP->Read()) {
			Amnt_of = dbReaderP["�������"]->ToString();
		}
		std::string amnt = msclr::interop::marshal_as<std::string>(Amnt_of);
		int amn = stoi(amnt);
		amn++;
		char* temp = new char[64]; itoa(amn, temp, 10);
		amnt = std::string(temp);
		Amnt_of = msclr::interop::marshal_as<String^>(amnt);
		queryP = "UPDATE [Storage] SET ������� = '" + Amnt_of + "' WHERE Id = " + IdProd;
		dbCommandP = gcnew OleDbCommand(queryP, dbConnectionP);
		dbCommandP->ExecuteNonQuery();
		queryB = "DELETE FROM [Basket] WHERE Idnum = " + Id;
		dbCommandB = gcnew OleDbCommand(queryB, dbConnectionB);
		if (dbCommandB->ExecuteNonQuery() != 1) {
			MessageBox::Show("������ ���������� �������!", "������!");
		}
		else {
			MessageBox::Show("������ ������� �������!", "������!");
			dataGridView1->Rows->RemoveAt(index);
		}
		queryB = "SELECT * FROM [Basket] WHERE Idpol =" + UsID;
		dbCommandB = gcnew OleDbCommand(queryB, dbConnectionB);
		dbReaderB = dbCommandB->ExecuteReader();
		while (dbReaderB->Read()) {
			amnt = msclr::interop::marshal_as<std::string>(dbReaderB["����"]->ToString());
			int amn = stoi(amnt);
			price += amn;
		}
		temp = new char[64]; itoa(price, temp, 10);
		amnt = std::string(temp);
		PRICE = msclr::interop::marshal_as<String^>(amnt);
		textBox1->Text = PRICE;
		dbConnectionB->Close();
		dbConnectionP->Close();
	}
	return System::Void();
}

System::Void PCShop::Basket::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Basket.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
	dataGridView1->Rows->Clear();
	dbConnection->Open();
	String^ query = "SELECT * FROM [Basket] WHERE Idpol =" + UId;
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
	while (dbReader->Read()) {
		if (dbReader["IdPol" == UId])dataGridView1->Rows->Add(dbReader["Idnum"], dbReader["�������������"], dbReader["���"],
			dbReader["������������"], dbReader["����"]);
	}
	return System::Void();
}

System::Void PCShop::Basket::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string amnt;
	int amn;
	char* temp;
	String^ IdProd, ^ Amnt_of, ^ TEMP;
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Basket.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
	String^ connectionStringP = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=ProdStorage.mdb";
	OleDbConnection^ dbConnectionP = gcnew OleDbConnection(connectionStringP);
	dbConnection->Open();
	dbConnectionP->Open();
	String^ queryP;
	OleDbCommand^ dbCommandP;
	OleDbDataReader^ dbReaderP;
	String^ queryB;
	OleDbCommand^ dbCommandB;
	OleDbDataReader^ dbReaderB;
	queryB = "SELECT * FROM [Basket] WHERE Idpol = " + UId;
	dbCommandB = gcnew OleDbCommand(queryB, dbConnection);
	dbReaderB = dbCommandB->ExecuteReader();
	while (dbReaderB->Read()) {
		TEMP = dbReaderB["Idprod"]->ToString();
		queryP = "SELECT * FROM [Storage] WHERE Id = " + TEMP;
		dbCommandP = gcnew OleDbCommand(queryP, dbConnectionP);
		dbReaderP = dbCommandP->ExecuteReader();
		while (dbReaderP->Read()) {
			Amnt_of = dbReaderP["�������"]->ToString();
		}
		amnt = msclr::interop::marshal_as<std::string>(Amnt_of);
		amn = stoi(amnt);
		amn++;
		temp = new char[64]; itoa(amn, temp, 10);
		amnt = std::string(temp);
		Amnt_of = msclr::interop::marshal_as<String^>(amnt);
		queryP = "UPDATE [Storage] SET ������� = '" + Amnt_of + "' WHERE Id = " + TEMP;
		dbCommandP = gcnew OleDbCommand(queryP, dbConnectionP);
		dbCommandP->ExecuteNonQuery();
	}
	String^ query = "DELETE FROM [Basket] WHERE Idpol = " + UId;
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	dbCommand->ExecuteNonQuery();
	MessageBox::Show("��� ����� ������� ��������!", "������!");
	dataGridView1->Rows->Clear();
	return System::Void();
}
