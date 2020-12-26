#pragma once
#include "Registration.h"
#include "Main menu.h"
#include "UserData.h"
#include <msclr\marshal_cppstd.h>

namespace PCShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Autorization : public System::Windows::Forms::Form
	{
	public:
		Autorization(void)
		{
			InitializeComponent();
		}

		String^ ULog, ^ UPassword, ^ UEmail, ^ UId;

	protected:
		~Autorization()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Enter;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	protected:
	private:
		Registration^ Reg;
		Mainmenu^ Men;
		bool check_TBox2;
	private: System::Windows::Forms::Button^ Show;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Autorization::typeid));
			this->Enter = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Show = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Enter
			// 
			this->Enter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Enter->Location = System::Drawing::Point(144, 112);
			this->Enter->Name = L"Enter";
			this->Enter->Size = System::Drawing::Size(75, 23);
			this->Enter->TabIndex = 0;
			this->Enter->Text = L"Вход";
			this->Enter->UseVisualStyleBackColor = true;
			this->Enter->Click += gcnew System::EventHandler(this, &Autorization::button1_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(124, 146);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Регистрация";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Autorization::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(89, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(184, 22);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(89, 69);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(139, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Autorization::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Логин: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Пароль:";
			// 
			// Show
			// 
			this->Show->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Show->Location = System::Drawing::Point(234, 69);
			this->Show->Name = L"Show";
			this->Show->Size = System::Drawing::Size(85, 23);
			this->Show->TabIndex = 6;
			this->Show->Text = L"Показать";
			this->Show->UseVisualStyleBackColor = true;
			this->Show->Click += gcnew System::EventHandler(this, &Autorization::button3_Click);
			// 
			// Autorization
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(331, 186);
			this->Controls->Add(this->Show);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Enter);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(349, 233);
			this->MinimumSize = System::Drawing::Size(349, 233);
			this->Name = L"Autorization";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Авторизация";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Autorization::Autorization_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Autorization::Autorization_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Autorization_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e){}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e); 
	private: System::Void Autorization_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
};
}
