#include "AdminPanel.h"

System::Void PCShop::AdminPanel::AdminPanel_Load(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=ProdStorage.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "SELECT * FROM [Storage]";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

	if (dbReader->HasRows == false) {
		MessageBox::Show("������ ���������� ������", "������");
	}
	else {
		while (dbReader->Read()) {
			dataGridView1->Rows->Add(dbReader["Id"], dbReader["�������"], dbReader["�������������"],
				dbReader["���"], dbReader["������������"], dbReader["����"]);
		}
	}
	String^ connectionString1 = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Users.mdb";
	OleDbConnection^ dbConnection1 = gcnew OleDbConnection(connectionString1);

	dbConnection1->Open();
	String^ query1 = "SELECT * FROM [Users]";
	OleDbCommand^ dbCommand1 = gcnew OleDbCommand(query1, dbConnection1);
	OleDbDataReader^ dbReader1 = dbCommand1->ExecuteReader();

	if (dbReader1->HasRows == false) {
		MessageBox::Show("������ ���������� ������", "������");
	}
	else {
		while (dbReader1->Read()) {
			dataGridView2->Rows->Add(dbReader1["Idpol"], dbReader1["�����"], dbReader1["�����"], dbReader1["������"]);
		}
	}
	dbReader1->Close();
	dbConnection1->Close();
	dbReader->Close();
	dbConnection->Close();
	return System::Void();
}

System::Void PCShop::AdminPanel::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("\t\t   �����!\n\n\t��� ��������� ������������ �� ���� ������ ���������� \"�������������� ������� ������������ �������������\" �� ����� �++"
		"� �������������� ������� ������������ ���. ��� ��������� ���������� ���� ������������ ���������� ��� VS 19 \"Windows Forms\"."
		"� ��������, ��� � ������ ���������� ������� ������� ��� ����� ����� ������� ��������. ��� �������� ������ ��������������"
		"����������������� ���� \"Word Access\".\n\n"
		"\t\t�������� ������ (������� �������������):\n"
		"������ \"�������\" - ������� ��� ������������� ������ �������������.\n"
		"������ \"�������� � ������\" - ������� ��� ���������� � ������.\n"
		"������ \"��������\" - �������� ��������� ���������.\n"
		"������ \"��������\" - �������� �������� �����.\n"
		"������ \"�������\" - �������� ������� ����� �� ������\n"
		"������ \"�������� �������\" - ������� ������� �������������.\n"
		"\t\t�������� ������ (������������):\n"
		"������ \"�������� � ������������\" - ������� ��� ���������� � ������������.\n"
		"������ \"��������\" - �������� ��������� ���������.\n"
		"������ \"�������� �������\" - ������� ������� ���������� ������������\n"
		"������ \"��������\" - �������� �������� ������������.\n"
		"������ \"�������\" - �������� ������� ����� �� ������\n"
		"������ \"�����\" - ������������ \"��������\" ��������� ���������."
		"\n\n\t\t\t����������: ��������� �.�.", "�� ���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	return System::Void();
}

System::Void PCShop::AdminPanel::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string Mail = "";
	String^ Password, ^ Email, ^ Login;
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Users.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
	if (dataGridView2->SelectedRows->Count != 1) {
		MessageBox::Show("�������� ���� ������ ��� ����������!", "��������!");
		return;
	}
	int index = dataGridView2->SelectedRows[0]->Index;
	if (
		dataGridView2->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[3]->Value == nullptr) {
		MessageBox::Show("�� ��� ������ �������!", "��������!");
		return;
	}
	else {
		Login = dataGridView2->Rows[index]->Cells[1]->Value->ToString();
		Email = dataGridView2->Rows[index]->Cells[2]->Value->ToString();
		Password = dataGridView2->Rows[index]->Cells[3]->Value->ToString();

		Mail = msclr::interop::marshal_as<std::string>(Email);
	}
	if (isCorrectEmail(Mail)) {
		System::Windows::Forms::DialogResult i = MessageBox::Show("�� ������������� ������ �������� ������������ '" + dataGridView2->Rows[index]->Cells[1]->Value->ToString() + "'?", "��������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (i == System::Windows::Forms::DialogResult::Yes) {
			dbConnection->Open();
			String^ query = "INSERT INTO [Users] (�����, �����, ������) VALUES ('" + Login + "', '" + Email + "', '" + Password + "')";
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			if (dbCommand->ExecuteNonQuery() != 1)
				MessageBox::Show("������ ���������� �������!", "������!");
			else
				MessageBox::Show("������ ��������� �������!", "������!");
			dbConnection->Close();
		}
		else {
			MessageBox::Show("�� �������� @mail", "������!", MessageBoxButtons::OK);
			dbConnection->Close();
		}
	}
	return System::Void();
}

