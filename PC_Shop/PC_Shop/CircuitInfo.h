#pragma once
#include <regex>
#include <string>
#include <msclr\marshal_cppstd.h>

namespace PCShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace std;


	public ref class CircuitInfo : public System::Windows::Forms::Form
	{
	public:
		CircuitInfo(void)
		{
			InitializeComponent();
		}

		String^ ID, ^Admin, ^Add;
	private: System::Windows::Forms::Button^ save_Char_button;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ изменитьТипToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ видеокартаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aMDToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aSUSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dellToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gigabyteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mSIToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nVIDIAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sapphireToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ процессорToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aMDToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ intelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ материнскаяПлатаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aSUSToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ intelToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ mSIToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ gigabyteToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ aSRockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ supermicroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оперативнаяПамятьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aDataToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aMDToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ corsairToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ crusialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dellToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ gSkillToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gigabyteToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ блокПитанияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sSDToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ жесткиеДискиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ системаОхлажденияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ корпусаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ hPToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ huaweiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ hyperXToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ intelToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ kingstonToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lenovoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sumsungToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ siliconPowerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ smartBueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ информацияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ chieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aSUSToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ beQuietToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ chieftecToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ coolerMasterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ corsairToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ deepCoolToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gigabyteToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ svenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ seasonicToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zalmanToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aDataToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ aMDToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ aSUSToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ corsairToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ crusialToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ gigabyteToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ hPToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ huaweiToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ hyperXToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ intelToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ kingstonToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ sumsungToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ sanDiskToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ seagateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toshibaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wDToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dellToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ hPToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ huaweiToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ samsungToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ seagateToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toshibaToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ wDToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ aeroCoolToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ aMDToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ aSUSToolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ beQuietToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ chieftecToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ coolerMasterToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ corsairToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ deepCoolToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ gigabyteToolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^ intelToolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ pCCoolerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sapphireToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ sypermicroToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ zalmanToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ aeroCoolToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aSUSToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ beQuietToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ chieftecToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ coolerMasterToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ deepCoolToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ gigabyteToolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ intelToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ mSIToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ powercaseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sypermicroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zalmanToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ powerColorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sinotexToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zOTACToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ palitToolStripMenuItem1;
	private: System::Windows::Forms::Button^ redaction_button1;
	private: System::Windows::Forms::Button^ redaction_button2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;	
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	public:
	private: System::Windows::Forms::Button^ Chose_Pic_button;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CircuitInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ type;
	private: System::Windows::Forms::TextBox^ name;
	private: System::Windows::Forms::TextBox^ producer;
	private: System::Windows::Forms::TextBox^ price;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ amount;
	private: System::Windows::Forms::RichTextBox^ Characteristics;

	private:
	
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CircuitInfo::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->type = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->producer = (gcnew System::Windows::Forms::TextBox());
			this->price = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->amount = (gcnew System::Windows::Forms::TextBox());
			this->Characteristics = (gcnew System::Windows::Forms::RichTextBox());
			this->save_Char_button = (gcnew System::Windows::Forms::Button());
			this->Chose_Pic_button = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->информацияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->изменитьТипToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->видеокартаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aMDToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aSUSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dellToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gigabyteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mSIToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->palitToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->powerColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sapphireToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sinotexToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zOTACToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nVIDIAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->процессорToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aMDToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->intelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->материнскаяПлатаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aSUSToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->intelToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mSIToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gigabyteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aSRockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supermicroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оперативнаяПамятьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aDataToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aMDToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->corsairToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->crusialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dellToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gSkillToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gigabyteToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hPToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->huaweiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hyperXToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->intelToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kingstonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lenovoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sumsungToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->siliconPowerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->smartBueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->блокПитанияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aSUSToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->beQuietToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chieftecToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->coolerMasterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->corsairToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deepCoolToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gigabyteToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->seasonicToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->svenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zalmanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sSDToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aDataToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aMDToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aSUSToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->corsairToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->crusialToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gigabyteToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hPToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->huaweiToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hyperXToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->intelToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kingstonToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sumsungToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sanDiskToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->seagateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toshibaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wDToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->жесткиеДискиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dellToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hPToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->huaweiToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->samsungToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->seagateToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toshibaToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wDToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->системаОхлажденияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aeroCoolToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aMDToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aSUSToolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->beQuietToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chieftecToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->coolerMasterToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->corsairToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deepCoolToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gigabyteToolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->intelToolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pCCoolerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sapphireToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sypermicroToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zalmanToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->корпусаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aeroCoolToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aSUSToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->beQuietToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chieftecToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->coolerMasterToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deepCoolToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gigabyteToolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->intelToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mSIToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->powercaseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sypermicroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zalmanToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redaction_button1 = (gcnew System::Windows::Forms::Button());
			this->redaction_button2 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(104, 37);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(320, 180);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(506, 238);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Цена:";
			this->label1->Click += gcnew System::EventHandler(this, &CircuitInfo::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(506, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Название: ";
			this->label2->Click += gcnew System::EventHandler(this, &CircuitInfo::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(506, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Производитель:";
			this->label3->Click += gcnew System::EventHandler(this, &CircuitInfo::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(506, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Тип: ";
			this->label4->Click += gcnew System::EventHandler(this, &CircuitInfo::label4_Click);
			// 
			// type
			// 
			this->type->Location = System::Drawing::Point(509, 75);
			this->type->Name = L"type";
			this->type->ReadOnly = true;
			this->type->Size = System::Drawing::Size(288, 22);
			this->type->TabIndex = 5;
			this->type->TextChanged += gcnew System::EventHandler(this, &CircuitInfo::type_TextChanged);
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(509, 121);
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			this->name->Size = System::Drawing::Size(288, 22);
			this->name->TabIndex = 6;
			this->name->TextChanged += gcnew System::EventHandler(this, &CircuitInfo::name_TextChanged);
			// 
			// producer
			// 
			this->producer->Location = System::Drawing::Point(509, 166);
			this->producer->Name = L"producer";
			this->producer->ReadOnly = true;
			this->producer->Size = System::Drawing::Size(288, 22);
			this->producer->TabIndex = 7;
			this->producer->TextChanged += gcnew System::EventHandler(this, &CircuitInfo::producer_TextChanged);
			// 
			// price
			// 
			this->price->Location = System::Drawing::Point(509, 258);
			this->price->Name = L"price";
			this->price->ReadOnly = true;
			this->price->Size = System::Drawing::Size(288, 22);
			this->price->TabIndex = 8;
			this->price->TextChanged += gcnew System::EventHandler(this, &CircuitInfo::price_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(201, 238);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(116, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Характеристика";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(506, 191);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 17);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Наличие:";
			this->label6->Click += gcnew System::EventHandler(this, &CircuitInfo::label6_Click);
			// 
			// amount
			// 
			this->amount->Location = System::Drawing::Point(509, 211);
			this->amount->Name = L"amount";
			this->amount->ReadOnly = true;
			this->amount->Size = System::Drawing::Size(288, 22);
			this->amount->TabIndex = 12;
			this->amount->TextChanged += gcnew System::EventHandler(this, &CircuitInfo::amount_TextChanged);
			// 
			// Characteristics
			// 
			this->Characteristics->Location = System::Drawing::Point(47, 258);
			this->Characteristics->Name = L"Characteristics";
			this->Characteristics->ReadOnly = true;
			this->Characteristics->Size = System::Drawing::Size(448, 145);
			this->Characteristics->TabIndex = 13;
			this->Characteristics->Text = L"";
			// 
			// save_Char_button
			// 
			this->save_Char_button->Enabled = false;
			this->save_Char_button->Location = System::Drawing::Point(509, 297);
			this->save_Char_button->Name = L"save_Char_button";
			this->save_Char_button->Size = System::Drawing::Size(196, 23);
			this->save_Char_button->TabIndex = 14;
			this->save_Char_button->Text = L"Сохранить изменения";
			this->save_Char_button->UseVisualStyleBackColor = true;
			this->save_Char_button->Visible = false;
			this->save_Char_button->Click += gcnew System::EventHandler(this, &CircuitInfo::save_Char_button_Click);
			// 
			// Chose_Pic_button
			// 
			this->Chose_Pic_button->Enabled = false;
			this->Chose_Pic_button->Location = System::Drawing::Point(509, 326);
			this->Chose_Pic_button->Name = L"Chose_Pic_button";
			this->Chose_Pic_button->Size = System::Drawing::Size(196, 23);
			this->Chose_Pic_button->TabIndex = 15;
			this->Chose_Pic_button->Text = L"Выбрать картинку";
			this->Chose_Pic_button->UseVisualStyleBackColor = true;
			this->Chose_Pic_button->Visible = false;
			this->Chose_Pic_button->Click += gcnew System::EventHandler(this, &CircuitInfo::Chose_Pic_button_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Enabled = false;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->информацияToolStripMenuItem,
					this->toolStripMenuItem1, this->изменитьТипToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(916, 30);
			this->menuStrip1->TabIndex = 17;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->Visible = false;
			// 
			// информацияToolStripMenuItem
			// 
			this->информацияToolStripMenuItem->Name = L"информацияToolStripMenuItem";
			this->информацияToolStripMenuItem->Size = System::Drawing::Size(116, 26);
			this->информацияToolStripMenuItem->Text = L"Информация";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->AutoSize = false;
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(280, 26);
			// 
			// изменитьТипToolStripMenuItem
			// 
			this->изменитьТипToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->видеокартаToolStripMenuItem,
					this->процессорToolStripMenuItem, this->материнскаяПлатаToolStripMenuItem, this->оперативнаяПамятьToolStripMenuItem, this->блокПитанияToolStripMenuItem,
					this->sSDToolStripMenuItem, this->жесткиеДискиToolStripMenuItem, this->системаОхлажденияToolStripMenuItem, this->корпусаToolStripMenuItem
			});
			this->изменитьТипToolStripMenuItem->Name = L"изменитьТипToolStripMenuItem";
			this->изменитьТипToolStripMenuItem->Size = System::Drawing::Size(244, 26);
			this->изменитьТипToolStripMenuItem->Text = L"Изменить тип и производителя";
			this->изменитьТипToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::изменитьТипToolStripMenuItem_Click);
			// 
			// видеокартаToolStripMenuItem
			// 
			this->видеокартаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {
				this->aMDToolStripMenuItem,
					this->aSUSToolStripMenuItem, this->dellToolStripMenuItem, this->gigabyteToolStripMenuItem, this->mSIToolStripMenuItem, this->palitToolStripMenuItem1,
					this->powerColorToolStripMenuItem, this->sapphireToolStripMenuItem, this->sinotexToolStripMenuItem, this->zOTACToolStripMenuItem,
					this->nVIDIAToolStripMenuItem
			});
			this->видеокартаToolStripMenuItem->Name = L"видеокартаToolStripMenuItem";
			this->видеокартаToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->видеокартаToolStripMenuItem->Text = L"Видеокарта";
			// 
			// aMDToolStripMenuItem
			// 
			this->aMDToolStripMenuItem->Name = L"aMDToolStripMenuItem";
			this->aMDToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->aMDToolStripMenuItem->Text = L"AMD";
			this->aMDToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::aMDToolStripMenuItem_Click);
			// 
			// aSUSToolStripMenuItem
			// 
			this->aSUSToolStripMenuItem->Name = L"aSUSToolStripMenuItem";
			this->aSUSToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->aSUSToolStripMenuItem->Text = L"ASUS";
			this->aSUSToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::aSUSToolStripMenuItem_Click);
			// 
			// dellToolStripMenuItem
			// 
			this->dellToolStripMenuItem->Name = L"dellToolStripMenuItem";
			this->dellToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->dellToolStripMenuItem->Text = L"Dell";
			this->dellToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::dellToolStripMenuItem_Click);
			// 
			// gigabyteToolStripMenuItem
			// 
			this->gigabyteToolStripMenuItem->Name = L"gigabyteToolStripMenuItem";
			this->gigabyteToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->gigabyteToolStripMenuItem->Text = L"Gigabyte";
			this->gigabyteToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::gigabyteToolStripMenuItem_Click);
			// 
			// mSIToolStripMenuItem
			// 
			this->mSIToolStripMenuItem->Name = L"mSIToolStripMenuItem";
			this->mSIToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->mSIToolStripMenuItem->Text = L"MSI";
			this->mSIToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::mSIToolStripMenuItem_Click);
			// 
			// palitToolStripMenuItem1
			// 
			this->palitToolStripMenuItem1->Name = L"palitToolStripMenuItem1";
			this->palitToolStripMenuItem1->Size = System::Drawing::Size(168, 26);
			this->palitToolStripMenuItem1->Text = L"Palit";
			this->palitToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::palitToolStripMenuItem1_Click);
			// 
			// powerColorToolStripMenuItem
			// 
			this->powerColorToolStripMenuItem->Name = L"powerColorToolStripMenuItem";
			this->powerColorToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->powerColorToolStripMenuItem->Text = L"PowerColor";
			this->powerColorToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::powerColorToolStripMenuItem_Click);
			// 
			// sapphireToolStripMenuItem
			// 
			this->sapphireToolStripMenuItem->Name = L"sapphireToolStripMenuItem";
			this->sapphireToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->sapphireToolStripMenuItem->Text = L"Sapphire";
			this->sapphireToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::sapphireToolStripMenuItem_Click);
			// 
			// sinotexToolStripMenuItem
			// 
			this->sinotexToolStripMenuItem->Name = L"sinotexToolStripMenuItem";
			this->sinotexToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->sinotexToolStripMenuItem->Text = L"Sinotex";
			this->sinotexToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::sinotexToolStripMenuItem_Click);
			// 
			// zOTACToolStripMenuItem
			// 
			this->zOTACToolStripMenuItem->Name = L"zOTACToolStripMenuItem";
			this->zOTACToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->zOTACToolStripMenuItem->Text = L"ZOTAC";
			this->zOTACToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::zOTACToolStripMenuItem_Click);
			// 
			// nVIDIAToolStripMenuItem
			// 
			this->nVIDIAToolStripMenuItem->Name = L"nVIDIAToolStripMenuItem";
			this->nVIDIAToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->nVIDIAToolStripMenuItem->Text = L"NVIDIA";
			this->nVIDIAToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::nVIDIAToolStripMenuItem_Click);
			// 
			// процессорToolStripMenuItem
			// 
			this->процессорToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aMDToolStripMenuItem1,
					this->intelToolStripMenuItem
			});
			this->процессорToolStripMenuItem->Name = L"процессорToolStripMenuItem";
			this->процессорToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->процессорToolStripMenuItem->Text = L"Процессор";
			// 
			// aMDToolStripMenuItem1
			// 
			this->aMDToolStripMenuItem1->Name = L"aMDToolStripMenuItem1";
			this->aMDToolStripMenuItem1->Size = System::Drawing::Size(126, 26);
			this->aMDToolStripMenuItem1->Text = L"AMD";
			this->aMDToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::aMDToolStripMenuItem1_Click);
			// 
			// intelToolStripMenuItem
			// 
			this->intelToolStripMenuItem->Name = L"intelToolStripMenuItem";
			this->intelToolStripMenuItem->Size = System::Drawing::Size(126, 26);
			this->intelToolStripMenuItem->Text = L"Intel";
			this->intelToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::intelToolStripMenuItem_Click);
			// 
			// материнскаяПлатаToolStripMenuItem
			// 
			this->материнскаяПлатаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->aSUSToolStripMenuItem1,
					this->intelToolStripMenuItem1, this->mSIToolStripMenuItem1, this->gigabyteToolStripMenuItem1, this->aSRockToolStripMenuItem,
					this->supermicroToolStripMenuItem
			});
			this->материнскаяПлатаToolStripMenuItem->Name = L"материнскаяПлатаToolStripMenuItem";
			this->материнскаяПлатаToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->материнскаяПлатаToolStripMenuItem->Text = L"Материнская плата";
			// 
			// aSUSToolStripMenuItem1
			// 
			this->aSUSToolStripMenuItem1->Name = L"aSUSToolStripMenuItem1";
			this->aSUSToolStripMenuItem1->Size = System::Drawing::Size(168, 26);
			this->aSUSToolStripMenuItem1->Text = L"ASUS";
			this->aSUSToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::aSUSToolStripMenuItem1_Click);
			// 
			// intelToolStripMenuItem1
			// 
			this->intelToolStripMenuItem1->Name = L"intelToolStripMenuItem1";
			this->intelToolStripMenuItem1->Size = System::Drawing::Size(168, 26);
			this->intelToolStripMenuItem1->Text = L"Intel";
			this->intelToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::intelToolStripMenuItem1_Click);
			// 
			// mSIToolStripMenuItem1
			// 
			this->mSIToolStripMenuItem1->Name = L"mSIToolStripMenuItem1";
			this->mSIToolStripMenuItem1->Size = System::Drawing::Size(168, 26);
			this->mSIToolStripMenuItem1->Text = L"MSI";
			this->mSIToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::mSIToolStripMenuItem1_Click);
			// 
			// gigabyteToolStripMenuItem1
			// 
			this->gigabyteToolStripMenuItem1->Name = L"gigabyteToolStripMenuItem1";
			this->gigabyteToolStripMenuItem1->Size = System::Drawing::Size(168, 26);
			this->gigabyteToolStripMenuItem1->Text = L"Gigabyte";
			this->gigabyteToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::gigabyteToolStripMenuItem1_Click);
			// 
			// aSRockToolStripMenuItem
			// 
			this->aSRockToolStripMenuItem->Name = L"aSRockToolStripMenuItem";
			this->aSRockToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->aSRockToolStripMenuItem->Text = L"ASRock";
			this->aSRockToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::aSRockToolStripMenuItem_Click);
			// 
			// supermicroToolStripMenuItem
			// 
			this->supermicroToolStripMenuItem->Name = L"supermicroToolStripMenuItem";
			this->supermicroToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->supermicroToolStripMenuItem->Text = L"Supermicro";
			this->supermicroToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::supermicroToolStripMenuItem_Click);
			// 
			// оперативнаяПамятьToolStripMenuItem
			// 
			this->оперативнаяПамятьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(16) {
				this->aDataToolStripMenuItem,
					this->aMDToolStripMenuItem2, this->corsairToolStripMenuItem, this->crusialToolStripMenuItem, this->dellToolStripMenuItem1, this->gSkillToolStripMenuItem,
					this->gigabyteToolStripMenuItem2, this->hPToolStripMenuItem, this->huaweiToolStripMenuItem, this->hyperXToolStripMenuItem, this->intelToolStripMenuItem2,
					this->kingstonToolStripMenuItem, this->lenovoToolStripMenuItem, this->sumsungToolStripMenuItem, this->siliconPowerToolStripMenuItem,
					this->smartBueToolStripMenuItem
			});
			this->оперативнаяПамятьToolStripMenuItem->Name = L"оперативнаяПамятьToolStripMenuItem";
			this->оперативнаяПамятьToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->оперативнаяПамятьToolStripMenuItem->Text = L"Оперативная память";
			// 
			// aDataToolStripMenuItem
			// 
			this->aDataToolStripMenuItem->Name = L"aDataToolStripMenuItem";
			this->aDataToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->aDataToolStripMenuItem->Text = L"A-Data";
			this->aDataToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::aDataToolStripMenuItem_Click);
			// 
			// aMDToolStripMenuItem2
			// 
			this->aMDToolStripMenuItem2->Name = L"aMDToolStripMenuItem2";
			this->aMDToolStripMenuItem2->Size = System::Drawing::Size(182, 26);
			this->aMDToolStripMenuItem2->Text = L"AMD";
			this->aMDToolStripMenuItem2->Click += gcnew System::EventHandler(this, &CircuitInfo::aMDToolStripMenuItem2_Click);
			// 
			// corsairToolStripMenuItem
			// 
			this->corsairToolStripMenuItem->Name = L"corsairToolStripMenuItem";
			this->corsairToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->corsairToolStripMenuItem->Text = L"Corsair";
			this->corsairToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::corsairToolStripMenuItem_Click);
			// 
			// crusialToolStripMenuItem
			// 
			this->crusialToolStripMenuItem->Name = L"crusialToolStripMenuItem";
			this->crusialToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->crusialToolStripMenuItem->Text = L"Crusial";
			this->crusialToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::crusialToolStripMenuItem_Click);
			// 
			// dellToolStripMenuItem1
			// 
			this->dellToolStripMenuItem1->Name = L"dellToolStripMenuItem1";
			this->dellToolStripMenuItem1->Size = System::Drawing::Size(182, 26);
			this->dellToolStripMenuItem1->Text = L"Dell";
			this->dellToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::dellToolStripMenuItem1_Click);
			// 
			// gSkillToolStripMenuItem
			// 
			this->gSkillToolStripMenuItem->Name = L"gSkillToolStripMenuItem";
			this->gSkillToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->gSkillToolStripMenuItem->Text = L"G.Skill";
			this->gSkillToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::gSkillToolStripMenuItem_Click);
			// 
			// gigabyteToolStripMenuItem2
			// 
			this->gigabyteToolStripMenuItem2->Name = L"gigabyteToolStripMenuItem2";
			this->gigabyteToolStripMenuItem2->Size = System::Drawing::Size(182, 26);
			this->gigabyteToolStripMenuItem2->Text = L"Gigabyte";
			this->gigabyteToolStripMenuItem2->Click += gcnew System::EventHandler(this, &CircuitInfo::gigabyteToolStripMenuItem2_Click);
			// 
			// hPToolStripMenuItem
			// 
			this->hPToolStripMenuItem->Name = L"hPToolStripMenuItem";
			this->hPToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->hPToolStripMenuItem->Text = L"HP";
			this->hPToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::hPToolStripMenuItem_Click);
			// 
			// huaweiToolStripMenuItem
			// 
			this->huaweiToolStripMenuItem->Name = L"huaweiToolStripMenuItem";
			this->huaweiToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->huaweiToolStripMenuItem->Text = L"Huawei";
			this->huaweiToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::huaweiToolStripMenuItem_Click);
			// 
			// hyperXToolStripMenuItem
			// 
			this->hyperXToolStripMenuItem->Name = L"hyperXToolStripMenuItem";
			this->hyperXToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->hyperXToolStripMenuItem->Text = L"HyperX";
			this->hyperXToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::hyperXToolStripMenuItem_Click);
			// 
			// intelToolStripMenuItem2
			// 
			this->intelToolStripMenuItem2->Name = L"intelToolStripMenuItem2";
			this->intelToolStripMenuItem2->Size = System::Drawing::Size(182, 26);
			this->intelToolStripMenuItem2->Text = L"Intel";
			this->intelToolStripMenuItem2->Click += gcnew System::EventHandler(this, &CircuitInfo::intelToolStripMenuItem2_Click);
			// 
			// kingstonToolStripMenuItem
			// 
			this->kingstonToolStripMenuItem->Name = L"kingstonToolStripMenuItem";
			this->kingstonToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->kingstonToolStripMenuItem->Text = L"Kingston";
			this->kingstonToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::kingstonToolStripMenuItem_Click);
			// 
			// lenovoToolStripMenuItem
			// 
			this->lenovoToolStripMenuItem->Name = L"lenovoToolStripMenuItem";
			this->lenovoToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->lenovoToolStripMenuItem->Text = L"Lenovo";
			this->lenovoToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::lenovoToolStripMenuItem_Click);
			// 
			// sumsungToolStripMenuItem
			// 
			this->sumsungToolStripMenuItem->Name = L"sumsungToolStripMenuItem";
			this->sumsungToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->sumsungToolStripMenuItem->Text = L"Sumsung";
			this->sumsungToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::sumsungToolStripMenuItem_Click);
			// 
			// siliconPowerToolStripMenuItem
			// 
			this->siliconPowerToolStripMenuItem->Name = L"siliconPowerToolStripMenuItem";
			this->siliconPowerToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->siliconPowerToolStripMenuItem->Text = L"Silicon-Power";
			this->siliconPowerToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::siliconPowerToolStripMenuItem_Click);
			// 
			// smartBueToolStripMenuItem
			// 
			this->smartBueToolStripMenuItem->Name = L"smartBueToolStripMenuItem";
			this->smartBueToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->smartBueToolStripMenuItem->Text = L"SmartBuy";
			this->smartBueToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::smartBueToolStripMenuItem_Click);
			// 
			// блокПитанияToolStripMenuItem
			// 
			this->блокПитанияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {
				this->chieToolStripMenuItem,
					this->aSUSToolStripMenuItem2, this->beQuietToolStripMenuItem, this->chieftecToolStripMenuItem, this->coolerMasterToolStripMenuItem,
					this->corsairToolStripMenuItem1, this->deepCoolToolStripMenuItem, this->gigabyteToolStripMenuItem3, this->seasonicToolStripMenuItem,
					this->svenToolStripMenuItem, this->zalmanToolStripMenuItem
			});
			this->блокПитанияToolStripMenuItem->Name = L"блокПитанияToolStripMenuItem";
			this->блокПитанияToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->блокПитанияToolStripMenuItem->Text = L"Блок питания";
			// 
			// chieToolStripMenuItem
			// 
			this->chieToolStripMenuItem->Name = L"chieToolStripMenuItem";
			this->chieToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->chieToolStripMenuItem->Text = L"AeroCool";
			this->chieToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::chieToolStripMenuItem_Click);
			// 
			// aSUSToolStripMenuItem2
			// 
			this->aSUSToolStripMenuItem2->Name = L"aSUSToolStripMenuItem2";
			this->aSUSToolStripMenuItem2->Size = System::Drawing::Size(185, 26);
			this->aSUSToolStripMenuItem2->Text = L"ASUS";
			this->aSUSToolStripMenuItem2->Click += gcnew System::EventHandler(this, &CircuitInfo::aSUSToolStripMenuItem2_Click);
			// 
			// beQuietToolStripMenuItem
			// 
			this->beQuietToolStripMenuItem->Name = L"beQuietToolStripMenuItem";
			this->beQuietToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->beQuietToolStripMenuItem->Text = L"be quiet!";
			this->beQuietToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::beQuietToolStripMenuItem_Click);
			// 
			// chieftecToolStripMenuItem
			// 
			this->chieftecToolStripMenuItem->Name = L"chieftecToolStripMenuItem";
			this->chieftecToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->chieftecToolStripMenuItem->Text = L"Chieftec";
			this->chieftecToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::chieftecToolStripMenuItem_Click);
			// 
			// coolerMasterToolStripMenuItem
			// 
			this->coolerMasterToolStripMenuItem->Name = L"coolerMasterToolStripMenuItem";
			this->coolerMasterToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->coolerMasterToolStripMenuItem->Text = L"Cooler Master";
			this->coolerMasterToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::coolerMasterToolStripMenuItem_Click);
			// 
			// corsairToolStripMenuItem1
			// 
			this->corsairToolStripMenuItem1->Name = L"corsairToolStripMenuItem1";
			this->corsairToolStripMenuItem1->Size = System::Drawing::Size(185, 26);
			this->corsairToolStripMenuItem1->Text = L"Corsair";
			this->corsairToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::corsairToolStripMenuItem1_Click);
			// 
			// deepCoolToolStripMenuItem
			// 
			this->deepCoolToolStripMenuItem->Name = L"deepCoolToolStripMenuItem";
			this->deepCoolToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->deepCoolToolStripMenuItem->Text = L"DeepCool";
			this->deepCoolToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::deepCoolToolStripMenuItem_Click);
			// 
			// gigabyteToolStripMenuItem3
			// 
			this->gigabyteToolStripMenuItem3->Name = L"gigabyteToolStripMenuItem3";
			this->gigabyteToolStripMenuItem3->Size = System::Drawing::Size(185, 26);
			this->gigabyteToolStripMenuItem3->Text = L"Gigabyte";
			this->gigabyteToolStripMenuItem3->Click += gcnew System::EventHandler(this, &CircuitInfo::gigabyteToolStripMenuItem3_Click);
			// 
			// seasonicToolStripMenuItem
			// 
			this->seasonicToolStripMenuItem->Name = L"seasonicToolStripMenuItem";
			this->seasonicToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->seasonicToolStripMenuItem->Text = L"Seasonic";
			this->seasonicToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::seasonicToolStripMenuItem_Click);
			// 
			// svenToolStripMenuItem
			// 
			this->svenToolStripMenuItem->Name = L"svenToolStripMenuItem";
			this->svenToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->svenToolStripMenuItem->Text = L"SVEN";
			this->svenToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::svenToolStripMenuItem_Click);
			// 
			// zalmanToolStripMenuItem
			// 
			this->zalmanToolStripMenuItem->Name = L"zalmanToolStripMenuItem";
			this->zalmanToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->zalmanToolStripMenuItem->Text = L"Zalman";
			this->zalmanToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::zalmanToolStripMenuItem_Click);
			// 
			// sSDToolStripMenuItem
			// 
			this->sSDToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(16) {
				this->aDataToolStripMenuItem1,
					this->aMDToolStripMenuItem3, this->aSUSToolStripMenuItem3, this->corsairToolStripMenuItem2, this->crusialToolStripMenuItem1,
					this->gigabyteToolStripMenuItem4, this->hPToolStripMenuItem1, this->huaweiToolStripMenuItem1, this->hyperXToolStripMenuItem1,
					this->intelToolStripMenuItem3, this->kingstonToolStripMenuItem1, this->sumsungToolStripMenuItem1, this->sanDiskToolStripMenuItem,
					this->seagateToolStripMenuItem, this->toshibaToolStripMenuItem, this->wDToolStripMenuItem
			});
			this->sSDToolStripMenuItem->Name = L"sSDToolStripMenuItem";
			this->sSDToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->sSDToolStripMenuItem->Text = L"SSD";
			// 
			// aDataToolStripMenuItem1
			// 
			this->aDataToolStripMenuItem1->Name = L"aDataToolStripMenuItem1";
			this->aDataToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
			this->aDataToolStripMenuItem1->Text = L"A-Data";
			this->aDataToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::aDataToolStripMenuItem1_Click);
			// 
			// aMDToolStripMenuItem3
			// 
			this->aMDToolStripMenuItem3->Name = L"aMDToolStripMenuItem3";
			this->aMDToolStripMenuItem3->Size = System::Drawing::Size(152, 26);
			this->aMDToolStripMenuItem3->Text = L"AMD";
			this->aMDToolStripMenuItem3->Click += gcnew System::EventHandler(this, &CircuitInfo::aMDToolStripMenuItem3_Click);
			// 
			// aSUSToolStripMenuItem3
			// 
			this->aSUSToolStripMenuItem3->Name = L"aSUSToolStripMenuItem3";
			this->aSUSToolStripMenuItem3->Size = System::Drawing::Size(152, 26);
			this->aSUSToolStripMenuItem3->Text = L"ASUS";
			this->aSUSToolStripMenuItem3->Click += gcnew System::EventHandler(this, &CircuitInfo::aSUSToolStripMenuItem3_Click);
			// 
			// corsairToolStripMenuItem2
			// 
			this->corsairToolStripMenuItem2->Name = L"corsairToolStripMenuItem2";
			this->corsairToolStripMenuItem2->Size = System::Drawing::Size(152, 26);
			this->corsairToolStripMenuItem2->Text = L"Corsair";
			this->corsairToolStripMenuItem2->Click += gcnew System::EventHandler(this, &CircuitInfo::corsairToolStripMenuItem2_Click);
			// 
			// crusialToolStripMenuItem1
			// 
			this->crusialToolStripMenuItem1->Name = L"crusialToolStripMenuItem1";
			this->crusialToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
			this->crusialToolStripMenuItem1->Text = L"Crusial";
			this->crusialToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::crusialToolStripMenuItem1_Click);
			// 
			// gigabyteToolStripMenuItem4
			// 
			this->gigabyteToolStripMenuItem4->Name = L"gigabyteToolStripMenuItem4";
			this->gigabyteToolStripMenuItem4->Size = System::Drawing::Size(152, 26);
			this->gigabyteToolStripMenuItem4->Text = L"Gigabyte";
			this->gigabyteToolStripMenuItem4->Click += gcnew System::EventHandler(this, &CircuitInfo::gigabyteToolStripMenuItem4_Click);
			// 
			// hPToolStripMenuItem1
			// 
			this->hPToolStripMenuItem1->Name = L"hPToolStripMenuItem1";
			this->hPToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
			this->hPToolStripMenuItem1->Text = L"HP";
			this->hPToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::hPToolStripMenuItem1_Click);
			// 
			// huaweiToolStripMenuItem1
			// 
			this->huaweiToolStripMenuItem1->Name = L"huaweiToolStripMenuItem1";
			this->huaweiToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
			this->huaweiToolStripMenuItem1->Text = L"Huawei";
			this->huaweiToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::huaweiToolStripMenuItem1_Click);
			// 
			// hyperXToolStripMenuItem1
			// 
			this->hyperXToolStripMenuItem1->Name = L"hyperXToolStripMenuItem1";
			this->hyperXToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
			this->hyperXToolStripMenuItem1->Text = L"HyperX";
			this->hyperXToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::hyperXToolStripMenuItem1_Click);
			// 
			// intelToolStripMenuItem3
			// 
			this->intelToolStripMenuItem3->Name = L"intelToolStripMenuItem3";
			this->intelToolStripMenuItem3->Size = System::Drawing::Size(152, 26);
			this->intelToolStripMenuItem3->Text = L"Intel";
			this->intelToolStripMenuItem3->Click += gcnew System::EventHandler(this, &CircuitInfo::intelToolStripMenuItem3_Click);
			// 
			// kingstonToolStripMenuItem1
			// 
			this->kingstonToolStripMenuItem1->Name = L"kingstonToolStripMenuItem1";
			this->kingstonToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
			this->kingstonToolStripMenuItem1->Text = L"Kingston";
			this->kingstonToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::kingstonToolStripMenuItem1_Click);
			// 
			// sumsungToolStripMenuItem1
			// 
			this->sumsungToolStripMenuItem1->Name = L"sumsungToolStripMenuItem1";
			this->sumsungToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
			this->sumsungToolStripMenuItem1->Text = L"Sumsung";
			this->sumsungToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::sumsungToolStripMenuItem1_Click);
			// 
			// sanDiskToolStripMenuItem
			// 
			this->sanDiskToolStripMenuItem->Name = L"sanDiskToolStripMenuItem";
			this->sanDiskToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->sanDiskToolStripMenuItem->Text = L"SanDisk";
			this->sanDiskToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::sanDiskToolStripMenuItem_Click);
			// 
			// seagateToolStripMenuItem
			// 
			this->seagateToolStripMenuItem->Name = L"seagateToolStripMenuItem";
			this->seagateToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->seagateToolStripMenuItem->Text = L"Seagate";
			this->seagateToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::seagateToolStripMenuItem_Click);
			// 
			// toshibaToolStripMenuItem
			// 
			this->toshibaToolStripMenuItem->Name = L"toshibaToolStripMenuItem";
			this->toshibaToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->toshibaToolStripMenuItem->Text = L"Toshiba";
			this->toshibaToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::toshibaToolStripMenuItem_Click);
			// 
			// wDToolStripMenuItem
			// 
			this->wDToolStripMenuItem->Name = L"wDToolStripMenuItem";
			this->wDToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->wDToolStripMenuItem->Text = L"WD";
			this->wDToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::wDToolStripMenuItem_Click);
			// 
			// жесткиеДискиToolStripMenuItem
			// 
			this->жесткиеДискиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->dellToolStripMenuItem2,
					this->hPToolStripMenuItem2, this->huaweiToolStripMenuItem2, this->samsungToolStripMenuItem, this->seagateToolStripMenuItem1,
					this->toshibaToolStripMenuItem1, this->wDToolStripMenuItem1
			});
			this->жесткиеДискиToolStripMenuItem->Name = L"жесткиеДискиToolStripMenuItem";
			this->жесткиеДискиToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->жесткиеДискиToolStripMenuItem->Text = L"Жесткие диски";
			// 
			// dellToolStripMenuItem2
			// 
			this->dellToolStripMenuItem2->Name = L"dellToolStripMenuItem2";
			this->dellToolStripMenuItem2->Size = System::Drawing::Size(152, 26);
			this->dellToolStripMenuItem2->Text = L"Dell";
			this->dellToolStripMenuItem2->Click += gcnew System::EventHandler(this, &CircuitInfo::dellToolStripMenuItem2_Click);
			// 
			// hPToolStripMenuItem2
			// 
			this->hPToolStripMenuItem2->Name = L"hPToolStripMenuItem2";
			this->hPToolStripMenuItem2->Size = System::Drawing::Size(152, 26);
			this->hPToolStripMenuItem2->Text = L"HP";
			this->hPToolStripMenuItem2->Click += gcnew System::EventHandler(this, &CircuitInfo::hPToolStripMenuItem2_Click);
			// 
			// huaweiToolStripMenuItem2
			// 
			this->huaweiToolStripMenuItem2->Name = L"huaweiToolStripMenuItem2";
			this->huaweiToolStripMenuItem2->Size = System::Drawing::Size(152, 26);
			this->huaweiToolStripMenuItem2->Text = L"Huawei";
			this->huaweiToolStripMenuItem2->Click += gcnew System::EventHandler(this, &CircuitInfo::huaweiToolStripMenuItem2_Click);
			// 
			// samsungToolStripMenuItem
			// 
			this->samsungToolStripMenuItem->Name = L"samsungToolStripMenuItem";
			this->samsungToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->samsungToolStripMenuItem->Text = L"Samsung";
			this->samsungToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::samsungToolStripMenuItem_Click);
			// 
			// seagateToolStripMenuItem1
			// 
			this->seagateToolStripMenuItem1->Name = L"seagateToolStripMenuItem1";
			this->seagateToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
			this->seagateToolStripMenuItem1->Text = L"Seagate";
			this->seagateToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::seagateToolStripMenuItem1_Click);
			// 
			// toshibaToolStripMenuItem1
			// 
			this->toshibaToolStripMenuItem1->Name = L"toshibaToolStripMenuItem1";
			this->toshibaToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
			this->toshibaToolStripMenuItem1->Text = L"Toshiba";
			this->toshibaToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::toshibaToolStripMenuItem1_Click);
			// 
			// wDToolStripMenuItem1
			// 
			this->wDToolStripMenuItem1->Name = L"wDToolStripMenuItem1";
			this->wDToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
			this->wDToolStripMenuItem1->Text = L"WD";
			this->wDToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::wDToolStripMenuItem1_Click);
			// 
			// системаОхлажденияToolStripMenuItem
			// 
			this->системаОхлажденияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(14) {
				this->aeroCoolToolStripMenuItem1,
					this->aMDToolStripMenuItem4, this->aSUSToolStripMenuItem5, this->beQuietToolStripMenuItem2, this->chieftecToolStripMenuItem2,
					this->coolerMasterToolStripMenuItem2, this->corsairToolStripMenuItem3, this->deepCoolToolStripMenuItem2, this->gigabyteToolStripMenuItem6,
					this->intelToolStripMenuItem5, this->pCCoolerToolStripMenuItem, this->sapphireToolStripMenuItem1, this->sypermicroToolStripMenuItem1,
					this->zalmanToolStripMenuItem2
			});
			this->системаОхлажденияToolStripMenuItem->Name = L"системаОхлажденияToolStripMenuItem";
			this->системаОхлажденияToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->системаОхлажденияToolStripMenuItem->Text = L"Система охлаждения";
			// 
			// aeroCoolToolStripMenuItem1
			// 
			this->aeroCoolToolStripMenuItem1->Name = L"aeroCoolToolStripMenuItem1";
			this->aeroCoolToolStripMenuItem1->Size = System::Drawing::Size(185, 26);
			this->aeroCoolToolStripMenuItem1->Text = L"AeroCool";
			this->aeroCoolToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::aeroCoolToolStripMenuItem1_Click);
			// 
			// aMDToolStripMenuItem4
			// 
			this->aMDToolStripMenuItem4->Name = L"aMDToolStripMenuItem4";
			this->aMDToolStripMenuItem4->Size = System::Drawing::Size(185, 26);
			this->aMDToolStripMenuItem4->Text = L"AMD";
			this->aMDToolStripMenuItem4->Click += gcnew System::EventHandler(this, &CircuitInfo::aMDToolStripMenuItem4_Click);
			// 
			// aSUSToolStripMenuItem5
			// 
			this->aSUSToolStripMenuItem5->Name = L"aSUSToolStripMenuItem5";
			this->aSUSToolStripMenuItem5->Size = System::Drawing::Size(185, 26);
			this->aSUSToolStripMenuItem5->Text = L"ASUS";
			this->aSUSToolStripMenuItem5->Click += gcnew System::EventHandler(this, &CircuitInfo::aSUSToolStripMenuItem5_Click);
			// 
			// beQuietToolStripMenuItem2
			// 
			this->beQuietToolStripMenuItem2->Name = L"beQuietToolStripMenuItem2";
			this->beQuietToolStripMenuItem2->Size = System::Drawing::Size(185, 26);
			this->beQuietToolStripMenuItem2->Text = L"be quiet!";
			this->beQuietToolStripMenuItem2->Click += gcnew System::EventHandler(this, &CircuitInfo::beQuietToolStripMenuItem2_Click);
			// 
			// chieftecToolStripMenuItem2
			// 
			this->chieftecToolStripMenuItem2->Name = L"chieftecToolStripMenuItem2";
			this->chieftecToolStripMenuItem2->Size = System::Drawing::Size(185, 26);
			this->chieftecToolStripMenuItem2->Text = L"Chieftec";
			this->chieftecToolStripMenuItem2->Click += gcnew System::EventHandler(this, &CircuitInfo::chieftecToolStripMenuItem2_Click);
			// 
			// coolerMasterToolStripMenuItem2
			// 
			this->coolerMasterToolStripMenuItem2->Name = L"coolerMasterToolStripMenuItem2";
			this->coolerMasterToolStripMenuItem2->Size = System::Drawing::Size(185, 26);
			this->coolerMasterToolStripMenuItem2->Text = L"Cooler Master";
			this->coolerMasterToolStripMenuItem2->Click += gcnew System::EventHandler(this, &CircuitInfo::coolerMasterToolStripMenuItem2_Click);
			// 
			// corsairToolStripMenuItem3
			// 
			this->corsairToolStripMenuItem3->Name = L"corsairToolStripMenuItem3";
			this->corsairToolStripMenuItem3->Size = System::Drawing::Size(185, 26);
			this->corsairToolStripMenuItem3->Text = L"Corsair";
			this->corsairToolStripMenuItem3->Click += gcnew System::EventHandler(this, &CircuitInfo::corsairToolStripMenuItem3_Click);
			// 
			// deepCoolToolStripMenuItem2
			// 
			this->deepCoolToolStripMenuItem2->Name = L"deepCoolToolStripMenuItem2";
			this->deepCoolToolStripMenuItem2->Size = System::Drawing::Size(185, 26);
			this->deepCoolToolStripMenuItem2->Text = L"DeepCool";
			this->deepCoolToolStripMenuItem2->Click += gcnew System::EventHandler(this, &CircuitInfo::deepCoolToolStripMenuItem2_Click);
			// 
			// gigabyteToolStripMenuItem6
			// 
			this->gigabyteToolStripMenuItem6->Name = L"gigabyteToolStripMenuItem6";
			this->gigabyteToolStripMenuItem6->Size = System::Drawing::Size(185, 26);
			this->gigabyteToolStripMenuItem6->Text = L"Gigabyte";
			this->gigabyteToolStripMenuItem6->Click += gcnew System::EventHandler(this, &CircuitInfo::gigabyteToolStripMenuItem6_Click);
			// 
			// intelToolStripMenuItem5
			// 
			this->intelToolStripMenuItem5->Name = L"intelToolStripMenuItem5";
			this->intelToolStripMenuItem5->Size = System::Drawing::Size(185, 26);
			this->intelToolStripMenuItem5->Text = L"Intel";
			this->intelToolStripMenuItem5->Click += gcnew System::EventHandler(this, &CircuitInfo::intelToolStripMenuItem5_Click);
			// 
			// pCCoolerToolStripMenuItem
			// 
			this->pCCoolerToolStripMenuItem->Name = L"pCCoolerToolStripMenuItem";
			this->pCCoolerToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->pCCoolerToolStripMenuItem->Text = L"PCCooler";
			this->pCCoolerToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::pCCoolerToolStripMenuItem_Click);
			// 
			// sapphireToolStripMenuItem1
			// 
			this->sapphireToolStripMenuItem1->Name = L"sapphireToolStripMenuItem1";
			this->sapphireToolStripMenuItem1->Size = System::Drawing::Size(185, 26);
			this->sapphireToolStripMenuItem1->Text = L"Sapphire";
			this->sapphireToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::sapphireToolStripMenuItem1_Click);
			// 
			// sypermicroToolStripMenuItem1
			// 
			this->sypermicroToolStripMenuItem1->Name = L"sypermicroToolStripMenuItem1";
			this->sypermicroToolStripMenuItem1->Size = System::Drawing::Size(185, 26);
			this->sypermicroToolStripMenuItem1->Text = L"Sypermicro";
			this->sypermicroToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::sypermicroToolStripMenuItem1_Click);
			// 
			// zalmanToolStripMenuItem2
			// 
			this->zalmanToolStripMenuItem2->Name = L"zalmanToolStripMenuItem2";
			this->zalmanToolStripMenuItem2->Size = System::Drawing::Size(185, 26);
			this->zalmanToolStripMenuItem2->Text = L"Zalman";
			this->zalmanToolStripMenuItem2->Click += gcnew System::EventHandler(this, &CircuitInfo::zalmanToolStripMenuItem2_Click);
			// 
			// корпусаToolStripMenuItem
			// 
			this->корпусаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {
				this->aeroCoolToolStripMenuItem,
					this->aSUSToolStripMenuItem4, this->beQuietToolStripMenuItem1, this->chieftecToolStripMenuItem1, this->coolerMasterToolStripMenuItem1,
					this->deepCoolToolStripMenuItem1, this->gigabyteToolStripMenuItem5, this->intelToolStripMenuItem4, this->mSIToolStripMenuItem2,
					this->powercaseToolStripMenuItem, this->sypermicroToolStripMenuItem, this->zalmanToolStripMenuItem1
			});
			this->корпусаToolStripMenuItem->Name = L"корпусаToolStripMenuItem";
			this->корпусаToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->корпусаToolStripMenuItem->Text = L"Корпуса";
			// 
			// aeroCoolToolStripMenuItem
			// 
			this->aeroCoolToolStripMenuItem->Name = L"aeroCoolToolStripMenuItem";
			this->aeroCoolToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->aeroCoolToolStripMenuItem->Text = L"AeroCool";
			this->aeroCoolToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::aeroCoolToolStripMenuItem_Click);
			// 
			// aSUSToolStripMenuItem4
			// 
			this->aSUSToolStripMenuItem4->Name = L"aSUSToolStripMenuItem4";
			this->aSUSToolStripMenuItem4->Size = System::Drawing::Size(185, 26);
			this->aSUSToolStripMenuItem4->Text = L"ASUS";
			this->aSUSToolStripMenuItem4->Click += gcnew System::EventHandler(this, &CircuitInfo::aSUSToolStripMenuItem4_Click);
			// 
			// beQuietToolStripMenuItem1
			// 
			this->beQuietToolStripMenuItem1->Name = L"beQuietToolStripMenuItem1";
			this->beQuietToolStripMenuItem1->Size = System::Drawing::Size(185, 26);
			this->beQuietToolStripMenuItem1->Text = L"be quiet!";
			this->beQuietToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::beQuietToolStripMenuItem1_Click);
			// 
			// chieftecToolStripMenuItem1
			// 
			this->chieftecToolStripMenuItem1->Name = L"chieftecToolStripMenuItem1";
			this->chieftecToolStripMenuItem1->Size = System::Drawing::Size(185, 26);
			this->chieftecToolStripMenuItem1->Text = L"Chieftec";
			this->chieftecToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::chieftecToolStripMenuItem1_Click);
			// 
			// coolerMasterToolStripMenuItem1
			// 
			this->coolerMasterToolStripMenuItem1->Name = L"coolerMasterToolStripMenuItem1";
			this->coolerMasterToolStripMenuItem1->Size = System::Drawing::Size(185, 26);
			this->coolerMasterToolStripMenuItem1->Text = L"Cooler Master";
			this->coolerMasterToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::coolerMasterToolStripMenuItem1_Click);
			// 
			// deepCoolToolStripMenuItem1
			// 
			this->deepCoolToolStripMenuItem1->Name = L"deepCoolToolStripMenuItem1";
			this->deepCoolToolStripMenuItem1->Size = System::Drawing::Size(185, 26);
			this->deepCoolToolStripMenuItem1->Text = L"DeepCool";
			this->deepCoolToolStripMenuItem1->Click += gcnew System::EventHandler(this, &CircuitInfo::deepCoolToolStripMenuItem1_Click);
			// 
			// gigabyteToolStripMenuItem5
			// 
			this->gigabyteToolStripMenuItem5->Name = L"gigabyteToolStripMenuItem5";
			this->gigabyteToolStripMenuItem5->Size = System::Drawing::Size(185, 26);
			this->gigabyteToolStripMenuItem5->Text = L"Gigabyte";
			this->gigabyteToolStripMenuItem5->Click += gcnew System::EventHandler(this, &CircuitInfo::gigabyteToolStripMenuItem5_Click);
			// 
			// intelToolStripMenuItem4
			// 
			this->intelToolStripMenuItem4->Name = L"intelToolStripMenuItem4";
			this->intelToolStripMenuItem4->Size = System::Drawing::Size(185, 26);
			this->intelToolStripMenuItem4->Text = L"Intel";
			this->intelToolStripMenuItem4->Click += gcnew System::EventHandler(this, &CircuitInfo::intelToolStripMenuItem4_Click);
			// 
			// mSIToolStripMenuItem2
			// 
			this->mSIToolStripMenuItem2->Name = L"mSIToolStripMenuItem2";
			this->mSIToolStripMenuItem2->Size = System::Drawing::Size(185, 26);
			this->mSIToolStripMenuItem2->Text = L"MSI";
			this->mSIToolStripMenuItem2->Click += gcnew System::EventHandler(this, &CircuitInfo::mSIToolStripMenuItem2_Click);
			// 
			// powercaseToolStripMenuItem
			// 
			this->powercaseToolStripMenuItem->Name = L"powercaseToolStripMenuItem";
			this->powercaseToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->powercaseToolStripMenuItem->Text = L"Powercase";
			this->powercaseToolStripMenuItem->Click += gcnew System::EventHandler(this, &CircuitInfo::powercaseToolStripMenuItem_Click);
			// 
			// sypermicroToolStripMenuItem
			// 
			this->sypermicroToolStripMenuItem->Name = L"sypermicroToolStripMenuItem";
			this->sypermicroToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->sypermicroToolStripMenuItem->Text = L"Sypermicro";
			// 
			// zalmanToolStripMenuItem1
			// 
			this->zalmanToolStripMenuItem1->Name = L"zalmanToolStripMenuItem1";
			this->zalmanToolStripMenuItem1->Size = System::Drawing::Size(185, 26);
			this->zalmanToolStripMenuItem1->Text = L"Zalman";
			// 
			// redaction_button1
			// 
			this->redaction_button1->Enabled = false;
			this->redaction_button1->Location = System::Drawing::Point(813, 74);
			this->redaction_button1->Name = L"redaction_button1";
			this->redaction_button1->Size = System::Drawing::Size(86, 23);
			this->redaction_button1->TabIndex = 18;
			this->redaction_button1->Text = L"Ред.";
			this->redaction_button1->UseVisualStyleBackColor = true;
			this->redaction_button1->Visible = false;
			this->redaction_button1->Click += gcnew System::EventHandler(this, &CircuitInfo::redaction_button1_Click);
			// 
			// redaction_button2
			// 
			this->redaction_button2->Enabled = false;
			this->redaction_button2->Location = System::Drawing::Point(813, 165);
			this->redaction_button2->Name = L"redaction_button2";
			this->redaction_button2->Size = System::Drawing::Size(86, 23);
			this->redaction_button2->TabIndex = 19;
			this->redaction_button2->Text = L"Ред.";
			this->redaction_button2->UseVisualStyleBackColor = true;
			this->redaction_button2->Visible = false;
			this->redaction_button2->Click += gcnew System::EventHandler(this, &CircuitInfo::redaction_button2_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// CircuitInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(916, 432);
			this->Controls->Add(this->redaction_button2);
			this->Controls->Add(this->redaction_button1);
			this->Controls->Add(this->Chose_Pic_button);
			this->Controls->Add(this->save_Char_button);
			this->Controls->Add(this->Characteristics);
			this->Controls->Add(this->amount);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->price);
			this->Controls->Add(this->producer);
			this->Controls->Add(this->name);
			this->Controls->Add(this->type);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(934, 479);
			this->MinimumSize = System::Drawing::Size(934, 479);
			this->Name = L"CircuitInfo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Информация о комплектующей";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &CircuitInfo::CircuitInfo_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &CircuitInfo::CircuitInfo_FormClosed);
			this->Load += gcnew System::EventHandler(this, &CircuitInfo::CircuitInfo_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void CircuitInfo_Load(System::Object^ sender, System::EventArgs^ e); 
private: System::Void save_Char_button_Click(System::Object^ sender, System::EventArgs^ e); 
private: System::Void CircuitInfo_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {}
private: System::Void CircuitInfo_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {}
private: System::Void toolStripComboBox1_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void изменитьТипToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void redaction_button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void redaction_button2_Click(System::Object^ sender, System::EventArgs^ e); 

//------------------------------------------ Изменение видеокарты -------------------
private: System::Void aMDToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Видеокарта";
	producer->Text = "AMD";
}
private: System::Void aSUSToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Видеокарта";
	producer->Text = "ASUS";
}
private: System::Void dellToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Видеокарта";
	producer->Text = "Dell";
}
private: System::Void gigabyteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Видеокарта";
	producer->Text = "Gigabyte";
}
private: System::Void mSIToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Видеокарта";
	producer->Text = "MSI";
}
private: System::Void nVIDIAToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Видеокарта";
	producer->Text = "NVIDIA";
}
private: System::Void palitToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Видеокарта";
	producer->Text = "Palit";
}
private: System::Void powerColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Видеокарта";
	producer->Text = "PowerColor";
}
private: System::Void sapphireToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Видеокарта";
	producer->Text = "Sapphire";
}
private: System::Void sinotexToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Видеокарта";
	producer->Text = "Sinotex";
}
private: System::Void zOTACToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Видеокарта";
	producer->Text = "ZOTAC";
}

