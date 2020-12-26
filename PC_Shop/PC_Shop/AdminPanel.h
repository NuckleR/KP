#pragma once
#include <regex>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "UserInfo.h"
#include "CircuitInfo.h"

namespace PCShop {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	public ref class AdminPanel : public System::Windows::Forms::Form
	{
	public:
		AdminPanel(void)
		{
			InitializeComponent();
		}
		UserInfo^ Us;
		CircuitInfo^ Ci;
		String^ ULog, ^ UPassword, ^ UEmail, ^ UId;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ èçìåíèòüÒèïToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèäåîêàğòàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aMDToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aSUSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dellToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gigabyteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mSIToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ palitToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ powerColorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sapphireToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sinotexToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zOTACToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nVIDIAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîöåññîğToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aMDToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ intelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îïåğàòèâíàÿÏàìÿòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aDataToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aMDToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ corsairToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ crusialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dellToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ gSkillToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gigabyteToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ hPToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ huaweiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ hyperXToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ intelToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ kingstonToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lenovoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sumsungToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ siliconPowerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ smartBueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ìàòåğèíñêàÿÏëàòàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aSUSToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ intelToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ mSIToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ gigabyteToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ aSRockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ supermicroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ áëîêÏèòàíèÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ chieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aSUSToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ beQuietToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ chieftecToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ coolerMasterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ corsairToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ deepCoolToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gigabyteToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ seasonicToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ svenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zalmanToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sSDToolStripMenuItem;
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
	private: System::Windows::Forms::ToolStripMenuItem^ æåñòêèåÄèñêèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dellToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ hPToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ huaweiToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ samsungToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ seagateToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toshibaToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ wDToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèñòåìàÎõëàæäåíèÿToolStripMenuItem;
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
	private: System::Windows::Forms::ToolStripMenuItem^ êîğïóñàToolStripMenuItem;
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
	private: System::Windows::Forms::ToolStripMenuItem^ ìèíèìàëüíàÿÖåíàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^ minprice;
	private: System::Windows::Forms::ToolStripMenuItem^ ìàêñèìàëüíàÿÖåíàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^ maxprice;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripTextBox^ prodname;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûéòèToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::Button^ button14;
	public:

	protected:
		~AdminPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Íàëè÷èå;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ïğîèçâîäèòåëü;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Type;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Íàèìåíîâàíèå;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Öåíà;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button_filter;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ èíôîğìàöèÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êàêÏîëüçîâàòüñÿToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ëîãèí;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ïî÷òà;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ïàğîëü;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminPanel::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Íàëè÷èå = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ïğîèçâîäèòåëü = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Íàèìåíîâàíèå = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Öåíà = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ëîãèí = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ïî÷òà = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ïàğîëü = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button_filter = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->èíôîğìàöèÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êàêÏîëüçîâàòüñÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->èçìåíèòüÒèïToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèäåîêàğòàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->ïğîöåññîğToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aMDToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->intelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îïåğàòèâíàÿÏàìÿòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->ìàòåğèíñêàÿÏëàòàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aSUSToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->intelToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mSIToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gigabyteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aSRockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supermicroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->áëîêÏèòàíèÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->æåñòêèåÄèñêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dellToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hPToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->huaweiToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->samsungToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->seagateToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toshibaToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wDToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèñòåìàÎõëàæäåíèÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->êîğïóñàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->ìèíèìàëüíàÿÖåíàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->minprice = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->ìàêñèìàëüíàÿÖåíàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->maxprice = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->prodname = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûéòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(1035, 63);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Îáíîâèòü êàòàëîã";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminPanel::button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(418, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(410, 39);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Êàòàëîã êîìïëåêòóşùèõ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Id, this->Íàëè÷èå,
					this->Ïğîèçâîäèòåëü, this->Type, this->Íàèìåíîâàíèå, this->Öåíà
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 90);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1185, 255);
			this->dataGridView1->TabIndex = 4;
			// 
			// Id
			// 
			this->Id->HeaderText = L"ID";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			this->Id->Width = 50;
			// 
			// Íàëè÷èå
			// 
			this->Íàëè÷èå->HeaderText = L"Íàëè÷èå";
			this->Íàëè÷èå->MinimumWidth = 6;
			this->Íàëè÷èå->Name = L"Íàëè÷èå";
			this->Íàëè÷èå->ReadOnly = true;
			this->Íàëè÷èå->Width = 75;
			// 
			// Ïğîèçâîäèòåëü
			// 
			this->Ïğîèçâîäèòåëü->HeaderText = L"Ïğîèçâîäèòåëü";
			this->Ïğîèçâîäèòåëü->MinimumWidth = 6;
			this->Ïğîèçâîäèòåëü->Name = L"Ïğîèçâîäèòåëü";
			this->Ïğîèçâîäèòåëü->ReadOnly = true;
			this->Ïğîèçâîäèòåëü->Width = 175;
			// 
			// Type
			// 
			this->Type->HeaderText = L"Òèï";
			this->Type->MinimumWidth = 6;
			this->Type->Name = L"Type";
			this->Type->ReadOnly = true;
			this->Type->Width = 175;
			// 
			// Íàèìåíîâàíèå
			// 
			this->Íàèìåíîâàíèå->HeaderText = L"Íàèìåíîâàíèå";
			this->Íàèìåíîâàíèå->MinimumWidth = 6;
			this->Íàèìåíîâàíèå->Name = L"Íàèìåíîâàíèå";
			this->Íàèìåíîâàíèå->ReadOnly = true;
			this->Íàèìåíîâàíèå->Width = 236;
			// 
			// Öåíà
			// 
			this->Öåíà->HeaderText = L"Öåíà";
			this->Öåíà->MinimumWidth = 6;
			this->Öåíà->Name = L"Öåíà";
			this->Öåíà->ReadOnly = true;
			this->Öåíà->Width = 125;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(231, 377);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(244, 39);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Ïîëüçîâàòåëè";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->Ëîãèí, this->Ïî÷òà, this->Ïàğîëü
			});
			this->dataGridView2->Location = System::Drawing::Point(12, 419);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(745, 147);
			this->dataGridView2->TabIndex = 7;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// Ëîãèí
			// 
			this->Ëîãèí->HeaderText = L"Ëîãèí";
			this->Ëîãèí->MinimumWidth = 6;
			this->Ëîãèí->Name = L"Ëîãèí";
			this->Ëîãèí->Width = 125;
			// 
			// Ïî÷òà
			// 
			this->Ïî÷òà->HeaderText = L"Ïî÷òà";
			this->Ïî÷òà->MinimumWidth = 6;
			this->Ïî÷òà->Name = L"Ïî÷òà";
			this->Ïî÷òà->Width = 125;
			// 
			// Ïàğîëü
			// 
			this->Ïàğîëü->HeaderText = L"Ïàğîëü";
			this->Ïàğîëü->MinimumWidth = 6;
			this->Ïàğîëü->Name = L"Ïàğîëü";
			this->Ïàğîëü->Width = 125;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button_filter);
			this->groupBox1->Location = System::Drawing::Point(1203, 113);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(188, 146);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Äåéñòâèÿ";
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Location = System::Drawing::Point(11, 79);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(166, 23);
			this->button10->TabIndex = 4;
			this->button10->Text = L"Äîáàâèòü";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &AdminPanel::button10_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(11, 108);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(166, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Óäàëèòü";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminPanel::button2_Click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(11, 50);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(166, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Èçìåíèòü";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AdminPanel::button4_Click);
			// 
			// button_filter
			// 
			this->button_filter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_filter->Location = System::Drawing::Point(11, 21);
			this->button_filter->Name = L"button_filter";
			this->button_filter->Size = System::Drawing::Size(166, 23);
			this->button_filter->TabIndex = 0;
			this->button_filter->Text = L"Ôèëüòğû";
			this->button_filter->UseVisualStyleBackColor = true;
			this->button_filter->Click += gcnew System::EventHandler(this, &AdminPanel::button_filter_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->èíôîğìàöèÿToolStripMenuItem,
					this->toolStripMenuItem4, this->âûõîäToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1425, 30);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// èíôîğìàöèÿToolStripMenuItem
			// 
			this->èíôîğìàöèÿToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->êàêÏîëüçîâàòüñÿToolStripMenuItem });
			this->èíôîğìàöèÿToolStripMenuItem->Name = L"èíôîğìàöèÿToolStripMenuItem";
			this->èíôîğìàöèÿToolStripMenuItem->Size = System::Drawing::Size(131, 26);
			this->èíôîğìàöèÿToolStripMenuItem->Text = L"Îá ïğîãğàììå ";
			this->èíôîğìàöèÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::èíôîğìàöèÿToolStripMenuItem_Click);
			// 
			// êàêÏîëüçîâàòüñÿToolStripMenuItem
			// 
			this->êàêÏîëüçîâàòüñÿToolStripMenuItem->Name = L"êàêÏîëüçîâàòüñÿToolStripMenuItem";
			this->êàêÏîëüçîâàòüñÿToolStripMenuItem->Size = System::Drawing::Size(222, 26);
			this->êàêÏîëüçîâàòüñÿToolStripMenuItem->Text = L"Êàê ïîëüçîâàòüñÿ\?";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->AutoSize = false;
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(800, 26);
			// 
			// âûõîäToolStripMenuItem1
			// 
			this->âûõîäToolStripMenuItem1->Name = L"âûõîäToolStripMenuItem1";
			this->âûõîäToolStripMenuItem1->Size = System::Drawing::Size(67, 26);
			this->âûõîäToolStripMenuItem1->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::âûõîäToolStripMenuItem1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button11);
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Location = System::Drawing::Point(764, 419);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(211, 178);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Äåéñòâèÿ";
			// 
			// button11
			// 
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Location = System::Drawing::Point(8, 141);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(197, 23);
			this->button11->TabIndex = 5;
			this->button11->Text = L"Óäàëèòü";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &AdminPanel::button11_Click);
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Location = System::Drawing::Point(6, 80);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(198, 23);
			this->button8->TabIndex = 4;
			this->button8->Text = L"Î÷èñòèòü êîğçèíó";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &AdminPanel::button8_Click);
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Location = System::Drawing::Point(6, 112);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(197, 23);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Äîáàâèòü";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &AdminPanel::button5_Click);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Location = System::Drawing::Point(6, 50);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(198, 23);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Èçìåíèòü";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &AdminPanel::button6_Click);
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Location = System::Drawing::Point(6, 21);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(198, 23);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Ñâåäåíèÿ î ïîëüçîâàòåëå";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &AdminPanel::button7_Click);
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Location = System::Drawing::Point(561, 393);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(197, 23);
			this->button9->TabIndex = 11;
			this->button9->Text = L"Îáíîâèòü ïîëüçîâàòåëåé";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &AdminPanel::button9_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(311, 645);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(130, 23);
			this->button12->TabIndex = 21;
			this->button12->Text = L"Ïîêàçàòü âñåõ";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &AdminPanel::button12_Click_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(261, 603);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 17);
			this->label4->TabIndex = 20;
			this->label4->Text = L"-";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(398, 600);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(164, 22);
			this->textBox3->TabIndex = 18;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(422, 580);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 17);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Ïîèñê ïî ëîãèíó";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(219, 580);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 17);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Ïîèñê ïî ID";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(277, 600);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(57, 22);
			this->textBox2->TabIndex = 15;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(199, 600);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(57, 22);
			this->textBox1->TabIndex = 14;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(229, 628);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 13;
			this->button14->Text = L"Èñêàòü";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &AdminPanel::button14_Click_1);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(447, 628);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 22;
			this->button13->Text = L"Èñêàòü";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &AdminPanel::button13_Click);
			// 
			// menuStrip2
			// 
			this->menuStrip2->Dock = System::Windows::Forms::DockStyle::Right;
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {
				this->èçìåíèòüÒèïToolStripMenuItem,
					this->ìèíèìàëüíàÿÖåíàToolStripMenuItem, this->minprice, this->ìàêñèìàëüíàÿÖåíàToolStripMenuItem, this->maxprice, this->toolStripMenuItem1,
					this->prodname, this->toolStripMenuItem2, this->toolStripMenuItem3, this->ïğèToolStripMenuItem, this->âûéòèToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(1184, 30);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(241, 647);
			this->menuStrip2->TabIndex = 18;
			this->menuStrip2->Text = L"menuStrip2";
			this->menuStrip2->Visible = false;
			this->menuStrip2->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &AdminPanel::menuStrip2_ItemClicked);
			// 
			// èçìåíèòüÒèïToolStripMenuItem
			// 
			this->èçìåíèòüÒèïToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->âèäåîêàğòàToolStripMenuItem,
					this->ïğîöåññîğToolStripMenuItem, this->îïåğàòèâíàÿÏàìÿòüToolStripMenuItem, this->ìàòåğèíñêàÿÏëàòàToolStripMenuItem, this->áëîêÏèòàíèÿToolStripMenuItem,
					this->sSDToolStripMenuItem, this->æåñòêèåÄèñêèToolStripMenuItem, this->ñèñòåìàÎõëàæäåíèÿToolStripMenuItem, this->êîğïóñàToolStripMenuItem
			});
			this->èçìåíèòüÒèïToolStripMenuItem->Name = L"èçìåíèòüÒèïToolStripMenuItem";
			this->èçìåíèòüÒèïToolStripMenuItem->Size = System::Drawing::Size(228, 24);
			this->èçìåíèòüÒèïToolStripMenuItem->Text = L"Âûáğàòü òèï è ïğîèçâîäèòåëÿ";
			// 
			// âèäåîêàğòàToolStripMenuItem
			// 
			this->âèäåîêàğòàToolStripMenuItem->AccessibleRole = System::Windows::Forms::AccessibleRole::CheckButton;
			this->âèäåîêàğòàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {
				this->aMDToolStripMenuItem,
					this->aSUSToolStripMenuItem, this->dellToolStripMenuItem, this->gigabyteToolStripMenuItem, this->mSIToolStripMenuItem, this->palitToolStripMenuItem1,
					this->powerColorToolStripMenuItem, this->sapphireToolStripMenuItem, this->sinotexToolStripMenuItem, this->zOTACToolStripMenuItem,
					this->nVIDIAToolStripMenuItem
			});
			this->âèäåîêàğòàToolStripMenuItem->Name = L"âèäåîêàğòàToolStripMenuItem";
			this->âèäåîêàğòàToolStripMenuItem->RightToLeftAutoMirrorImage = true;
			this->âèäåîêàğòàToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->âèäåîêàğòàToolStripMenuItem->Text = L"Âèäåîêàğòà";
			this->âèäåîêàğòàToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::âèäåîêàğòàToolStripMenuItem_Click);
			// 
			// aMDToolStripMenuItem
			// 
			this->aMDToolStripMenuItem->AccessibleRole = System::Windows::Forms::AccessibleRole::CheckButton;
			this->aMDToolStripMenuItem->Name = L"aMDToolStripMenuItem";
			this->aMDToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->aMDToolStripMenuItem->Text = L"AMD";
			this->aMDToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::aMDToolStripMenuItem_Click);
			// 
			// aSUSToolStripMenuItem
			// 
			this->aSUSToolStripMenuItem->AccessibleRole = System::Windows::Forms::AccessibleRole::CheckButton;
			this->aSUSToolStripMenuItem->Name = L"aSUSToolStripMenuItem";
			this->aSUSToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->aSUSToolStripMenuItem->Text = L"ASUS";
			this->aSUSToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::aSUSToolStripMenuItem_Click);
			// 
			// dellToolStripMenuItem
			// 
			this->dellToolStripMenuItem->AccessibleRole = System::Windows::Forms::AccessibleRole::CheckButton;
			this->dellToolStripMenuItem->Name = L"dellToolStripMenuItem";
			this->dellToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->dellToolStripMenuItem->Text = L"Dell";
			this->dellToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::dellToolStripMenuItem_Click);
			// 
			// gigabyteToolStripMenuItem
			// 
			this->gigabyteToolStripMenuItem->AccessibleRole = System::Windows::Forms::AccessibleRole::CheckButton;
			this->gigabyteToolStripMenuItem->Name = L"gigabyteToolStripMenuItem";
			this->gigabyteToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->gigabyteToolStripMenuItem->Text = L"Gigabyte";
			this->gigabyteToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::gigabyteToolStripMenuItem_Click);
			// 
			// mSIToolStripMenuItem
			// 
			this->mSIToolStripMenuItem->AccessibleRole = System::Windows::Forms::AccessibleRole::CheckButton;
			this->mSIToolStripMenuItem->Name = L"mSIToolStripMenuItem";
			this->mSIToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->mSIToolStripMenuItem->Text = L"MSI";
			this->mSIToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::mSIToolStripMenuItem_Click);
			// 
			// palitToolStripMenuItem1
			// 
			this->palitToolStripMenuItem1->AccessibleRole = System::Windows::Forms::AccessibleRole::CheckButton;
			this->palitToolStripMenuItem1->Name = L"palitToolStripMenuItem1";
			this->palitToolStripMenuItem1->Size = System::Drawing::Size(168, 26);
			this->palitToolStripMenuItem1->Text = L"Palit";
			this->palitToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::palitToolStripMenuItem1_Click);
			// 
			// powerColorToolStripMenuItem
			// 
			this->powerColorToolStripMenuItem->AccessibleRole = System::Windows::Forms::AccessibleRole::CheckButton;
			this->powerColorToolStripMenuItem->Name = L"powerColorToolStripMenuItem";
			this->powerColorToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->powerColorToolStripMenuItem->Text = L"PowerColor";
			this->powerColorToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::powerColorToolStripMenuItem_Click);
			// 
			// sapphireToolStripMenuItem
			// 
			this->sapphireToolStripMenuItem->AccessibleRole = System::Windows::Forms::AccessibleRole::CheckButton;
			this->sapphireToolStripMenuItem->Name = L"sapphireToolStripMenuItem";
			this->sapphireToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->sapphireToolStripMenuItem->Text = L"Sapphire";
			this->sapphireToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::sapphireToolStripMenuItem_Click);
			// 
			// sinotexToolStripMenuItem
			// 
			this->sinotexToolStripMenuItem->AccessibleRole = System::Windows::Forms::AccessibleRole::CheckButton;
			this->sinotexToolStripMenuItem->Name = L"sinotexToolStripMenuItem";
			this->sinotexToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->sinotexToolStripMenuItem->Text = L"Sinotex";
			this->sinotexToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::sinotexToolStripMenuItem_Click);
			// 
			// zOTACToolStripMenuItem
			// 
			this->zOTACToolStripMenuItem->AccessibleRole = System::Windows::Forms::AccessibleRole::CheckButton;
			this->zOTACToolStripMenuItem->Name = L"zOTACToolStripMenuItem";
			this->zOTACToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->zOTACToolStripMenuItem->Text = L"ZOTAC";
			this->zOTACToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::zOTACToolStripMenuItem_Click);
			// 
			// nVIDIAToolStripMenuItem
			// 
			this->nVIDIAToolStripMenuItem->AccessibleRole = System::Windows::Forms::AccessibleRole::CheckButton;
			this->nVIDIAToolStripMenuItem->Name = L"nVIDIAToolStripMenuItem";
			this->nVIDIAToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->nVIDIAToolStripMenuItem->Text = L"NVIDIA";
			this->nVIDIAToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::nVIDIAToolStripMenuItem_Click);
			// 
			// ïğîöåññîğToolStripMenuItem
			// 
			this->ïğîöåññîğToolStripMenuItem->AccessibleRole = System::Windows::Forms::AccessibleRole::CheckButton;
			this->ïğîöåññîğToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aMDToolStripMenuItem1,
					this->intelToolStripMenuItem
			});
			this->ïğîöåññîğToolStripMenuItem->Name = L"ïğîöåññîğToolStripMenuItem";
			this->ïğîöåññîğToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->ïğîöåññîğToolStripMenuItem->Text = L"Ïğîöåññîğ";
			this->ïğîöåññîğToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::ïğîöåññîğToolStripMenuItem_Click);
			// 
			// aMDToolStripMenuItem1
			// 
			this->aMDToolStripMenuItem1->Name = L"aMDToolStripMenuItem1";
			this->aMDToolStripMenuItem1->Size = System::Drawing::Size(126, 26);
			this->aMDToolStripMenuItem1->Text = L"AMD";
			this->aMDToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::aMDToolStripMenuItem1_Click);
			// 
			// intelToolStripMenuItem
			// 
			this->intelToolStripMenuItem->Name = L"intelToolStripMenuItem";
			this->intelToolStripMenuItem->Size = System::Drawing::Size(126, 26);
			this->intelToolStripMenuItem->Text = L"Intel";
			this->intelToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::intelToolStripMenuItem_Click);
			// 
			// îïåğàòèâíàÿÏàìÿòüToolStripMenuItem
			// 
			this->îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->AccessibleRole = System::Windows::Forms::AccessibleRole::CheckButton;
			this->îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(16) {
				this->aDataToolStripMenuItem,
					this->aMDToolStripMenuItem2, this->corsairToolStripMenuItem, this->crusialToolStripMenuItem, this->dellToolStripMenuItem1, this->gSkillToolStripMenuItem,
					this->gigabyteToolStripMenuItem2, this->hPToolStripMenuItem, this->huaweiToolStripMenuItem, this->hyperXToolStripMenuItem, this->intelToolStripMenuItem2,
					this->kingstonToolStripMenuItem, this->lenovoToolStripMenuItem, this->sumsungToolStripMenuItem, this->siliconPowerToolStripMenuItem,
					this->smartBueToolStripMenuItem
			});
			this->îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->Name = L"îïåğàòèâíàÿÏàìÿòüToolStripMenuItem";
			this->îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->Text = L"Îïåğàòèâíàÿ ïàìÿòü";
			this->îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::îïåğàòèâíàÿÏàìÿòüToolStripMenuItem_Click);
			// 
			// aDataToolStripMenuItem
			// 
			this->aDataToolStripMenuItem->Name = L"aDataToolStripMenuItem";
			this->aDataToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->aDataToolStripMenuItem->Text = L"A-Data";
			this->aDataToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::aDataToolStripMenuItem_Click);
			// 
			// aMDToolStripMenuItem2
			// 
			this->aMDToolStripMenuItem2->Name = L"aMDToolStripMenuItem2";
			this->aMDToolStripMenuItem2->Size = System::Drawing::Size(182, 26);
			this->aMDToolStripMenuItem2->Text = L"AMD";
			this->aMDToolStripMenuItem2->Click += gcnew System::EventHandler(this, &AdminPanel::aMDToolStripMenuItem2_Click);
			// 
			// corsairToolStripMenuItem
			// 
			this->corsairToolStripMenuItem->Name = L"corsairToolStripMenuItem";
			this->corsairToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->corsairToolStripMenuItem->Text = L"Corsair";
			this->corsairToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::corsairToolStripMenuItem_Click);
			// 
			// crusialToolStripMenuItem
			// 
			this->crusialToolStripMenuItem->Name = L"crusialToolStripMenuItem";
			this->crusialToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->crusialToolStripMenuItem->Text = L"Crusial";
			this->crusialToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::crusialToolStripMenuItem_Click);
			// 
			// dellToolStripMenuItem1
			// 
			this->dellToolStripMenuItem1->Name = L"dellToolStripMenuItem1";
			this->dellToolStripMenuItem1->Size = System::Drawing::Size(182, 26);
			this->dellToolStripMenuItem1->Text = L"Dell";
			this->dellToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::dellToolStripMenuItem1_Click);
			// 
			// gSkillToolStripMenuItem
			// 
			this->gSkillToolStripMenuItem->Name = L"gSkillToolStripMenuItem";
			this->gSkillToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->gSkillToolStripMenuItem->Text = L"G.Skill";
			this->gSkillToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::gSkillToolStripMenuItem_Click);
			// 
			// gigabyteToolStripMenuItem2
			// 
			this->gigabyteToolStripMenuItem2->Name = L"gigabyteToolStripMenuItem2";
			this->gigabyteToolStripMenuItem2->Size = System::Drawing::Size(182, 26);
			this->gigabyteToolStripMenuItem2->Text = L"Gigabyte";
			this->gigabyteToolStripMenuItem2->Click += gcnew System::EventHandler(this, &AdminPanel::gigabyteToolStripMenuItem2_Click);
			// 
			// hPToolStripMenuItem
			// 
			this->hPToolStripMenuItem->Name = L"hPToolStripMenuItem";
			this->hPToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->hPToolStripMenuItem->Text = L"HP";
			this->hPToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::hPToolStripMenuItem_Click);
			// 
			// huaweiToolStripMenuItem
			// 
			this->huaweiToolStripMenuItem->Name = L"huaweiToolStripMenuItem";
			this->huaweiToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->huaweiToolStripMenuItem->Text = L"Huawei";
			this->huaweiToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::huaweiToolStripMenuItem_Click);
			// 
			// hyperXToolStripMenuItem
			// 
			this->hyperXToolStripMenuItem->Name = L"hyperXToolStripMenuItem";
			this->hyperXToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->hyperXToolStripMenuItem->Text = L"HyperX";
			this->hyperXToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::hyperXToolStripMenuItem_Click);
			// 
			// intelToolStripMenuItem2
			// 
			this->intelToolStripMenuItem2->Name = L"intelToolStripMenuItem2";
			this->intelToolStripMenuItem2->Size = System::Drawing::Size(182, 26);
			this->intelToolStripMenuItem2->Text = L"Intel";
			this->intelToolStripMenuItem2->Click += gcnew System::EventHandler(this, &AdminPanel::intelToolStripMenuItem2_Click);
			// 
			// kingstonToolStripMenuItem
			// 
			this->kingstonToolStripMenuItem->Name = L"kingstonToolStripMenuItem";
			this->kingstonToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->kingstonToolStripMenuItem->Text = L"Kingston";
			this->kingstonToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::kingstonToolStripMenuItem_Click);
			// 
			// lenovoToolStripMenuItem
			// 
			this->lenovoToolStripMenuItem->Name = L"lenovoToolStripMenuItem";
			this->lenovoToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->lenovoToolStripMenuItem->Text = L"Lenovo";
			this->lenovoToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::lenovoToolStripMenuItem_Click);
			// 
			// sumsungToolStripMenuItem
			// 
			this->sumsungToolStripMenuItem->Name = L"sumsungToolStripMenuItem";
			this->sumsungToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->sumsungToolStripMenuItem->Text = L"Sumsung";
			this->sumsungToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::sumsungToolStripMenuItem_Click);
			// 
			// siliconPowerToolStripMenuItem
			// 
			this->siliconPowerToolStripMenuItem->Name = L"siliconPowerToolStripMenuItem";
			this->siliconPowerToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->siliconPowerToolStripMenuItem->Text = L"Silicon-Power";
			this->siliconPowerToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::siliconPowerToolStripMenuItem_Click);
			// 
			// smartBueToolStripMenuItem
			// 
			this->smartBueToolStripMenuItem->Name = L"smartBueToolStripMenuItem";
			this->smartBueToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->smartBueToolStripMenuItem->Text = L"SmartBuy";
			this->smartBueToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::smartBueToolStripMenuItem_Click);
			// 
			// ìàòåğèíñêàÿÏëàòàToolStripMenuItem
			// 
			this->ìàòåğèíñêàÿÏëàòàToolStripMenuItem->AccessibleRole = System::Windows::Forms::AccessibleRole::CheckButton;
			this->ìàòåğèíñêàÿÏëàòàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->aSUSToolStripMenuItem1,
					this->intelToolStripMenuItem1, this->mSIToolStripMenuItem1, this->gigabyteToolStripMenuItem1, this->aSRockToolStripMenuItem,
					this->supermicroToolStripMenuItem
			});
			this->ìàòåğèíñêàÿÏëàòàToolStripMenuItem->Name = L"ìàòåğèíñêàÿÏëàòàToolStripMenuItem";
			this->ìàòåğèíñêàÿÏëàòàToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->ìàòåğèíñêàÿÏëàòàToolStripMenuItem->Text = L"Ìàòåğèíñêàÿ ïëàòà";
			this->ìàòåğèíñêàÿÏëàòàToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::ìàòåğèíñêàÿÏëàòàToolStripMenuItem_Click);
			// 
			// aSUSToolStripMenuItem1
			// 
			this->aSUSToolStripMenuItem1->Name = L"aSUSToolStripMenuItem1";
			this->aSUSToolStripMenuItem1->Size = System::Drawing::Size(168, 26);
			this->aSUSToolStripMenuItem1->Text = L"ASUS";
			this->aSUSToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::aSUSToolStripMenuItem1_Click);
			// 
			// intelToolStripMenuItem1
			// 
			this->intelToolStripMenuItem1->Name = L"intelToolStripMenuItem1";
			this->intelToolStripMenuItem1->Size = System::Drawing::Size(168, 26);
			this->intelToolStripMenuItem1->Text = L"Intel";
			this->intelToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::intelToolStripMenuItem1_Click);
			// 
			// mSIToolStripMenuItem1
			// 
			this->mSIToolStripMenuItem1->Name = L"mSIToolStripMenuItem1";
			this->mSIToolStripMenuItem1->Size = System::Drawing::Size(168, 26);
			this->mSIToolStripMenuItem1->Text = L"MSI";
			this->mSIToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::mSIToolStripMenuItem1_Click);
			// 
			// gigabyteToolStripMenuItem1
			// 
			this->gigabyteToolStripMenuItem1->Name = L"gigabyteToolStripMenuItem1";
			this->gigabyteToolStripMenuItem1->Size = System::Drawing::Size(168, 26);
			this->gigabyteToolStripMenuItem1->Text = L"Gigabyte";
			this->gigabyteToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::gigabyteToolStripMenuItem1_Click);
			// 
			// aSRockToolStripMenuItem
			// 
			this->aSRockToolStripMenuItem->Name = L"aSRockToolStripMenuItem";
			this->aSRockToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->aSRockToolStripMenuItem->Text = L"ASRock";
			this->aSRockToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::aSRockToolStripMenuItem_Click);
			// 
			// supermicroToolStripMenuItem
			// 
			this->supermicroToolStripMenuItem->Name = L"supermicroToolStripMenuItem";
			this->supermicroToolStripMenuItem->Size = System::Drawing::Size(168, 26);
			this->supermicroToolStripMenuItem->Text = L"Supermicro";
			this->supermicroToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::supermicroToolStripMenuItem_Click);
			// 
			// áëîêÏèòàíèÿToolStripMenuItem
			// 
			this->áëîêÏèòàíèÿToolStripMenuItem->AccessibleRole = System::Windows::Forms::AccessibleRole::CheckButton;
			this->áëîêÏèòàíèÿToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {
				this->chieToolStripMenuItem,
					this->aSUSToolStripMenuItem2, this->beQuietToolStripMenuItem, this->chieftecToolStripMenuItem, this->coolerMasterToolStripMenuItem,
					this->corsairToolStripMenuItem1, this->deepCoolToolStripMenuItem, this->gigabyteToolStripMenuItem3, this->seasonicToolStripMenuItem,
					this->svenToolStripMenuItem, this->zalmanToolStripMenuItem
			});
			this->áëîêÏèòàíèÿToolStripMenuItem->Name = L"áëîêÏèòàíèÿToolStripMenuItem";
			this->áëîêÏèòàíèÿToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->áëîêÏèòàíèÿToolStripMenuItem->Text = L"Áëîê ïèòàíèÿ";
			this->áëîêÏèòàíèÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::áëîêÏèòàíèÿToolStripMenuItem_Click);
			// 
			// chieToolStripMenuItem
			// 
			this->chieToolStripMenuItem->Name = L"chieToolStripMenuItem";
			this->chieToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->chieToolStripMenuItem->Text = L"AeroCool";
			this->chieToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::chieToolStripMenuItem_Click);
			// 
			// aSUSToolStripMenuItem2
			// 
			this->aSUSToolStripMenuItem2->Name = L"aSUSToolStripMenuItem2";
			this->aSUSToolStripMenuItem2->Size = System::Drawing::Size(185, 26);
			this->aSUSToolStripMenuItem2->Text = L"ASUS";
			this->aSUSToolStripMenuItem2->Click += gcnew System::EventHandler(this, &AdminPanel::aSUSToolStripMenuItem2_Click);
			// 
			// beQuietToolStripMenuItem
			// 
			this->beQuietToolStripMenuItem->Name = L"beQuietToolStripMenuItem";
			this->beQuietToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->beQuietToolStripMenuItem->Text = L"be quiet!";
			this->beQuietToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::beQuietToolStripMenuItem_Click);
			// 
			// chieftecToolStripMenuItem
			// 
			this->chieftecToolStripMenuItem->Name = L"chieftecToolStripMenuItem";
			this->chieftecToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->chieftecToolStripMenuItem->Text = L"Chieftec";
			this->chieftecToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::chieftecToolStripMenuItem_Click);
			// 
			// coolerMasterToolStripMenuItem
			// 
			this->coolerMasterToolStripMenuItem->Name = L"coolerMasterToolStripMenuItem";
			this->coolerMasterToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->coolerMasterToolStripMenuItem->Text = L"Cooler Master";
			this->coolerMasterToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::coolerMasterToolStripMenuItem_Click);
			// 
			// corsairToolStripMenuItem1
			// 
			this->corsairToolStripMenuItem1->Name = L"corsairToolStripMenuItem1";
			this->corsairToolStripMenuItem1->Size = System::Drawing::Size(185, 26);
			this->corsairToolStripMenuItem1->Text = L"Corsair";
			this->corsairToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::corsairToolStripMenuItem1_Click);
			// 
			// deepCoolToolStripMenuItem
			// 
			this->deepCoolToolStripMenuItem->Name = L"deepCoolToolStripMenuItem";
			this->deepCoolToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->deepCoolToolStripMenuItem->Text = L"DeepCool";
			this->deepCoolToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::deepCoolToolStripMenuItem_Click);
			// 
			// gigabyteToolStripMenuItem3
			// 
			this->gigabyteToolStripMenuItem3->Name = L"gigabyteToolStripMenuItem3";
			this->gigabyteToolStripMenuItem3->Size = System::Drawing::Size(185, 26);
			this->gigabyteToolStripMenuItem3->Text = L"Gigabyte";
			this->gigabyteToolStripMenuItem3->Click += gcnew System::EventHandler(this, &AdminPanel::gigabyteToolStripMenuItem3_Click);
			// 
			// seasonicToolStripMenuItem
			// 
			this->seasonicToolStripMenuItem->Name = L"seasonicToolStripMenuItem";
			this->seasonicToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->seasonicToolStripMenuItem->Text = L"Seasonic";
			this->seasonicToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::seasonicToolStripMenuItem_Click);
			// 
			// svenToolStripMenuItem
			// 
			this->svenToolStripMenuItem->Name = L"svenToolStripMenuItem";
			this->svenToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->svenToolStripMenuItem->Text = L"SVEN";
			this->svenToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::svenToolStripMenuItem_Click);
			// 
			// zalmanToolStripMenuItem
			// 
			this->zalmanToolStripMenuItem->Name = L"zalmanToolStripMenuItem";
			this->zalmanToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->zalmanToolStripMenuItem->Text = L"Zalman";
			this->zalmanToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::zalmanToolStripMenuItem_Click);
			// 
			// sSDToolStripMenuItem
			// 
			this->sSDToolStripMenuItem->AccessibleRole = System::Windows::Forms::AccessibleRole::CheckButton;
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
			this->sSDToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::sSDToolStripMenuItem_Click);
			// 
			// aDataToolStripMenuItem1
			// 
			this->aDataToolStripMenuItem1->Name = L"aDataToolStripMenuItem1";
			this->aDataToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
			this->aDataToolStripMenuItem1->Text = L"A-Data";
			this->aDataToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::aDataToolStripMenuItem1_Click);
			// 
			// aMDToolStripMenuItem3
			// 
			this->aMDToolStripMenuItem3->Name = L"aMDToolStripMenuItem3";
			this->aMDToolStripMenuItem3->Size = System::Drawing::Size(152, 26);
			this->aMDToolStripMenuItem3->Text = L"AMD";
			this->aMDToolStripMenuItem3->Click += gcnew System::EventHandler(this, &AdminPanel::aMDToolStripMenuItem3_Click);
			// 
			// aSUSToolStripMenuItem3
			// 
			this->aSUSToolStripMenuItem3->Name = L"aSUSToolStripMenuItem3";
			this->aSUSToolStripMenuItem3->Size = System::Drawing::Size(152, 26);
			this->aSUSToolStripMenuItem3->Text = L"ASUS";
			this->aSUSToolStripMenuItem3->Click += gcnew System::EventHandler(this, &AdminPanel::aSUSToolStripMenuItem3_Click);
			// 
			// corsairToolStripMenuItem2
			// 
			this->corsairToolStripMenuItem2->Name = L"corsairToolStripMenuItem2";
			this->corsairToolStripMenuItem2->Size = System::Drawing::Size(152, 26);
			this->corsairToolStripMenuItem2->Text = L"Corsair";
			this->corsairToolStripMenuItem2->Click += gcnew System::EventHandler(this, &AdminPanel::corsairToolStripMenuItem2_Click);
			// 
			// crusialToolStripMenuItem1
			// 
			this->crusialToolStripMenuItem1->Name = L"crusialToolStripMenuItem1";
			this->crusialToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
			this->crusialToolStripMenuItem1->Text = L"Crusial";
			this->crusialToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::crusialToolStripMenuItem1_Click);
			// 
			// gigabyteToolStripMenuItem4
			// 
			this->gigabyteToolStripMenuItem4->Name = L"gigabyteToolStripMenuItem4";
			this->gigabyteToolStripMenuItem4->Size = System::Drawing::Size(152, 26);
			this->gigabyteToolStripMenuItem4->Text = L"Gigabyte";
			this->gigabyteToolStripMenuItem4->Click += gcnew System::EventHandler(this, &AdminPanel::gigabyteToolStripMenuItem4_Click);
			// 
			// hPToolStripMenuItem1
			// 
			this->hPToolStripMenuItem1->Name = L"hPToolStripMenuItem1";
			this->hPToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
			this->hPToolStripMenuItem1->Text = L"HP";
			this->hPToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::hPToolStripMenuItem1_Click);
			// 
			// huaweiToolStripMenuItem1
			// 
			this->huaweiToolStripMenuItem1->Name = L"huaweiToolStripMenuItem1";
			this->huaweiToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
			this->huaweiToolStripMenuItem1->Text = L"Huawei";
			this->huaweiToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::huaweiToolStripMenuItem1_Click);
			// 
			// hyperXToolStripMenuItem1
			// 
			this->hyperXToolStripMenuItem1->Name = L"hyperXToolStripMenuItem1";
			this->hyperXToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
			this->hyperXToolStripMenuItem1->Text = L"HyperX";
			this->hyperXToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::hyperXToolStripMenuItem1_Click);
			// 
			// intelToolStripMenuItem3
			// 
			this->intelToolStripMenuItem3->Name = L"intelToolStripMenuItem3";
			this->intelToolStripMenuItem3->Size = System::Drawing::Size(152, 26);
			this->intelToolStripMenuItem3->Text = L"Intel";
			this->intelToolStripMenuItem3->Click += gcnew System::EventHandler(this, &AdminPanel::intelToolStripMenuItem3_Click);
			// 
			// kingstonToolStripMenuItem1
			// 
			this->kingstonToolStripMenuItem1->Name = L"kingstonToolStripMenuItem1";
			this->kingstonToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
			this->kingstonToolStripMenuItem1->Text = L"Kingston";
			this->kingstonToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::kingstonToolStripMenuItem1_Click);
			// 
			// sumsungToolStripMenuItem1
			// 
			this->sumsungToolStripMenuItem1->Name = L"sumsungToolStripMenuItem1";
			this->sumsungToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
			this->sumsungToolStripMenuItem1->Text = L"Sumsung";
			this->sumsungToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::sumsungToolStripMenuItem1_Click);
			// 
			// sanDiskToolStripMenuItem
			// 
			this->sanDiskToolStripMenuItem->Name = L"sanDiskToolStripMenuItem";
			this->sanDiskToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->sanDiskToolStripMenuItem->Text = L"SanDisk";
			this->sanDiskToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::sanDiskToolStripMenuItem_Click);
			// 
			// seagateToolStripMenuItem
			// 
			this->seagateToolStripMenuItem->Name = L"seagateToolStripMenuItem";
			this->seagateToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->seagateToolStripMenuItem->Text = L"Seagate";
			this->seagateToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::seagateToolStripMenuItem_Click);
			// 
			// toshibaToolStripMenuItem
			// 
			this->toshibaToolStripMenuItem->Name = L"toshibaToolStripMenuItem";
			this->toshibaToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->toshibaToolStripMenuItem->Text = L"Toshiba";
			this->toshibaToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::toshibaToolStripMenuItem_Click);
			// 
			// wDToolStripMenuItem
			// 
			this->wDToolStripMenuItem->Name = L"wDToolStripMenuItem";
			this->wDToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->wDToolStripMenuItem->Text = L"WD";
			this->wDToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::wDToolStripMenuItem_Click);
			// 
			// æåñòêèåÄèñêèToolStripMenuItem
			// 
			this->æåñòêèåÄèñêèToolStripMenuItem->AccessibleRole = System::Windows::Forms::AccessibleRole::CheckButton;
			this->æåñòêèåÄèñêèToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->dellToolStripMenuItem2,
					this->hPToolStripMenuItem2, this->huaweiToolStripMenuItem2, this->samsungToolStripMenuItem, this->seagateToolStripMenuItem1,
					this->toshibaToolStripMenuItem1, this->wDToolStripMenuItem1
			});
			this->æåñòêèåÄèñêèToolStripMenuItem->Name = L"æåñòêèåÄèñêèToolStripMenuItem";
			this->æåñòêèåÄèñêèToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->æåñòêèåÄèñêèToolStripMenuItem->Text = L"Æåñòêèå äèñêè";
			this->æåñòêèåÄèñêèToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::æåñòêèåÄèñêèToolStripMenuItem_Click);
			// 
			// dellToolStripMenuItem2
			// 
			this->dellToolStripMenuItem2->Name = L"dellToolStripMenuItem2";
			this->dellToolStripMenuItem2->Size = System::Drawing::Size(152, 26);
			this->dellToolStripMenuItem2->Text = L"Dell";
			this->dellToolStripMenuItem2->Click += gcnew System::EventHandler(this, &AdminPanel::dellToolStripMenuItem2_Click);
			// 
			// hPToolStripMenuItem2
			// 
			this->hPToolStripMenuItem2->Name = L"hPToolStripMenuItem2";
			this->hPToolStripMenuItem2->Size = System::Drawing::Size(152, 26);
			this->hPToolStripMenuItem2->Text = L"HP";
			this->hPToolStripMenuItem2->Click += gcnew System::EventHandler(this, &AdminPanel::hPToolStripMenuItem2_Click);
			// 
			// huaweiToolStripMenuItem2
			// 
			this->huaweiToolStripMenuItem2->Name = L"huaweiToolStripMenuItem2";
			this->huaweiToolStripMenuItem2->Size = System::Drawing::Size(152, 26);
			this->huaweiToolStripMenuItem2->Text = L"Huawei";
			this->huaweiToolStripMenuItem2->Click += gcnew System::EventHandler(this, &AdminPanel::huaweiToolStripMenuItem2_Click);
			// 
			// samsungToolStripMenuItem
			// 
			this->samsungToolStripMenuItem->Name = L"samsungToolStripMenuItem";
			this->samsungToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->samsungToolStripMenuItem->Text = L"Samsung";
			this->samsungToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::samsungToolStripMenuItem_Click);
			// 
			// seagateToolStripMenuItem1
			// 
			this->seagateToolStripMenuItem1->Name = L"seagateToolStripMenuItem1";
			this->seagateToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
			this->seagateToolStripMenuItem1->Text = L"Seagate";
			this->seagateToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::seagateToolStripMenuItem1_Click);
			// 
			// toshibaToolStripMenuItem1
			// 
			this->toshibaToolStripMenuItem1->Name = L"toshibaToolStripMenuItem1";
			this->toshibaToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
			this->toshibaToolStripMenuItem1->Text = L"Toshiba";
			this->toshibaToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::toshibaToolStripMenuItem1_Click);
			// 
			// wDToolStripMenuItem1
			// 
			this->wDToolStripMenuItem1->Name = L"wDToolStripMenuItem1";
			this->wDToolStripMenuItem1->Size = System::Drawing::Size(152, 26);
			this->wDToolStripMenuItem1->Text = L"WD";
			this->wDToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::wDToolStripMenuItem1_Click);
			// 
			// ñèñòåìàÎõëàæäåíèÿToolStripMenuItem
			// 
			this->ñèñòåìàÎõëàæäåíèÿToolStripMenuItem->AccessibleRole = System::Windows::Forms::AccessibleRole::CheckButton;
			this->ñèñòåìàÎõëàæäåíèÿToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(14) {
				this->aeroCoolToolStripMenuItem1,
					this->aMDToolStripMenuItem4, this->aSUSToolStripMenuItem5, this->beQuietToolStripMenuItem2, this->chieftecToolStripMenuItem2,
					this->coolerMasterToolStripMenuItem2, this->corsairToolStripMenuItem3, this->deepCoolToolStripMenuItem2, this->gigabyteToolStripMenuItem6,
					this->intelToolStripMenuItem5, this->pCCoolerToolStripMenuItem, this->sapphireToolStripMenuItem1, this->sypermicroToolStripMenuItem1,
					this->zalmanToolStripMenuItem2
			});
			this->ñèñòåìàÎõëàæäåíèÿToolStripMenuItem->Name = L"ñèñòåìàÎõëàæäåíèÿToolStripMenuItem";
			this->ñèñòåìàÎõëàæäåíèÿToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->ñèñòåìàÎõëàæäåíèÿToolStripMenuItem->Text = L"Ñèñòåìà îõëàæäåíèÿ";
			this->ñèñòåìàÎõëàæäåíèÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::ñèñòåìàÎõëàæäåíèÿToolStripMenuItem_Click);
			// 
			// aeroCoolToolStripMenuItem1
			// 
			this->aeroCoolToolStripMenuItem1->Name = L"aeroCoolToolStripMenuItem1";
			this->aeroCoolToolStripMenuItem1->Size = System::Drawing::Size(185, 26);
			this->aeroCoolToolStripMenuItem1->Text = L"AeroCool";
			this->aeroCoolToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::aeroCoolToolStripMenuItem1_Click);
			// 
			// aMDToolStripMenuItem4
			// 
			this->aMDToolStripMenuItem4->Name = L"aMDToolStripMenuItem4";
			this->aMDToolStripMenuItem4->Size = System::Drawing::Size(185, 26);
			this->aMDToolStripMenuItem4->Text = L"AMD";
			this->aMDToolStripMenuItem4->Click += gcnew System::EventHandler(this, &AdminPanel::aMDToolStripMenuItem4_Click);
			// 
			// aSUSToolStripMenuItem5
			// 
			this->aSUSToolStripMenuItem5->Name = L"aSUSToolStripMenuItem5";
			this->aSUSToolStripMenuItem5->Size = System::Drawing::Size(185, 26);
			this->aSUSToolStripMenuItem5->Text = L"ASUS";
			this->aSUSToolStripMenuItem5->Click += gcnew System::EventHandler(this, &AdminPanel::aSUSToolStripMenuItem5_Click);
			// 
			// beQuietToolStripMenuItem2
			// 
			this->beQuietToolStripMenuItem2->Name = L"beQuietToolStripMenuItem2";
			this->beQuietToolStripMenuItem2->Size = System::Drawing::Size(185, 26);
			this->beQuietToolStripMenuItem2->Text = L"be quiet!";
			this->beQuietToolStripMenuItem2->Click += gcnew System::EventHandler(this, &AdminPanel::beQuietToolStripMenuItem2_Click);
			// 
			// chieftecToolStripMenuItem2
			// 
			this->chieftecToolStripMenuItem2->Name = L"chieftecToolStripMenuItem2";
			this->chieftecToolStripMenuItem2->Size = System::Drawing::Size(185, 26);
			this->chieftecToolStripMenuItem2->Text = L"Chieftec";
			this->chieftecToolStripMenuItem2->Click += gcnew System::EventHandler(this, &AdminPanel::chieftecToolStripMenuItem2_Click);
			// 
			// coolerMasterToolStripMenuItem2
			// 
			this->coolerMasterToolStripMenuItem2->Name = L"coolerMasterToolStripMenuItem2";
			this->coolerMasterToolStripMenuItem2->Size = System::Drawing::Size(185, 26);
			this->coolerMasterToolStripMenuItem2->Text = L"Cooler Master";
			this->coolerMasterToolStripMenuItem2->Click += gcnew System::EventHandler(this, &AdminPanel::coolerMasterToolStripMenuItem2_Click);
			// 
			// corsairToolStripMenuItem3
			// 
			this->corsairToolStripMenuItem3->Name = L"corsairToolStripMenuItem3";
			this->corsairToolStripMenuItem3->Size = System::Drawing::Size(185, 26);
			this->corsairToolStripMenuItem3->Text = L"Corsair";
			this->corsairToolStripMenuItem3->Click += gcnew System::EventHandler(this, &AdminPanel::corsairToolStripMenuItem3_Click);
			// 
			// deepCoolToolStripMenuItem2
			// 
			this->deepCoolToolStripMenuItem2->Name = L"deepCoolToolStripMenuItem2";
			this->deepCoolToolStripMenuItem2->Size = System::Drawing::Size(185, 26);
			this->deepCoolToolStripMenuItem2->Text = L"DeepCool";
			this->deepCoolToolStripMenuItem2->Click += gcnew System::EventHandler(this, &AdminPanel::deepCoolToolStripMenuItem2_Click);
			// 
			// gigabyteToolStripMenuItem6
			// 
			this->gigabyteToolStripMenuItem6->Name = L"gigabyteToolStripMenuItem6";
			this->gigabyteToolStripMenuItem6->Size = System::Drawing::Size(185, 26);
			this->gigabyteToolStripMenuItem6->Text = L"Gigabyte";
			this->gigabyteToolStripMenuItem6->Click += gcnew System::EventHandler(this, &AdminPanel::gigabyteToolStripMenuItem6_Click);
			// 
			// intelToolStripMenuItem5
			// 
			this->intelToolStripMenuItem5->Name = L"intelToolStripMenuItem5";
			this->intelToolStripMenuItem5->Size = System::Drawing::Size(185, 26);
			this->intelToolStripMenuItem5->Text = L"Intel";
			this->intelToolStripMenuItem5->Click += gcnew System::EventHandler(this, &AdminPanel::intelToolStripMenuItem5_Click);
			// 
			// pCCoolerToolStripMenuItem
			// 
			this->pCCoolerToolStripMenuItem->Name = L"pCCoolerToolStripMenuItem";
			this->pCCoolerToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->pCCoolerToolStripMenuItem->Text = L"PCCooler";
			this->pCCoolerToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::pCCoolerToolStripMenuItem_Click);
			// 
			// sapphireToolStripMenuItem1
			// 
			this->sapphireToolStripMenuItem1->Name = L"sapphireToolStripMenuItem1";
			this->sapphireToolStripMenuItem1->Size = System::Drawing::Size(185, 26);
			this->sapphireToolStripMenuItem1->Text = L"Sapphire";
			this->sapphireToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::sapphireToolStripMenuItem1_Click);
			// 
			// sypermicroToolStripMenuItem1
			// 
			this->sypermicroToolStripMenuItem1->Name = L"sypermicroToolStripMenuItem1";
			this->sypermicroToolStripMenuItem1->Size = System::Drawing::Size(185, 26);
			this->sypermicroToolStripMenuItem1->Text = L"Sypermicro";
			this->sypermicroToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::sypermicroToolStripMenuItem1_Click);
			// 
			// zalmanToolStripMenuItem2
			// 
			this->zalmanToolStripMenuItem2->Name = L"zalmanToolStripMenuItem2";
			this->zalmanToolStripMenuItem2->Size = System::Drawing::Size(185, 26);
			this->zalmanToolStripMenuItem2->Text = L"Zalman";
			this->zalmanToolStripMenuItem2->Click += gcnew System::EventHandler(this, &AdminPanel::zalmanToolStripMenuItem2_Click);
			// 
			// êîğïóñàToolStripMenuItem
			// 
			this->êîğïóñàToolStripMenuItem->AccessibleRole = System::Windows::Forms::AccessibleRole::CheckButton;
			this->êîğïóñàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {
				this->aeroCoolToolStripMenuItem,
					this->aSUSToolStripMenuItem4, this->beQuietToolStripMenuItem1, this->chieftecToolStripMenuItem1, this->coolerMasterToolStripMenuItem1,
					this->deepCoolToolStripMenuItem1, this->gigabyteToolStripMenuItem5, this->intelToolStripMenuItem4, this->mSIToolStripMenuItem2,
					this->powercaseToolStripMenuItem, this->sypermicroToolStripMenuItem, this->zalmanToolStripMenuItem1
			});
			this->êîğïóñàToolStripMenuItem->Name = L"êîğïóñàToolStripMenuItem";
			this->êîğïóñàToolStripMenuItem->Size = System::Drawing::Size(239, 26);
			this->êîğïóñàToolStripMenuItem->Text = L"Êîğïóñà";
			this->êîğïóñàToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::êîğïóñàToolStripMenuItem_Click);
			// 
			// aeroCoolToolStripMenuItem
			// 
			this->aeroCoolToolStripMenuItem->Name = L"aeroCoolToolStripMenuItem";
			this->aeroCoolToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->aeroCoolToolStripMenuItem->Text = L"AeroCool";
			this->aeroCoolToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::aeroCoolToolStripMenuItem_Click);
			// 
			// aSUSToolStripMenuItem4
			// 
			this->aSUSToolStripMenuItem4->Name = L"aSUSToolStripMenuItem4";
			this->aSUSToolStripMenuItem4->Size = System::Drawing::Size(185, 26);
			this->aSUSToolStripMenuItem4->Text = L"ASUS";
			this->aSUSToolStripMenuItem4->Click += gcnew System::EventHandler(this, &AdminPanel::aSUSToolStripMenuItem4_Click);
			// 
			// beQuietToolStripMenuItem1
			// 
			this->beQuietToolStripMenuItem1->Name = L"beQuietToolStripMenuItem1";
			this->beQuietToolStripMenuItem1->Size = System::Drawing::Size(185, 26);
			this->beQuietToolStripMenuItem1->Text = L"be quiet!";
			this->beQuietToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::beQuietToolStripMenuItem1_Click);
			// 
			// chieftecToolStripMenuItem1
			// 
			this->chieftecToolStripMenuItem1->Name = L"chieftecToolStripMenuItem1";
			this->chieftecToolStripMenuItem1->Size = System::Drawing::Size(185, 26);
			this->chieftecToolStripMenuItem1->Text = L"Chieftec";
			this->chieftecToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::chieftecToolStripMenuItem1_Click);
			// 
			// coolerMasterToolStripMenuItem1
			// 
			this->coolerMasterToolStripMenuItem1->Name = L"coolerMasterToolStripMenuItem1";
			this->coolerMasterToolStripMenuItem1->Size = System::Drawing::Size(185, 26);
			this->coolerMasterToolStripMenuItem1->Text = L"Cooler Master";
			this->coolerMasterToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::coolerMasterToolStripMenuItem1_Click);
			// 
			// deepCoolToolStripMenuItem1
			// 
			this->deepCoolToolStripMenuItem1->Name = L"deepCoolToolStripMenuItem1";
			this->deepCoolToolStripMenuItem1->Size = System::Drawing::Size(185, 26);
			this->deepCoolToolStripMenuItem1->Text = L"DeepCool";
			this->deepCoolToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::deepCoolToolStripMenuItem1_Click);
			// 
			// gigabyteToolStripMenuItem5
			// 
			this->gigabyteToolStripMenuItem5->Name = L"gigabyteToolStripMenuItem5";
			this->gigabyteToolStripMenuItem5->Size = System::Drawing::Size(185, 26);
			this->gigabyteToolStripMenuItem5->Text = L"Gigabyte";
			this->gigabyteToolStripMenuItem5->Click += gcnew System::EventHandler(this, &AdminPanel::gigabyteToolStripMenuItem5_Click);
			// 
			// intelToolStripMenuItem4
			// 
			this->intelToolStripMenuItem4->Name = L"intelToolStripMenuItem4";
			this->intelToolStripMenuItem4->Size = System::Drawing::Size(185, 26);
			this->intelToolStripMenuItem4->Text = L"Intel";
			this->intelToolStripMenuItem4->Click += gcnew System::EventHandler(this, &AdminPanel::intelToolStripMenuItem4_Click);
			// 
			// mSIToolStripMenuItem2
			// 
			this->mSIToolStripMenuItem2->Name = L"mSIToolStripMenuItem2";
			this->mSIToolStripMenuItem2->Size = System::Drawing::Size(185, 26);
			this->mSIToolStripMenuItem2->Text = L"MSI";
			this->mSIToolStripMenuItem2->Click += gcnew System::EventHandler(this, &AdminPanel::mSIToolStripMenuItem2_Click);
			// 
			// powercaseToolStripMenuItem
			// 
			this->powercaseToolStripMenuItem->Name = L"powercaseToolStripMenuItem";
			this->powercaseToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->powercaseToolStripMenuItem->Text = L"Powercase";
			this->powercaseToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::powercaseToolStripMenuItem_Click);
			// 
			// sypermicroToolStripMenuItem
			// 
			this->sypermicroToolStripMenuItem->Name = L"sypermicroToolStripMenuItem";
			this->sypermicroToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->sypermicroToolStripMenuItem->Text = L"Sypermicro";
			this->sypermicroToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::sypermicroToolStripMenuItem_Click);
			// 
			// zalmanToolStripMenuItem1
			// 
			this->zalmanToolStripMenuItem1->Name = L"zalmanToolStripMenuItem1";
			this->zalmanToolStripMenuItem1->Size = System::Drawing::Size(185, 26);
			this->zalmanToolStripMenuItem1->Text = L"Zalman";
			this->zalmanToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminPanel::zalmanToolStripMenuItem1_Click);
			// 
			// ìèíèìàëüíàÿÖåíàToolStripMenuItem
			// 
			this->ìèíèìàëüíàÿÖåíàToolStripMenuItem->Name = L"ìèíèìàëüíàÿÖåíàToolStripMenuItem";
			this->ìèíèìàëüíàÿÖåíàToolStripMenuItem->Size = System::Drawing::Size(228, 24);
			this->ìèíèìàëüíàÿÖåíàToolStripMenuItem->Text = L"Ìèíèìàëüíàÿ öåíà";
			// 
			// minprice
			// 
			this->minprice->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->minprice->Name = L"minprice";
			this->minprice->Size = System::Drawing::Size(226, 27);
			// 
			// ìàêñèìàëüíàÿÖåíàToolStripMenuItem
			// 
			this->ìàêñèìàëüíàÿÖåíàToolStripMenuItem->Name = L"ìàêñèìàëüíàÿÖåíàToolStripMenuItem";
			this->ìàêñèìàëüíàÿÖåíàToolStripMenuItem->Size = System::Drawing::Size(228, 24);
			this->ìàêñèìàëüíàÿÖåíàToolStripMenuItem->Text = L"Ìàêñèìàëüíàÿ öåíà";
			// 
			// maxprice
			// 
			this->maxprice->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->maxprice->Name = L"maxprice";
			this->maxprice->Size = System::Drawing::Size(226, 27);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(228, 24);
			this->toolStripMenuItem1->Text = L"Íàèìåíîâàíèå";
			// 
			// prodname
			// 
			this->prodname->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->prodname->Name = L"prodname";
			this->prodname->Size = System::Drawing::Size(226, 27);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->AutoSize = false;
			this->toolStripMenuItem2->Checked = true;
			this->toolStripMenuItem2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(226, 200);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->toolStripMenuItem3->AutoSize = false;
			this->toolStripMenuItem3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->toolStripMenuItem3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->toolStripMenuItem3->Enabled = false;
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(226, 28);
			// 
			// ïğèToolStripMenuItem
			// 
			this->ïğèToolStripMenuItem->Name = L"ïğèToolStripMenuItem";
			this->ïğèToolStripMenuItem->Size = System::Drawing::Size(228, 24);
			this->ïğèToolStripMenuItem->Text = L"Ïğèìåíèòü";
			this->ïğèToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::ïğèToolStripMenuItem_Click_1);
			// 
			// âûéòèToolStripMenuItem
			// 
			this->âûéòèToolStripMenuItem->Name = L"âûéòèToolStripMenuItem";
			this->âûéòèToolStripMenuItem->Size = System::Drawing::Size(228, 24);
			this->âûéòèToolStripMenuItem->Text = L"Âûéòè";
			this->âûéòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::âûéòèToolStripMenuItem_Click);
			// 
			// AdminPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1425, 677);
			this->Controls->Add(this->menuStrip2);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1443, 724);
			this->MinimumSize = System::Drawing::Size(1443, 724);
			this->Name = L"AdminPanel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ïàíåëü Àäìèíèñòğèğîâàíèÿ";
			this->Load += gcnew System::EventHandler(this, &AdminPanel::AdminPanel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AdminPanel_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void âûõîäToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void èíôîğìàöèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e); /// Îøèáêà
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e); 
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e); 
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e); 
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e); 
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void button14_Click_1(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void button13_Click_1(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void button12_Click_1(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e);
	private: System::Void êîíòàêòíàÿÈíôîğìàöèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void ïëàòåæíàÿÈíôîğìàöèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void button_filter_Click(System::Object^ sender, System::EventArgs^ e) {
		menuStrip2->Enabled = true;
		menuStrip2->Visible = true;
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void âûéòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		menuStrip2->Enabled = false;
		menuStrip2->Visible = false;
	}
	   ///--------------------------------------- Äîï ôóíêöèè
		bool isCorrectEmail(const std::string& email) {
			std::regex re("(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\\.[a-zA-Z0-9-.]+$)");
			return regex_search(email, re);
		}

	   bool check_type(ToolStripMenuItem^ a) {
		   if (a->Checked == false) {
			   a->Enabled = true;
			   a->Checked = true;
			   return true;
		   }
		   else if (a->Checked == true) {
			   a->Enabled = true;
			   a->Checked = false;
			   return false;
		   }
	   }
	   bool check_producer(ToolStripMenuItem^ a) {
		   if (a->Checked == false) {
			   a->Checked = true;
			   return true;
		   }
		   else if (a->Checked == true) {
			   a->Checked = false;
			   return false;
		   }
	   }
	   bool check_producer_c(ToolStripMenuItem^ a) {
		   if (a->Checked == true) return true;
		   else if (a->Checked == false) return false;
	   }

	   bool comparef(String^ name1, String^ name2) {
		   string Str1, Str2;
		   int compare;
		   bool check_n;

		   Str1 = msclr::interop::marshal_as<std::string>(name1);
		   Str2 = msclr::interop::marshal_as<std::string>(name2);

		   if (Str1.size() == 1) {
			   compare = 1;
		   }
		   else compare = (Str1.size());
		   if (compare > Str2.size()) {
			   check_n = false;
			   return false;
		   }
		   for (int i = 0; i < compare; i++) {
			   if (Str1[i] != Str2[i]) {
				   check_n = false;
				   break;
			   }
			   else check_n = true;
		   }
		   return check_n;
	   }
	   bool search(int min, int max, String^ name,
		   String^ type, String^ prod, bool checker) {
		   bool check_p = false, check_t = false, check_n = false, check_pr = false;
		   String^ Price, ^ name2;
		   string Str1, Str2, price;
		   int compare, pr;

		   String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=ProdStorage.mdb";
		   OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

		   dbConnection->Open();
		   String^ query = "SELECT * FROM [Storage]";
		   OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
		   OleDbDataReader^ dbReader = dbCommand->ExecuteReader();


		   if (dbReader->HasRows == false) {
			   MessageBox::Show("Îøèáêà ñ÷èòûâàíèÿ äàííûõ", "Îøèáêà");
		   }
		   else {
			   while (dbReader->Read()) {
				   if (dbReader["Ïğîèçâîäèòåëü"]->ToString() == prod || prod == "") check_p = true;
				   if (dbReader["Òèï"]->ToString() == type || type == "") check_t = true;
				   name2 = dbReader["Íàèìåíîâàíèå"]->ToString();
				   check_n = comparef(name, name2);
				   if (check_n == true || name == "") check_n = true;
				   else check_n = false;

				   Price = dbReader["Öåíà"]->ToString();
				   price = msclr::interop::marshal_as<std::string>(Price);
				   pr = stoi(price);

				   if (min <= pr && pr <= max || checker == false) check_pr = true;

				   if (check_n == true && check_p == true && check_t == true && check_pr == true) {
					   dataGridView1->Rows->Add(dbReader["Id"], dbReader["Íàëè÷èå"], dbReader["Ïğîèçâîäèòåëü"],
						   dbReader["Òèï"], dbReader["Íàèìåíîâàíèå"], dbReader["Öåíà"]);
					   check_p = false; check_t = false; check_n = false; check_pr = false;
				   }
				   else {
					   check_p = false; check_t = false; check_n = false; check_pr = false;
					   continue;
				   }
			   }
		   }

		   return true;
	   }


private: System::Void menuStrip2_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void âèäåîêàğòàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_type(âèäåîêàğòàToolStripMenuItem);
}
private: System::Void ïğîöåññîğToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_type(ïğîöåññîğToolStripMenuItem);
}
private: System::Void îïåğàòèâíàÿÏàìÿòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_type(îïåğàòèâíàÿÏàìÿòüToolStripMenuItem);
}
private: System::Void ìàòåğèíñêàÿÏëàòàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_type(ìàòåğèíñêàÿÏëàòàToolStripMenuItem);
}
private: System::Void áëîêÏèòàíèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_type(áëîêÏèòàíèÿToolStripMenuItem);
}
private: System::Void sSDToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_type(sSDToolStripMenuItem);
}
private: System::Void æåñòêèåÄèñêèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_type(æåñòêèåÄèñêèToolStripMenuItem);
}
private: System::Void ñèñòåìàÎõëàæäåíèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_type(ñèñòåìàÎõëàæäåíèÿToolStripMenuItem);
}
private: System::Void êîğïóñàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_type(êîğïóñàToolStripMenuItem);
}

	   //-------------------------------------------- Âèäåîêàğòû