System::Void PCShop::AdminPanel::button9_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString1 = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Users.mdb";
	OleDbConnection^ dbConnection1 = gcnew OleDbConnection(connectionString1);
	dbConnection1->Open();
	String^ query1 = "SELECT * FROM [Users]";
	OleDbCommand^ dbCommand1 = gcnew OleDbCommand(query1, dbConnection1);
	OleDbDataReader^ dbReader1 = dbCommand1->ExecuteReader();
	if (dbReader1->HasRows == false) {
		MessageBox::Show("������ ���������� ������", "������");
	}
	else {
		dataGridView2->Rows->Clear();
		while (dbReader1->Read()) {
			dataGridView2->Rows->Add(dbReader1["Idpol"], dbReader1["�����"], dbReader1["�����"], dbReader1["������"]);
		}
	}
	dbReader1->Close();
	dbConnection1->Close();
	return System::Void();
}

System::Void PCShop::AdminPanel::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView2->SelectedRows->Count != 1) {
		MessageBox::Show("�������� ���� ������ ��� ���������!", "��������!");
		return;
	}
	int index = dataGridView2->SelectedRows[0]->Index;
	if (dataGridView2->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[3]->Value == nullptr) {
		MessageBox::Show("�� ��� ������ �������!", "��������!");
		return;
	}
	System::Windows::Forms::DialogResult i = MessageBox::Show("�� ������������� ������ �������� ������ ������������ '"+ dataGridView2->Rows[index]->Cells[1]->Value->ToString() +"'?", "��������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (i == System::Windows::Forms::DialogResult::Yes) {
		String^ Id = dataGridView2->Rows[index]->Cells[0]->Value->ToString();
		String^ Login = dataGridView2->Rows[index]->Cells[1]->Value->ToString();
		String^ Email = dataGridView2->Rows[index]->Cells[2]->Value->ToString();
		String^ Password = dataGridView2->Rows[index]->Cells[3]->Value->ToString();
		String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Users.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
		dbConnection->Open();
		String^ query = "UPDATE [Users] SET ����� = '" + Login + "', ����� = '" + Email + "', ������ = '" + Password + "' WHERE Idpol = " + Id;
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
		if (dbCommand->ExecuteNonQuery() != 1)
			MessageBox::Show("������ ���������� �������!", "������!");
		else
			MessageBox::Show("������ ��������� �������!", "������!");
		dbConnection->Close();
	}
	return System::Void();
}

System::Void PCShop::AdminPanel::button11_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView2->SelectedRows->Count != 1) {
		MessageBox::Show("�������� ���� ������ ��� ��������!", "��������!");
		return;
	}
	int index = dataGridView2->SelectedRows[0]->Index;
	if (dataGridView2->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[3]->Value == nullptr) {
		MessageBox::Show("�� ��� ������ �������!", "��������!");
		return;
	}
	String^ Id = dataGridView2->Rows[index]->Cells[0]->Value->ToString();
	if (Id == "") {
		MessageBox::Show("�������� ���� ������ ��� ��������!", "��������!");
		return;
	}
	System::Windows::Forms::DialogResult i = MessageBox::Show("�� ������������� ������ ������� ������������ '" + dataGridView2->Rows[index]->Cells[1]->Value->ToString() + "'?", "�������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (i == System::Windows::Forms::DialogResult::Yes) {
		String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Users.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
		dbConnection->Open();
		String^ query = "DELETE FROM [Users] WHERE Idpol = " + Id;
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
		if (dbCommand->ExecuteNonQuery() != 1)
			MessageBox::Show("������ ���������� �������!", "������!");
		else {
			MessageBox::Show("������ ������� �������!", "������!");
			dataGridView2->Rows->RemoveAt(index);
		}
		dbConnection->Close();
	}
	return System::Void();
}