//----------------------------- Изменение процессоры ---------------------
private: System::Void aMDToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Процессор";
	producer->Text = "AMD";
}
private: System::Void intelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Процессор";
	producer->Text = "Intel";
}

//------------------------------- Изменение материнские платы
private: System::Void aSUSToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Материнская плата";
	producer->Text = "ASUS";
}
private: System::Void intelToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Материнская плата";
	producer->Text = "Intel";
}
private: System::Void mSIToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Материнская плата";
	producer->Text = "MSI";
}
private: System::Void gigabyteToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Материнская плата";
	producer->Text = "Gigabyte";
}

private: System::Void aSRockToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Материнская плата";
	producer->Text = "AsRock";
}
private: System::Void supermicroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Материнская плата";
	producer->Text = "Sypermicro";
}

	//-------------------------- Оперативная память
private: System::Void aDataToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Оперативная память";
	producer->Text = "A-Data";
}

private: System::Void aMDToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Оперативная память";
	producer->Text = "AMD";
}
private: System::Void corsairToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Оперативная память";
	producer->Text = "Corsair";
}
private: System::Void crusialToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Оперативная память";
	producer->Text = "Crusial";
}
private: System::Void dellToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Оперативная память";
	producer->Text = "Dell";
}
private: System::Void gSkillToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Оперативная память";
	producer->Text = "G.Skill";
}
private: System::Void gigabyteToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Оперативная память";
	producer->Text = "Gigabyte";
}
private: System::Void hPToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Оперативная память";
	producer->Text = "HP";
}
private: System::Void huaweiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Оперативная память";
	producer->Text = "Huawei";
}
private: System::Void hyperXToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Оперативная память";
	producer->Text = "HyperX";
}
private: System::Void intelToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Оперативная память";
	producer->Text = "Intel";
}
private: System::Void kingstonToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Оперативная память";
	producer->Text = "Kingston";
}
private: System::Void lenovoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Оперативная память";
	producer->Text = "Lenovo";
}
private: System::Void sumsungToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Оперативная память";
	producer->Text = "Sumsung";
}
private: System::Void siliconPowerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Оперативная память";
	producer->Text = "SiliconPower";
}
private: System::Void smartBueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Оперативная память";
	producer->Text = "SmartBye";
}

	   //-------------------------------- Power Unit