private: System::Void aMDToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(aMDToolStripMenuItem);
}
private: System::Void aSUSToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(aSUSToolStripMenuItem);
}
private: System::Void dellToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(dellToolStripMenuItem);
}
private: System::Void mSIToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(mSIToolStripMenuItem);
}
private: System::Void palitToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(palitToolStripMenuItem1);
}
private: System::Void gigabyteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(gigabyteToolStripMenuItem);
}
private: System::Void powerColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(powerColorToolStripMenuItem);
}
private: System::Void sapphireToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(sapphireToolStripMenuItem);
}
private: System::Void sinotexToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(sinotexToolStripMenuItem);
}
private: System::Void zOTACToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(zOTACToolStripMenuItem);
}
private: System::Void nVIDIAToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(nVIDIAToolStripMenuItem);

}

	   //------------------------- Ïğîöåññîğû
private: System::Void aMDToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(aMDToolStripMenuItem1);
}
private: System::Void intelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(intelToolStripMenuItem);
}

	   //----------------------------- Îïåğàòèâíàÿ ïàìÿòü

private: System::Void crusialToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(crusialToolStripMenuItem);
}
private: System::Void aDataToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(aDataToolStripMenuItem);
}
private: System::Void dellToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(dellToolStripMenuItem1);
}
private: System::Void gSkillToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(gSkillToolStripMenuItem);
}
private: System::Void gigabyteToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(gigabyteToolStripMenuItem2);
}
private: System::Void aMDToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(aMDToolStripMenuItem2);
}
private: System::Void corsairToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(corsairToolStripMenuItem);
}
private: System::Void hPToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(hPToolStripMenuItem);
}
private: System::Void huaweiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(huaweiToolStripMenuItem);
}
private: System::Void hyperXToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(hyperXToolStripMenuItem);
}
private: System::Void intelToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(intelToolStripMenuItem2);
}
private: System::Void kingstonToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(kingstonToolStripMenuItem);
}
private: System::Void lenovoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(lenovoToolStripMenuItem);
}
private: System::Void sumsungToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(sumsungToolStripMenuItem);
}
private: System::Void siliconPowerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(siliconPowerToolStripMenuItem);
}
private: System::Void smartBueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(smartBueToolStripMenuItem);
}

	   //----------------------------- Ìàòåğèíñêèå ïëàòû