System::Void PCShop::AdminPanel::button8_Click(System::Object^ sender, System::EventArgs^ e)
{
	int index = dataGridView2->SelectedRows[0]->Index;
	if (dataGridView2->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[3]->Value == nullptr) {
		MessageBox::Show("�� ��� ������ �������!", "��������!");
		return;
	}
	std::string amnt;
	int amn;
	char* temp;
	String^ IdProd, ^ Amnt_of, ^ TEMP;
	String^ Id = dataGridView2->Rows[index]->Cells[0]->Value->ToString();
	if (Id == "") {
		MessageBox::Show("�������� ������ ������������ ��� ������� �������!", "��������!");
		return;
	}
	System::Windows::Forms::DialogResult i = MessageBox::Show("�� ������������� ������ �������� ������� ������������ '" + dataGridView2->Rows[index]->Cells[1]->Value->ToString() + "'?", "�������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (i == System::Windows::Forms::DialogResult::Yes) {
		String^ Log = dataGridView2->Rows[index]->Cells[1]->Value->ToString();
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
		queryB = "SELECT * FROM [Basket] WHERE Idpol = " + Id;
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
		String^ query = "DELETE FROM [Basket] WHERE Idpol = " + Id;
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
		dbCommand->ExecuteNonQuery();
		MessageBox::Show("������� ������������ '" + Log + "' �����!", "������!");
	}
	return System::Void();
}

System::Void PCShop::AdminPanel::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView2->SelectedRows->Count != 1) {
		MessageBox::Show("�������� ���� ������ ��� ��������� ����������!", "��������!");
		return;
	}
	int index = dataGridView2->SelectedRows[0]->Index;
	if (dataGridView2->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView2->Rows[index]->Cells[3]->Value == nullptr) {
		MessageBox::Show("�� ��� ������ �������!", "��������!");
		return;
	}
	String^ Id = dataGridView2->Rows[index]->Cells[0]->Value->ToString();
	if (Us) Us->Close();
	Us = gcnew UserInfo();
	this->AddOwnedForm(Us);
	this->Us->ULog = dataGridView2->Rows[index]->Cells[1]->Value->ToString();
	this->Us->UPassword = dataGridView2->Rows[index]->Cells[3]->Value->ToString();
	this->Us->UEmail = dataGridView2->Rows[index]->Cells[2]->Value->ToString();
	this->Us->UId = dataGridView2->Rows[index]->Cells[0]->Value->ToString();
	this->Us->ShowDialog(this);
	return System::Void();
}

System::Void PCShop::AdminPanel::button13_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Users.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
	dbConnection->Open();
	String^ query = "SELECT * FROM [Users]";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
	dataGridView2->Rows->Clear();
	bool check = true;
	int compare;
	string Str1, Str2;
	Str1 = msclr::interop::marshal_as<std::string>(textBox3->Text);
	if (Str1.size() == 1) {
		compare = 1;
	}
	else compare = (Str1.size());
	while (dbReader->Read()) {
		Str2 = msclr::interop::marshal_as<std::string>(dbReader["�����"]->ToString());
		if (compare > Str2.size()) {
			continue;
		}
		for (int i = 0; i < compare; i++) {
			if (Str1[i] != Str2[i]) {
				check = false;
			}
		}
		if (check == false) {
			check = true; continue;
		}
		else {
			dataGridView2->Rows->Add(dbReader["Idpol"], dbReader["�����"], dbReader["�����"], dbReader["������"]);
		}
	}
	dbReader->Close();
	dbConnection->Close();
	return System::Void();
}

System::Void PCShop::AdminPanel::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("�������� ���� ������ ��� ��������!", "��������!");
		return;
	}
	System::Windows::Forms::DialogResult i = MessageBox::Show("�� ������������� ������ ������� �������������?", "�������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (i == System::Windows::Forms::DialogResult::Yes) {
		int index = dataGridView1->SelectedRows[0]->Index;
		String^ Id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
		String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=ProdStorage.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
		dbConnection->Open();
		String^ query = "DELETE FROM [Storage] WHERE Id = " + Id;
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
		if (dbCommand->ExecuteNonQuery() != 1) {
			MessageBox::Show("������ ���������� �������!", "������!");
		}
		else {
			MessageBox::Show("������ ������� �������!", "������!");
			dataGridView2->Rows->RemoveAt(index);
		}
		dbConnection->Close();
	}
	return System::Void();
}

