#include "ChgPass.h"


System::Void PCShop::ChgPass::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (check_TBox1) {
		textBox1->UseSystemPasswordChar = false;
		check_TBox1 = false;
	}
	else {
		textBox1->UseSystemPasswordChar = true;
		check_TBox1 = true;
	}
	return System::Void();
}

System::Void PCShop::ChgPass::button2_Click(System::Object^ sender, System::EventArgs^ e)
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

System::Void PCShop::ChgPass::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DialogResult i = MessageBox::Show("Вы действительно хотите сменить пароль?", "Сменить пароль", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (i == System::Windows::Forms::DialogResult::Yes) {
		if (textBox1->Text != textBox2->Text) {
			MessageBox::Show("Пароли не совпадают!", "", MessageBoxButtons::OK);
		}
		else {
			String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Users.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

			dbConnection->Open();
			String^ query = "UPDATE [Users] SET Пароль='" + textBox1->Text + "' WHERE Idpol=" + UId + "";
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			dbCommand->ExecuteNonQuery();
			MessageBox::Show("Пароль успешно изменен!", "", MessageBoxButtons::OK);
			dbConnection->Close();
			this->Close();
		}
	}
	return System::Void();
}
