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
	System::Windows::Forms::DialogResult i = MessageBox::Show("�� ������������� ������ ������� ������?", "������� ������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (i == System::Windows::Forms::DialogResult::Yes) {
		if (textBox1->Text != textBox2->Text) {
			MessageBox::Show("������ �� ���������!", "", MessageBoxButtons::OK);
		}
		else {
			String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Users.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

			dbConnection->Open();
			String^ query = "UPDATE [Users] SET ������='" + textBox1->Text + "' WHERE Idpol=" + UId + "";
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			dbCommand->ExecuteNonQuery();
			MessageBox::Show("������ ������� �������!", "", MessageBoxButtons::OK);
			dbConnection->Close();
			this->Close();
		}
	}
	return System::Void();
}