System::Void PCShop::AdminPanel::button14_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Users.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "SELECT * FROM [Users]";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

	if (textBox1->Text == "" || textBox2->Text == "") {
		MessageBox::Show("�������� �������� ������", "������!");
		return;
	}

	dataGridView2->Rows->Clear();
	std::string Table_ID, Min_ID, Max_ID;
	String^ Tb_ID;
	int min, max, ch;
	Min_ID = msclr::interop::marshal_as<std::string>(textBox1->Text);
	Max_ID = msclr::interop::marshal_as<std::string>(textBox2->Text);
	regex re("([1-9]{1}[0-9]{0,10})");
	if (!regex_search(Min_ID, re)) {
		MessageBox::Show("������� ����� ����� � ����� ������!", "��������!");
		return;
	}
	if (!regex_search(Min_ID, re)) {
		MessageBox::Show("������� ����� ����� � ������ ������!", "��������!");
		return;
	}
	max = stoi(Max_ID);
	min = stoi(Min_ID);
	if (min > max) {
		MessageBox::Show("����� ������ ���� ������ �����, ��� ������!", "��������!");
		return;
	}


	while (dbReader->Read()) {

		Tb_ID = dbReader["Idpol"]->ToString();
		Table_ID = msclr::interop::marshal_as<std::string>(Tb_ID);
		ch = stoi(Table_ID);

		if (min <= ch && ch <= max) {
			dataGridView2->Rows->Add(dbReader["Idpol"], dbReader["�����"], dbReader["�����"], dbReader["������"]);
		}
	}
	dbReader->Close();
	dbConnection->Close();
	return System::Void();
}

System::Void PCShop::AdminPanel::button12_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView2->Rows->Clear();
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Users.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "SELECT * FROM [Users]";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

	if (dbReader->HasRows == false) {
		MessageBox::Show("������ ���������� ������", "������");
	}
	else {
		while (dbReader->Read()) {
			dataGridView2->Rows->Add(dbReader["Idpol"], dbReader["�����"], dbReader["�����"], dbReader["������"]);
		}
	}
	dbReader->Close();
	dbConnection->Close();
	return System::Void();
}

System::Void PCShop::AdminPanel::button1_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=ProdStorage.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "SELECT * FROM [Storage]";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();


	if (dbReader->HasRows == false) {
		MessageBox::Show("������ ���������� ������", "������");
	}
	else {
		dataGridView1->Rows->Clear();
		while (dbReader->Read()) {
			dataGridView1->Rows->Add(dbReader["Id"], dbReader["�������"], dbReader["�������������"],
				dbReader["���"], dbReader["������������"], dbReader["����"]);
		}
	}
	return System::Void();
}

System::Void PCShop::AdminPanel::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("�������� ���� ������ ��� ��������!", "��������!");
		return;
	}
	Ci = gcnew CircuitInfo();
	int index = dataGridView1->SelectedRows[0]->Index;
	this->Ci->ID = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	this->Ci->Admin = "1";
	this->Ci->Add = "0";
	this->AddOwnedForm(Ci);
	this->Ci->Show(this);
	return System::Void();
}

System::Void PCShop::AdminPanel::button10_Click(System::Object^ sender, System::EventArgs^ e)
{
	Ci = gcnew CircuitInfo();
	this->Ci->Admin = "1";
	this->Ci->Add = "1";
	this->AddOwnedForm(Ci);
	this->Ci->Show(this);
	return System::Void();
}