private: System::Void chieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Блок питания";
	producer->Text = "AeroCool";
}
private: System::Void aSUSToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Блок питания";
	producer->Text = "ASUS";
}
private: System::Void beQuietToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Блок питания";
	producer->Text = "be quiet!";
}
private: System::Void chieftecToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Блок питания";
	producer->Text = "Chieftec";
}
private: System::Void coolerMasterToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Блок питания";
	producer->Text = "Cooler Master";
}
private: System::Void corsairToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Блок питания";
	producer->Text = "Corsair";
}
private: System::Void deepCoolToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Блок питания";
	producer->Text = "DeepCool";
}
private: System::Void gigabyteToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Блок питания";
	producer->Text = "Gigabyte";
}
private: System::Void seasonicToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Блок питания";
	producer->Text = "Seasonic";
}
private: System::Void svenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Блок питания";
	producer->Text = "SVEN";
}
private: System::Void zalmanToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Блок питания";
	producer->Text = "Zalman";
}

//-------------------------------------- SSD
private: System::Void aDataToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "SSD";
	producer->Text = "A-Data";
}
private: System::Void aMDToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "SSD";
	producer->Text = "AMD";
}
private: System::Void aSUSToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "SSD";
	producer->Text = "ASUS";
}
private: System::Void corsairToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "SSD";
	producer->Text = "Corsair";
}
private: System::Void crusialToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "SSD";
	producer->Text = "Crusial";
}
private: System::Void gigabyteToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "SSD";
	producer->Text = "Gigabyte";
}
private: System::Void hPToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "SSD";
	producer->Text = "HP";
}
private: System::Void huaweiToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "SSD";
	producer->Text = "Huawei";
}
private: System::Void hyperXToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "SSD";
	producer->Text = "HyperX";
}
private: System::Void intelToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "SSD";
	producer->Text = "Intel";
}
private: System::Void kingstonToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "SSD";
	producer->Text = "Kingston";
}
private: System::Void sumsungToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "SSD";
	producer->Text = "Sumsung";
}
private: System::Void sanDiskToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "SSD";
	producer->Text = "SanDisk";
}
private: System::Void seagateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "SSD";
	producer->Text = "Seagate";
}
private: System::Void toshibaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "SSD";
	producer->Text = "Toshiba";
}
private: System::Void wDToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "SSD";
	producer->Text = "WD";
}
//---------------------- Жесткие диски
private: System::Void dellToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Жесткий диск";
	producer->Text = "Dell";
}
private: System::Void hPToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Жесткий диск";
	producer->Text = "HP";
}
private: System::Void huaweiToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Жесткий диск";
	producer->Text = "Huawei";
}
private: System::Void samsungToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Жесткий диск";
	producer->Text = "Sumsung";
}
private: System::Void seagateToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Жесткий диск";
	producer->Text = "Seagate";
}
private: System::Void toshibaToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Жесткий диск";
	producer->Text = "Toshiba";
}
private: System::Void wDToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	 type->Text = "Жесткий диск";
	 producer->Text = "WD";
}