private: System::Void aSUSToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(aSUSToolStripMenuItem1);
}
private: System::Void intelToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(intelToolStripMenuItem1);
}
private: System::Void mSIToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(mSIToolStripMenuItem1);
}
private: System::Void gigabyteToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(gigabyteToolStripMenuItem1);
}
private: System::Void aSRockToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(aSRockToolStripMenuItem);
}
private: System::Void supermicroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(supermicroToolStripMenuItem);
}
	   //-------------------------- Áëîê ïèòàíèÿ

private: System::Void chieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(chieToolStripMenuItem);
}
private: System::Void aSUSToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(aSUSToolStripMenuItem2);
}
private: System::Void beQuietToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(beQuietToolStripMenuItem);
}
private: System::Void chieftecToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(chieftecToolStripMenuItem);
}
private: System::Void coolerMasterToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(coolerMasterToolStripMenuItem);
}
private: System::Void corsairToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(corsairToolStripMenuItem1);
}
private: System::Void deepCoolToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(deepCoolToolStripMenuItem);
}
private: System::Void gigabyteToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(gigabyteToolStripMenuItem3);
}
private: System::Void seasonicToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(seasonicToolStripMenuItem);
}
private: System::Void svenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(svenToolStripMenuItem);
}
private: System::Void zalmanToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(zalmanToolStripMenuItem);
}
	   //------- SSD