System::Void PCShop::AdminPanel::���ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
		string price1, price2;
	int pr1, pr2;
	bool price_ch = false, an_check = false, bn_check = false;

	if (minprice->Text != "" || maxprice->Text != "") {
		if (minprice->Text != "") {
			price1 = msclr::interop::marshal_as<std::string>(minprice->Text);
			regex re("([0-9]{1}[0-9]{0,10})");
			if (!regex_search(price1, re)) {
				MessageBox::Show("������� ����� ����� � ����������� ����!", "��������!");
				return;
			}
			pr1 = stoi(price1);
		}
		else pr1 = 0;
		if (maxprice->Text != "") {
			price2 = msclr::interop::marshal_as<std::string>(maxprice->Text);
			regex reg("([0-9]{1}[0-9]{0,10})");
			if (!regex_search(price2, reg)) {
				MessageBox::Show("������� ����� ����� � ������������ ����!", "��������!");
				return;
			}
			pr2 = stoi(price2);
		}
		else pr2 = 100000;
		if (pr2 < pr1) {
			MessageBox::Show("����������� ���� ������ ������������!", "��������!");
			return;
		}
		price_ch = true;
	}

	dataGridView1->Rows->Clear();
	if (check_producer_c(����������ToolStripMenuItem)) {
		if (check_producer_c(aMDToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, ����������ToolStripMenuItem->Text, aMDToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(aSUSToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, ����������ToolStripMenuItem->Text, aSUSToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(dellToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, ����������ToolStripMenuItem->Text, dellToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(mSIToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, ����������ToolStripMenuItem->Text, mSIToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(palitToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, ����������ToolStripMenuItem->Text, palitToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(powerColorToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, ����������ToolStripMenuItem->Text, powerColorToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(sapphireToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, ����������ToolStripMenuItem->Text, sapphireToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(sinotexToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, ����������ToolStripMenuItem->Text, sinotexToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(zOTACToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, ����������ToolStripMenuItem->Text, zOTACToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(nVIDIAToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, ����������ToolStripMenuItem->Text, nVIDIAToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (bn_check == false) search(pr1, pr2, prodname->Text, ����������ToolStripMenuItem->Text, "", price_ch);
		an_check = true;
		bn_check = false;
	}
	if (check_producer_c(���������ToolStripMenuItem)) {
		if (check_producer_c(aMDToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, ���������ToolStripMenuItem->Text, aMDToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(intelToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, ���������ToolStripMenuItem->Text, intelToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (bn_check == false) search(pr1, pr2, prodname->Text, ���������ToolStripMenuItem->Text, "", price_ch);
		an_check = true;
		bn_check = false;
	}
	if (check_producer_c(�����������������ToolStripMenuItem)) {
		if (check_producer_c(crusialToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, crusialToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(aDataToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, aDataToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(dellToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, dellToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(gSkillToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, gSkillToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(gigabyteToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, gigabyteToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(aMDToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, aMDToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(corsairToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, corsairToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(hPToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, hPToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(huaweiToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, huaweiToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(hyperXToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, hyperXToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(intelToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, intelToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(kingstonToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, kingstonToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(lenovoToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, lenovoToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(sumsungToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, sumsungToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(siliconPowerToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, siliconPowerToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(smartBueToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, smartBueToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (bn_check == false) search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, "", price_ch);
		an_check = true;
		bn_check = false;
	}
	if (check_producer_c(����������������ToolStripMenuItem)) {
		if (check_producer_c(aSUSToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, ����������������ToolStripMenuItem->Text, aSUSToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(intelToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, ����������������ToolStripMenuItem->Text, intelToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(mSIToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, ����������������ToolStripMenuItem->Text, mSIToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(gigabyteToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, ����������������ToolStripMenuItem->Text, gigabyteToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(aSRockToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, ����������������ToolStripMenuItem->Text, aSRockToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(supermicroToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, ����������������ToolStripMenuItem->Text, supermicroToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (bn_check == false) search(pr1, pr2, prodname->Text, ����������������ToolStripMenuItem->Text, "", price_ch);
		an_check = true;
		bn_check = false;
	}
	if (check_producer_c(�����������ToolStripMenuItem)) {
		if (check_producer_c(chieToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������ToolStripMenuItem->Text, chieToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(aSUSToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, �����������ToolStripMenuItem->Text, aSUSToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(beQuietToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������ToolStripMenuItem->Text, beQuietToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(chieftecToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������ToolStripMenuItem->Text, intelToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(coolerMasterToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������ToolStripMenuItem->Text, coolerMasterToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(corsairToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, �����������ToolStripMenuItem->Text, corsairToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(deepCoolToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������ToolStripMenuItem->Text, deepCoolToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(gigabyteToolStripMenuItem3)) {
			search(pr1, pr2, prodname->Text, �����������ToolStripMenuItem->Text, gigabyteToolStripMenuItem3->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(seasonicToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������ToolStripMenuItem->Text, seasonicToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(svenToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������ToolStripMenuItem->Text, svenToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(zalmanToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������ToolStripMenuItem->Text, zalmanToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (bn_check == false) search(pr1, pr2, prodname->Text, �����������ToolStripMenuItem->Text, "", price_ch);
		an_check = true;
		bn_check = false;
	}
	if (check_producer_c(sSDToolStripMenuItem)) {
		if (check_producer_c(aDataToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, sSDToolStripMenuItem->Text, aDataToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(aMDToolStripMenuItem3)) {
			search(pr1, pr2, prodname->Text, sSDToolStripMenuItem->Text, aMDToolStripMenuItem3->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(aSUSToolStripMenuItem3)) {
			search(pr1, pr2, prodname->Text, sSDToolStripMenuItem->Text, aSUSToolStripMenuItem3->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(corsairToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, sSDToolStripMenuItem->Text, corsairToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(crusialToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, sSDToolStripMenuItem->Text, crusialToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(gigabyteToolStripMenuItem4)) {
			search(pr1, pr2, prodname->Text, sSDToolStripMenuItem->Text, gigabyteToolStripMenuItem4->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(hPToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, sSDToolStripMenuItem->Text, hPToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(huaweiToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, sSDToolStripMenuItem->Text, huaweiToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(hyperXToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, sSDToolStripMenuItem->Text, hyperXToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(intelToolStripMenuItem3)) {
			search(pr1, pr2, prodname->Text, sSDToolStripMenuItem->Text, intelToolStripMenuItem3->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(kingstonToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, sSDToolStripMenuItem->Text, kingstonToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(sumsungToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, sSDToolStripMenuItem->Text, sumsungToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(sanDiskToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, sSDToolStripMenuItem->Text, sanDiskToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(seagateToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, sSDToolStripMenuItem->Text, seagateToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(toshibaToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, sSDToolStripMenuItem->Text, toshibaToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(wDToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, sSDToolStripMenuItem->Text, wDToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (bn_check == false) search(pr1, pr2, prodname->Text, sSDToolStripMenuItem->Text, "", price_ch);
		an_check = true;
		bn_check = false;
	}
	if (check_producer_c(������������ToolStripMenuItem)) {
		if (check_producer_c(dellToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, ������������ToolStripMenuItem->Text, dellToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(hPToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, ������������ToolStripMenuItem->Text, hPToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(huaweiToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, ������������ToolStripMenuItem->Text, huaweiToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(samsungToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, ������������ToolStripMenuItem->Text, samsungToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(seagateToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, ������������ToolStripMenuItem->Text, seagateToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(toshibaToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, ������������ToolStripMenuItem->Text, toshibaToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer(wDToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, ������������ToolStripMenuItem->Text, wDToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (bn_check == false) search(pr1, pr2, prodname->Text, ������������ToolStripMenuItem->Text, "", price_ch);
		an_check = true;
		bn_check = false;
	}
	if (check_producer_c(�����������������ToolStripMenuItem)) {
		if (check_producer_c(aeroCoolToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, aeroCoolToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(aMDToolStripMenuItem4)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, aMDToolStripMenuItem4->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(aSUSToolStripMenuItem5)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, aSUSToolStripMenuItem5->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(beQuietToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, beQuietToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(chieftecToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, chieftecToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(coolerMasterToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, coolerMasterToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(corsairToolStripMenuItem3)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, corsairToolStripMenuItem3->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(deepCoolToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, deepCoolToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(gigabyteToolStripMenuItem6)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, gigabyteToolStripMenuItem6->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(intelToolStripMenuItem5)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, intelToolStripMenuItem5->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(pCCoolerToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, pCCoolerToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(sapphireToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, sapphireToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(sypermicroToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, sypermicroToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(zalmanToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, zalmanToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (bn_check == false) search(pr1, pr2, prodname->Text, �����������������ToolStripMenuItem->Text, "", price_ch);
		an_check = true;
		bn_check = false;
	}
	if (check_producer_c(�������ToolStripMenuItem)) {
		if (check_producer_c(aeroCoolToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �������ToolStripMenuItem->Text, aeroCoolToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(aSUSToolStripMenuItem4)) {
			search(pr1, pr2, prodname->Text, �������ToolStripMenuItem->Text, aSUSToolStripMenuItem4->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(beQuietToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, �������ToolStripMenuItem->Text, beQuietToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(chieftecToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, �������ToolStripMenuItem->Text, chieftecToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(coolerMasterToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, �������ToolStripMenuItem->Text, coolerMasterToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(deepCoolToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, �������ToolStripMenuItem->Text, deepCoolToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(gigabyteToolStripMenuItem5)) {
			search(pr1, pr2, prodname->Text, �������ToolStripMenuItem->Text, gigabyteToolStripMenuItem5->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(intelToolStripMenuItem4)) {
			search(pr1, pr2, prodname->Text, �������ToolStripMenuItem->Text, intelToolStripMenuItem4->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(mSIToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, �������ToolStripMenuItem->Text, mSIToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(powercaseToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �������ToolStripMenuItem->Text, powercaseToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(sypermicroToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, �������ToolStripMenuItem->Text, sypermicroToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(zalmanToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, �������ToolStripMenuItem->Text, zalmanToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (bn_check == false) search(pr1, pr2, prodname->Text, �������ToolStripMenuItem->Text, "", price_ch);
		an_check = true;
		bn_check = false;
	}
	if (an_check == false) {
		search(pr1, pr2, prodname->Text, "", "", price_ch);
	}
	return System::Void();
}