//----------------------------------- Системы охлаждения
private: System::Void aeroCoolToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Система охлаждения";
	producer->Text = "AeroCool";
}
private: System::Void aMDToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Система охлаждения";
	producer->Text = "AMD";
}
private: System::Void aSUSToolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Система охлаждения";
	producer->Text = "ASUS";
}
private: System::Void beQuietToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Система охлаждения";
	producer->Text = "be quiet!";
}
private: System::Void chieftecToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Система охлаждения";
	producer->Text = "Chieftec";
}
private: System::Void coolerMasterToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Система охлаждения";
	producer->Text = "Cooler Master";
}
private: System::Void corsairToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Система охлаждения";
	producer->Text = "Corsir";
}
private: System::Void deepCoolToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Система охлаждения";
	producer->Text = "DeepCool";
}
private: System::Void gigabyteToolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Система охлаждения";
	producer->Text = "Gigabyte";	
}
private: System::Void intelToolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Система охлаждения";
	producer->Text = "Intel";
}
private: System::Void pCCoolerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Система охлаждения";
	producer->Text = "PCCooler";
}
private: System::Void sapphireToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Система охлаждения";
	producer->Text = "Sapphire";
}
private: System::Void sypermicroToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Система охлаждения";
	producer->Text = "Sypermicro";
}
private: System::Void zalmanToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Система охлаждения";
	producer->Text = "Zalman";
}
//------------------------------------ Корпуса ------
private: System::Void aeroCoolToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Корпус";
	producer->Text = "AeroCool";
}
private: System::Void aSUSToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Корпус";
	producer->Text = "ASUS";
}
private: System::Void beQuietToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Корпус";
	producer->Text = "be quiet!";
}
private: System::Void chieftecToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Корпус";
	producer->Text = "Chieftec";
}
private: System::Void coolerMasterToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Корпус";
	producer->Text = "Cooler Master";
}
private: System::Void deepCoolToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Корпус";
	producer->Text = "DeepCool";
}
private: System::Void gigabyteToolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Корпус";
	producer->Text = "Gigabyte";
}
private: System::Void intelToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Корпус";
	producer->Text = "Intel";
}
private: System::Void mSIToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Корпус";
	producer->Text = "MSI";
}
private: System::Void powercaseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	type->Text = "Корпус";
	producer->Text = "Powercase";
}
private: System::Void Chose_Pic_button_Click(System::Object^ sender, System::EventArgs^ e); 
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void price_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void producer_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void amount_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void name_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void type_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {}
};
}