private: System::Void aDataToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(aDataToolStripMenuItem1);
}
private: System::Void aMDToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(aMDToolStripMenuItem3);
}
private: System::Void aSUSToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(aSUSToolStripMenuItem3);
}
private: System::Void corsairToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(corsairToolStripMenuItem2);
}
private: System::Void crusialToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(crusialToolStripMenuItem1);
}
private: System::Void gigabyteToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(gigabyteToolStripMenuItem4);
}
private: System::Void hPToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(hPToolStripMenuItem1);
}
private: System::Void huaweiToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(huaweiToolStripMenuItem1);
}
private: System::Void hyperXToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(hyperXToolStripMenuItem1);
}
private: System::Void intelToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(intelToolStripMenuItem3);
}
private: System::Void kingstonToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(kingstonToolStripMenuItem1);
}
private: System::Void sumsungToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(sumsungToolStripMenuItem1);
}
private: System::Void sanDiskToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(sanDiskToolStripMenuItem);
}
private: System::Void seagateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(seagateToolStripMenuItem);
}
private: System::Void toshibaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(toshibaToolStripMenuItem);
}
private: System::Void wDToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(wDToolStripMenuItem);
}
	   //--------------------------------------- Æåñòêèå äèñêè
private: System::Void dellToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(dellToolStripMenuItem2);
}
private: System::Void hPToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(hPToolStripMenuItem2);
}
private: System::Void huaweiToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(huaweiToolStripMenuItem2);
}
private: System::Void samsungToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(samsungToolStripMenuItem);
}
private: System::Void seagateToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(seagateToolStripMenuItem1);
}
private: System::Void toshibaToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(toshibaToolStripMenuItem1);
}
private: System::Void wDToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(wDToolStripMenuItem1);
}
	   //------------------------------ Ñèñòåìû îõëàæäåíèÿ
