#include "Autorization.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	PCShop::Autorization Aut;
	Application::Run(% Aut);
}

System::Void PCShop::Autorization::Autorization_Load(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Users.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "SELECT * FROM [Users]";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

	if (dbReader->Read()) {
		MessageBox::Show("Успех подключения БД", "Ура!");
	}

	dbReader->Close();
	dbConnection->Close();
	return System::Void();
}

System::Void PCShop::Autorization::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	bool check = false;
	String^ Login, ^ Password, ^ Login_Check, ^ Password_Check, ^ Idpol_Check, ^ Email_Check;
	Login = textBox1->Text;
	Password = textBox2->Text;
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Users.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
	dbConnection->Open();
	String^ query = "SELECT * FROM [Users]";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
	while (dbReader->Read()) {
		Login_Check = (String^)dbReader["Логин"];
		Password_Check = (String^)dbReader["Пароль"];
		Idpol_Check = dbReader["Idpol"]->ToString();
		Email_Check = (String^)dbReader["Почта"];
		if (Login_Check == Login && Password_Check == Password) {
			MessageBox::Show("Пользователь " + Login + " успешно авторизован!", "Успешный вход!", MessageBoxButtons::OK);
			ULog = Login;
			UEmail = Email_Check;
			UId = Idpol_Check;
			UPassword = Password;
			dbReader->Close();
			dbConnection->Close();
			check = true;
			if (Men) Men->Close();
			Men = gcnew Mainmenu();
			this->AddOwnedForm(Men);
			this->Men->ULog = ULog;
			this->Men->UId = UId;
			this->Men->UPassword = UPassword;
			this->Men->UEmail = UEmail;
			this->Hide();
			this->Men->ShowDialog(this);
			this->Visible = true;
			delete Men;
			break;
		}
	}
	if (check == false) {
		MessageBox::Show("Пользователь " + Login + " не зарегистрирован, либо неверно введены данные пользователя", "", MessageBoxButtons::OK);
		dbReader->Close();
		dbConnection->Close();
	}
	return System::Void();
}

System::Void PCShop::Autorization::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (Reg) Reg->Close();
	Reg = gcnew Registration();
	this->AddOwnedForm(Reg);
	this->Visible = false;
	this->Reg->ShowDialog(this);
	this->Visible = true;
	return System::Void();
}

System::Void PCShop::Autorization::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (check_TBox2) {
		textBox2->UseSystemPasswordChar = false;
		check_TBox2 = false;
	}
	else {
		textBox2->UseSystemPasswordChar = true;
		check_TBox2 = true;
	}
	return System::Void();
}

System::Void PCShop::Autorization::Autorization_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
	Application::Exit();
	return System::Void();
}