private: System::Void aeroCoolToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(aeroCoolToolStripMenuItem1);

}
private: System::Void aMDToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(aMDToolStripMenuItem4);
}
private: System::Void aSUSToolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(aSUSToolStripMenuItem5);
}
private: System::Void beQuietToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(beQuietToolStripMenuItem2);
}
private: System::Void chieftecToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(chieftecToolStripMenuItem2);
}
private: System::Void coolerMasterToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(coolerMasterToolStripMenuItem2);
}
private: System::Void corsairToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(corsairToolStripMenuItem3);
}
private: System::Void deepCoolToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(deepCoolToolStripMenuItem2);
}
private: System::Void gigabyteToolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(gigabyteToolStripMenuItem6);
}
private: System::Void intelToolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(intelToolStripMenuItem5);
}
private: System::Void pCCoolerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(pCCoolerToolStripMenuItem);
}
private: System::Void sapphireToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(sapphireToolStripMenuItem1);
}
private: System::Void sypermicroToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(sypermicroToolStripMenuItem1);
}
private: System::Void zalmanToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(zalmanToolStripMenuItem2);
}
	   //----------------------- Êîğïóñà
private: System::Void aeroCoolToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(aeroCoolToolStripMenuItem);
}
private: System::Void aSUSToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(aSUSToolStripMenuItem4);
}
private: System::Void beQuietToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(beQuietToolStripMenuItem1);
}
private: System::Void chieftecToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(chieftecToolStripMenuItem1);
}
private: System::Void coolerMasterToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(coolerMasterToolStripMenuItem1);
}
private: System::Void deepCoolToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(deepCoolToolStripMenuItem1);
}
private: System::Void gigabyteToolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(gigabyteToolStripMenuItem5);
}
private: System::Void intelToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(intelToolStripMenuItem4);
}
private: System::Void mSIToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(mSIToolStripMenuItem2);
}
private: System::Void powercaseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(powercaseToolStripMenuItem);
}
private: System::Void sypermicroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(sypermicroToolStripMenuItem);
}
private: System::Void zalmanToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	check_producer(zalmanToolStripMenuItem1);
}
private: System::Void ïğèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ïğèToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	string price1, price2;
	int pr1, pr2;
	bool price_ch = false, an_check = false, bn_check = false;

	if (minprice->Text != "" || maxprice->Text != "") {
		if (minprice->Text != "") {
			price1 = msclr::interop::marshal_as<std::string>(minprice->Text);
			regex re("([0-9]{1}[0-9]{0,10})");
			if (!regex_search(price1, re)) {
				MessageBox::Show("Ââåäèòå öåëîå ÷èñëî â ìèíèìàëüíóş öåíó!", "Âíèìàíèå!");
				return;
			}
			pr1 = stoi(price1);
		}
		else pr1 = 0;
		if (maxprice->Text != "") {
			price2 = msclr::interop::marshal_as<std::string>(maxprice->Text);
			regex reg("([0-9]{1}[0-9]{0,10})");
			if (!regex_search(price2, reg)) {
				MessageBox::Show("Ââåäèòå öåëîå ÷èñëî â ìàêñèìàëüíóş öåíó!", "Âíèìàíèå!");
				return;
			}
			pr2 = stoi(price2);
		}
		else pr2 = 100000;
		if (pr2 < pr1) {
			MessageBox::Show("Ìèíèìàëüíàÿ öåíà áîëüøå ìàêñèìàëüíîé!", "Âíèìàíèå!");
			return;
		}
		price_ch = true;
	}

	dataGridView1->Rows->Clear();
	if (check_producer_c(âèäåîêàğòàToolStripMenuItem)) {
		if (check_producer_c(aMDToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, âèäåîêàğòàToolStripMenuItem->Text, aMDToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(aSUSToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, âèäåîêàğòàToolStripMenuItem->Text, aSUSToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(dellToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, âèäåîêàğòàToolStripMenuItem->Text, dellToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(mSIToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, âèäåîêàğòàToolStripMenuItem->Text, mSIToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(palitToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, âèäåîêàğòàToolStripMenuItem->Text, palitToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(powerColorToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, âèäåîêàğòàToolStripMenuItem->Text, powerColorToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(sapphireToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, âèäåîêàğòàToolStripMenuItem->Text, sapphireToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(sinotexToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, âèäåîêàğòàToolStripMenuItem->Text, sinotexToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(zOTACToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, âèäåîêàğòàToolStripMenuItem->Text, zOTACToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(nVIDIAToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, âèäåîêàğòàToolStripMenuItem->Text, nVIDIAToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (bn_check == false) search(pr1, pr2, prodname->Text, âèäåîêàğòàToolStripMenuItem->Text, "", price_ch);
		an_check = true;
		bn_check = false;
	}
	if (check_producer_c(ïğîöåññîğToolStripMenuItem)) {
		if (check_producer_c(aMDToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, ïğîöåññîğToolStripMenuItem->Text, aMDToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(intelToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, ïğîöåññîğToolStripMenuItem->Text, intelToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (bn_check == false) search(pr1, pr2, prodname->Text, ïğîöåññîğToolStripMenuItem->Text, "", price_ch);
		an_check = true;
		bn_check = false;
	}
	if (check_producer_c(îïåğàòèâíàÿÏàìÿòüToolStripMenuItem)) {
		if (check_producer_c(crusialToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->Text, crusialToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(aDataToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->Text, aDataToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(dellToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->Text, dellToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(gSkillToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->Text, gSkillToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(gigabyteToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->Text, gigabyteToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(aMDToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->Text, aMDToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(corsairToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->Text, corsairToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(hPToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->Text, hPToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(huaweiToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->Text, huaweiToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(hyperXToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->Text, hyperXToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(intelToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->Text, intelToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(kingstonToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->Text, kingstonToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(lenovoToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->Text, lenovoToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(sumsungToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->Text, sumsungToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(siliconPowerToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->Text, siliconPowerToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(smartBueToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->Text, smartBueToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (bn_check == false) search(pr1, pr2, prodname->Text, îïåğàòèâíàÿÏàìÿòüToolStripMenuItem->Text, "", price_ch);
		an_check = true;
		bn_check = false;
	}
	if (check_producer_c(ìàòåğèíñêàÿÏëàòàToolStripMenuItem)) {
		if (check_producer_c(aSUSToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, ìàòåğèíñêàÿÏëàòàToolStripMenuItem->Text, aSUSToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(intelToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, ìàòåğèíñêàÿÏëàòàToolStripMenuItem->Text, intelToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(mSIToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, ìàòåğèíñêàÿÏëàòàToolStripMenuItem->Text, mSIToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(gigabyteToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, ìàòåğèíñêàÿÏëàòàToolStripMenuItem->Text, gigabyteToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(aSRockToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, ìàòåğèíñêàÿÏëàòàToolStripMenuItem->Text, aSRockToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(supermicroToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, ìàòåğèíñêàÿÏëàòàToolStripMenuItem->Text, supermicroToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (bn_check == false) search(pr1, pr2, prodname->Text, ìàòåğèíñêàÿÏëàòàToolStripMenuItem->Text, "", price_ch);
		an_check = true;
		bn_check = false;
	}
	if (check_producer_c(áëîêÏèòàíèÿToolStripMenuItem)) {
		if (check_producer_c(chieToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, áëîêÏèòàíèÿToolStripMenuItem->Text, chieToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(aSUSToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, áëîêÏèòàíèÿToolStripMenuItem->Text, aSUSToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(beQuietToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, áëîêÏèòàíèÿToolStripMenuItem->Text, beQuietToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(chieftecToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, áëîêÏèòàíèÿToolStripMenuItem->Text, intelToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(coolerMasterToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, áëîêÏèòàíèÿToolStripMenuItem->Text, coolerMasterToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(corsairToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, áëîêÏèòàíèÿToolStripMenuItem->Text, corsairToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(deepCoolToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, áëîêÏèòàíèÿToolStripMenuItem->Text, deepCoolToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(gigabyteToolStripMenuItem3)) {
			search(pr1, pr2, prodname->Text, áëîêÏèòàíèÿToolStripMenuItem->Text, gigabyteToolStripMenuItem3->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(seasonicToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, áëîêÏèòàíèÿToolStripMenuItem->Text, seasonicToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(svenToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, áëîêÏèòàíèÿToolStripMenuItem->Text, svenToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(zalmanToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, áëîêÏèòàíèÿToolStripMenuItem->Text, zalmanToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (bn_check == false) search(pr1, pr2, prodname->Text, áëîêÏèòàíèÿToolStripMenuItem->Text, "", price_ch);
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
	if (check_producer_c(æåñòêèåÄèñêèToolStripMenuItem)) {
		if (check_producer_c(dellToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, æåñòêèåÄèñêèToolStripMenuItem->Text, dellToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(hPToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, æåñòêèåÄèñêèToolStripMenuItem->Text, hPToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(huaweiToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, æåñòêèåÄèñêèToolStripMenuItem->Text, huaweiToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(samsungToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, æåñòêèåÄèñêèToolStripMenuItem->Text, samsungToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(seagateToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, æåñòêèåÄèñêèToolStripMenuItem->Text, seagateToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(toshibaToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, æåñòêèåÄèñêèToolStripMenuItem->Text, toshibaToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer(wDToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, æåñòêèåÄèñêèToolStripMenuItem->Text, wDToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (bn_check == false) search(pr1, pr2, prodname->Text, æåñòêèåÄèñêèToolStripMenuItem->Text, "", price_ch);
		an_check = true;
		bn_check = false;
	}
	if (check_producer_c(ñèñòåìàÎõëàæäåíèÿToolStripMenuItem)) {
		if (check_producer_c(aeroCoolToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, ñèñòåìàÎõëàæäåíèÿToolStripMenuItem->Text, aeroCoolToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(aMDToolStripMenuItem4)) {
			search(pr1, pr2, prodname->Text, ñèñòåìàÎõëàæäåíèÿToolStripMenuItem->Text, aMDToolStripMenuItem4->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(aSUSToolStripMenuItem5)) {
			search(pr1, pr2, prodname->Text, ñèñòåìàÎõëàæäåíèÿToolStripMenuItem->Text, aSUSToolStripMenuItem5->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(beQuietToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, ñèñòåìàÎõëàæäåíèÿToolStripMenuItem->Text, beQuietToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(chieftecToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, ñèñòåìàÎõëàæäåíèÿToolStripMenuItem->Text, chieftecToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(coolerMasterToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, ñèñòåìàÎõëàæäåíèÿToolStripMenuItem->Text, coolerMasterToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(corsairToolStripMenuItem3)) {
			search(pr1, pr2, prodname->Text, ñèñòåìàÎõëàæäåíèÿToolStripMenuItem->Text, corsairToolStripMenuItem3->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(deepCoolToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, ñèñòåìàÎõëàæäåíèÿToolStripMenuItem->Text, deepCoolToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(gigabyteToolStripMenuItem6)) {
			search(pr1, pr2, prodname->Text, ñèñòåìàÎõëàæäåíèÿToolStripMenuItem->Text, gigabyteToolStripMenuItem6->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(intelToolStripMenuItem5)) {
			search(pr1, pr2, prodname->Text, ñèñòåìàÎõëàæäåíèÿToolStripMenuItem->Text, intelToolStripMenuItem5->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(pCCoolerToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, ñèñòåìàÎõëàæäåíèÿToolStripMenuItem->Text, pCCoolerToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(sapphireToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, ñèñòåìàÎõëàæäåíèÿToolStripMenuItem->Text, sapphireToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(sypermicroToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, ñèñòåìàÎõëàæäåíèÿToolStripMenuItem->Text, sypermicroToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(zalmanToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, ñèñòåìàÎõëàæäåíèÿToolStripMenuItem->Text, zalmanToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (bn_check == false) search(pr1, pr2, prodname->Text, ñèñòåìàÎõëàæäåíèÿToolStripMenuItem->Text, "", price_ch);
		an_check = true;
		bn_check = false;
	}
	if (check_producer_c(êîğïóñàToolStripMenuItem)) {
		if (check_producer_c(aeroCoolToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, êîğïóñàToolStripMenuItem->Text, aeroCoolToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(aSUSToolStripMenuItem4)) {
			search(pr1, pr2, prodname->Text, êîğïóñàToolStripMenuItem->Text, aSUSToolStripMenuItem4->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(beQuietToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, êîğïóñàToolStripMenuItem->Text, beQuietToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(chieftecToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, êîğïóñàToolStripMenuItem->Text, chieftecToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(coolerMasterToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, êîğïóñàToolStripMenuItem->Text, coolerMasterToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(deepCoolToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, êîğïóñàToolStripMenuItem->Text, deepCoolToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(gigabyteToolStripMenuItem5)) {
			search(pr1, pr2, prodname->Text, êîğïóñàToolStripMenuItem->Text, gigabyteToolStripMenuItem5->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(intelToolStripMenuItem4)) {
			search(pr1, pr2, prodname->Text, êîğïóñàToolStripMenuItem->Text, intelToolStripMenuItem4->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(mSIToolStripMenuItem2)) {
			search(pr1, pr2, prodname->Text, êîğïóñàToolStripMenuItem->Text, mSIToolStripMenuItem2->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(powercaseToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, êîğïóñàToolStripMenuItem->Text, powercaseToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(sypermicroToolStripMenuItem)) {
			search(pr1, pr2, prodname->Text, êîğïóñàToolStripMenuItem->Text, sypermicroToolStripMenuItem->Text, price_ch); bn_check = true;
		}
		if (check_producer_c(zalmanToolStripMenuItem1)) {
			search(pr1, pr2, prodname->Text, êîğïóñàToolStripMenuItem->Text, zalmanToolStripMenuItem1->Text, price_ch); bn_check = true;
		}
		if (bn_check == false) search(pr1, pr2, prodname->Text, êîğïóñàToolStripMenuItem->Text, "", price_ch);
		an_check = true;
		bn_check = false;
	}
	if (an_check == false) {
		search(pr1, pr2, prodname->Text, "", "", price_ch);
	}
}
};
}
 