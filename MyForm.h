﻿#pragma once
#include"Downlands.h"
#include "Home.h"
#include "MyForm1.h"
#include"Song.h"
#include "MyForm2.h"

namespace Eng {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}
		MyForm(Downlands^ parent) {
			InitializeComponent();
			parentForm = parent;
		}
	private: System::Windows::Forms::Button^ buttonClosePanel;
	private: System::Windows::Forms::Label^ labelStatus;
	public:
	private: Downlands^ parentForm;
	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Button^ buttonGrammar;
	protected:

	protected:


	private: System::Windows::Forms::Panel^ panelTop;
	private: System::Windows::Forms::Panel^ panelWindow;
	private: System::Windows::Forms::Button^ buttonVocab;

	private: System::Windows::Forms::Button^ buttonPastSimple;
	private: System::Windows::Forms::Button^ buttonFutSimple;
	private: System::Windows::Forms::Button^ buttonPrSimple;
	private: System::Windows::Forms::Button^ buttonTest;
	private: System::Windows::Forms::Button^ buttonRatio;
	private: System::Windows::Forms::Button^ buttonSong;









	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->buttonTest = (gcnew System::Windows::Forms::Button());
			this->buttonGrammar = (gcnew System::Windows::Forms::Button());
			this->buttonRatio = (gcnew System::Windows::Forms::Button());
			this->buttonVocab = (gcnew System::Windows::Forms::Button());
			this->buttonSong = (gcnew System::Windows::Forms::Button());
			this->buttonPastSimple = (gcnew System::Windows::Forms::Button());
			this->buttonPrSimple = (gcnew System::Windows::Forms::Button());
			this->buttonFutSimple = (gcnew System::Windows::Forms::Button());
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->labelStatus = (gcnew System::Windows::Forms::Label());
			this->buttonClosePanel = (gcnew System::Windows::Forms::Button());
			this->panelWindow = (gcnew System::Windows::Forms::Panel());
			this->panelMenu->SuspendLayout();
			this->panelTop->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->panelMenu->Controls->Add(this->buttonTest);
			this->panelMenu->Controls->Add(this->buttonGrammar);
			this->panelMenu->Controls->Add(this->buttonRatio);
			this->panelMenu->Controls->Add(this->buttonVocab);
			this->panelMenu->Controls->Add(this->buttonSong);
			this->panelMenu->Controls->Add(this->buttonPastSimple);
			this->panelMenu->Controls->Add(this->buttonPrSimple);
			this->panelMenu->Controls->Add(this->buttonFutSimple);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(250, 949);
			this->panelMenu->TabIndex = 0;
			this->panelMenu->MouseHover += gcnew System::EventHandler(this, &MyForm::panel1_MouseHover);
			// 
			// buttonTest
			// 
			this->buttonTest->FlatAppearance->BorderSize = 0;
			this->buttonTest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonTest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonTest->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonTest->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonTest.Image")));
			this->buttonTest->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonTest->Location = System::Drawing::Point(0, 524);
			this->buttonTest->Name = L"buttonTest";
			this->buttonTest->Size = System::Drawing::Size(250, 100);
			this->buttonTest->TabIndex = 8;
			this->buttonTest->Text = L"Тест";
			this->buttonTest->UseVisualStyleBackColor = false;
			this->buttonTest->MouseEnter += gcnew System::EventHandler(this, &MyForm::buttonTest_MouseEnter);
			this->buttonTest->MouseLeave += gcnew System::EventHandler(this, &MyForm::buttonTest_MouseLeave);
			// 
			// buttonGrammar
			// 
			this->buttonGrammar->FlatAppearance->BorderSize = 0;
			this->buttonGrammar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonGrammar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonGrammar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonGrammar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonGrammar.Image")));
			this->buttonGrammar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonGrammar->Location = System::Drawing::Point(0, 100);
			this->buttonGrammar->Name = L"buttonGrammar";
			this->buttonGrammar->Size = System::Drawing::Size(250, 100);
			this->buttonGrammar->TabIndex = 0;
			this->buttonGrammar->Text = L"  Грамматика";
			this->buttonGrammar->UseVisualStyleBackColor = false;
			this->buttonGrammar->Click += gcnew System::EventHandler(this, &MyForm::buttonGrammar_Click);
			this->buttonGrammar->MouseEnter += gcnew System::EventHandler(this, &MyForm::buttonGrammar_MouseEnter);
			this->buttonGrammar->MouseLeave += gcnew System::EventHandler(this, &MyForm::buttonGrammar_MouseLeave);
			this->buttonGrammar->MouseHover += gcnew System::EventHandler(this, &MyForm::button1_MouseHover);
			// 
			// buttonRatio
			// 
			this->buttonRatio->FlatAppearance->BorderSize = 0;
			this->buttonRatio->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonRatio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRatio->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonRatio->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonRatio.Image")));
			this->buttonRatio->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonRatio->Location = System::Drawing::Point(0, 418);
			this->buttonRatio->Name = L"buttonRatio";
			this->buttonRatio->Size = System::Drawing::Size(250, 100);
			this->buttonRatio->TabIndex = 7;
			this->buttonRatio->Text = L"Выбор ";
			this->buttonRatio->UseVisualStyleBackColor = false;
			this->buttonRatio->MouseEnter += gcnew System::EventHandler(this, &MyForm::buttonRatio_MouseEnter);
			this->buttonRatio->MouseLeave += gcnew System::EventHandler(this, &MyForm::buttonRatio_MouseLeave);
			// 
			// buttonVocab
			// 
			this->buttonVocab->FlatAppearance->BorderSize = 0;
			this->buttonVocab->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonVocab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonVocab->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonVocab->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonVocab.Image")));
			this->buttonVocab->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonVocab->Location = System::Drawing::Point(0, 206);
			this->buttonVocab->Name = L"buttonVocab";
			this->buttonVocab->Size = System::Drawing::Size(250, 100);
			this->buttonVocab->TabIndex = 2;
			this->buttonVocab->Text = L"Словарь";
			this->buttonVocab->UseVisualStyleBackColor = false;
			this->buttonVocab->Click += gcnew System::EventHandler(this, &MyForm::buttonVocab_Click);
			this->buttonVocab->MouseEnter += gcnew System::EventHandler(this, &MyForm::buttonVocab_MouseEnter);
			this->buttonVocab->MouseLeave += gcnew System::EventHandler(this, &MyForm::buttonVocab_MouseLeave);
			// 
			// buttonSong
			// 
			this->buttonSong->FlatAppearance->BorderSize = 0;
			this->buttonSong->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSong->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSong->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonSong->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSong.Image")));
			this->buttonSong->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonSong->Location = System::Drawing::Point(0, 312);
			this->buttonSong->Name = L"buttonSong";
			this->buttonSong->Size = System::Drawing::Size(250, 100);
			this->buttonSong->TabIndex = 6;
			this->buttonSong->Text = L"Музыка";
			this->buttonSong->UseVisualStyleBackColor = false;
			this->buttonSong->Click += gcnew System::EventHandler(this, &MyForm::buttonSong_Click);
			this->buttonSong->MouseEnter += gcnew System::EventHandler(this, &MyForm::buttonSong_MouseEnter);
			this->buttonSong->MouseLeave += gcnew System::EventHandler(this, &MyForm::buttonSong_MouseLeave);
			// 
			// buttonPastSimple
			// 
			this->buttonPastSimple->FlatAppearance->BorderSize = 0;
			this->buttonPastSimple->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPastSimple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPastSimple->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonPastSimple->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonPastSimple.Image")));
			this->buttonPastSimple->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonPastSimple->Location = System::Drawing::Point(23, 206);
			this->buttonPastSimple->Name = L"buttonPastSimple";
			this->buttonPastSimple->Size = System::Drawing::Size(227, 70);
			this->buttonPastSimple->TabIndex = 3;
			this->buttonPastSimple->Text = L"Past Simpl";
			this->buttonPastSimple->UseVisualStyleBackColor = false;
			this->buttonPastSimple->Visible = false;
			this->buttonPastSimple->Click += gcnew System::EventHandler(this, &MyForm::buttonPastSimple_Click);
			this->buttonPastSimple->MouseEnter += gcnew System::EventHandler(this, &MyForm::buttonPastSimple_MouseEnter);
			this->buttonPastSimple->MouseLeave += gcnew System::EventHandler(this, &MyForm::buttonPastSimple_MouseLeave);
			// 
			// buttonPrSimple
			// 
			this->buttonPrSimple->FlatAppearance->BorderSize = 0;
			this->buttonPrSimple->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPrSimple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPrSimple->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonPrSimple->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonPrSimple.Image")));
			this->buttonPrSimple->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonPrSimple->Location = System::Drawing::Point(23, 282);
			this->buttonPrSimple->Name = L"buttonPrSimple";
			this->buttonPrSimple->Size = System::Drawing::Size(227, 70);
			this->buttonPrSimple->TabIndex = 4;
			this->buttonPrSimple->Text = L"Present Simpl";
			this->buttonPrSimple->UseVisualStyleBackColor = false;
			this->buttonPrSimple->Visible = false;
			this->buttonPrSimple->Click += gcnew System::EventHandler(this, &MyForm::buttonPrSimple_Click);
			this->buttonPrSimple->MouseEnter += gcnew System::EventHandler(this, &MyForm::buttonPrSimple_MouseEnter);
			this->buttonPrSimple->MouseLeave += gcnew System::EventHandler(this, &MyForm::buttonPrSimple_MouseLeave);
			// 
			// buttonFutSimple
			// 
			this->buttonFutSimple->FlatAppearance->BorderSize = 0;
			this->buttonFutSimple->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonFutSimple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonFutSimple->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonFutSimple->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonFutSimple.Image")));
			this->buttonFutSimple->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonFutSimple->Location = System::Drawing::Point(23, 358);
			this->buttonFutSimple->Name = L"buttonFutSimple";
			this->buttonFutSimple->Size = System::Drawing::Size(227, 70);
			this->buttonFutSimple->TabIndex = 5;
			this->buttonFutSimple->Text = L"Future Simple";
			this->buttonFutSimple->UseVisualStyleBackColor = false;
			this->buttonFutSimple->Visible = false;
			this->buttonFutSimple->Click += gcnew System::EventHandler(this, &MyForm::buttonFutSimple_Click);
			this->buttonFutSimple->MouseEnter += gcnew System::EventHandler(this, &MyForm::buttonFutSimple_MouseEnter);
			this->buttonFutSimple->MouseLeave += gcnew System::EventHandler(this, &MyForm::buttonFutSimple_MouseLeave);
			// 
			// panelTop
			// 
			this->panelTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->panelTop->Controls->Add(this->labelStatus);
			this->panelTop->Controls->Add(this->buttonClosePanel);
			this->panelTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTop->Location = System::Drawing::Point(250, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(1178, 100);
			this->panelTop->TabIndex = 2;
			// 
			// labelStatus
			// 
			this->labelStatus->AutoSize = true;
			this->labelStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelStatus->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->labelStatus->Location = System::Drawing::Point(357, 37);
			this->labelStatus->Name = L"labelStatus";
			this->labelStatus->Size = System::Drawing::Size(288, 29);
			this->labelStatus->TabIndex = 1;
			this->labelStatus->Text = L"ДОБРО ПОЖАЛОВАТЬ";
			this->labelStatus->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonClosePanel
			// 
			this->buttonClosePanel->Location = System::Drawing::Point(21, 12);
			this->buttonClosePanel->Name = L"buttonClosePanel";
			this->buttonClosePanel->Size = System::Drawing::Size(74, 65);
			this->buttonClosePanel->TabIndex = 0;
			this->buttonClosePanel->Text = L"buttonClosePanel";
			this->buttonClosePanel->UseVisualStyleBackColor = true;
			this->buttonClosePanel->Click += gcnew System::EventHandler(this, &MyForm::buttonClosePanel_Click);
			// 
			// panelWindow
			// 
			this->panelWindow->BackColor = System::Drawing::Color::Transparent;
			this->panelWindow->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelWindow->Location = System::Drawing::Point(250, 100);
			this->panelWindow->Name = L"panelWindow";
			this->panelWindow->Size = System::Drawing::Size(1178, 849);
			this->panelWindow->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1428, 949);
			this->Controls->Add(this->panelWindow);
			this->Controls->Add(this->panelTop);
			this->Controls->Add(this->panelMenu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panelMenu->ResumeLayout(false);
			this->panelTop->ResumeLayout(false);
			this->panelTop->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		bool flagTap;
		Void HomeOpen(System::Object^ sender, System::EventArgs^ e) {
			Home^ H = gcnew Home();
			H->Owner = this;
			H->TopLevel = false;
			H->Dock = DockStyle::Fill;
			this->panelWindow->Controls->Add(H);
			this->panelWindow->Tag = H;
			H->BringToFront();
			H->Show();
		}
		Void SongOpen(System::Object^ sender, System::EventArgs^ e) {
			Song^ S = gcnew Song();
			S->Owner = this;
			S->TopLevel = false;
			S->Dock = DockStyle::Fill;
			this->panelWindow->Controls->Add(S);
			this->panelWindow->Tag = S;
			S->BringToFront();
			S->Show();
		}
	
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		flagTap = false;
		HomeOpen(sender, e);
		labelStatus->Text = "ДОМАШНЯЯ СТРАНИЦА";
		buttonClosePanel->Visible = false;
	
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	//button1->BackColor = Color::FromArgb(104,181,211);
}
private: System::Void buttonGrammar_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	buttonGrammar->BackColor = Color::FromArgb(104, 181, 211);
	buttonGrammar->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12.5f, FontStyle::Regular);
}
private: System::Void buttonGrammar_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	buttonGrammar->BackColor = Color::FromArgb(50, 52, 77);
	buttonGrammar->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, FontStyle::Regular);
}
private: System::Void buttonGrammar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!flagTap) { buttonVocab->Top += 180; buttonSong->Top += 180; buttonRatio->Top += 180; buttonTest->Top += 180; flagTap = true; buttonPastSimple->Visible = true; buttonFutSimple->Visible = true; buttonPrSimple->Visible = true; }
	else{ buttonVocab->Top -= 180; buttonSong->Top -= 180; buttonRatio->Top -= 180; buttonTest->Top -= 180; flagTap = false; buttonPastSimple->Visible = false; buttonFutSimple->Visible = false; buttonPrSimple->Visible = false;	}
}

private: System::Void buttonVocab_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	buttonVocab->BackColor = Color::FromArgb(104, 181, 211);
	buttonVocab->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12.5f, FontStyle::Regular);
}
private: System::Void buttonVocab_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	buttonVocab->BackColor = Color::FromArgb(50, 52, 77);
	buttonVocab->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, FontStyle::Regular);
}
private: System::Void buttonVocab_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonSong_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	buttonSong->BackColor = Color::FromArgb(50, 52, 77);
	buttonSong->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, FontStyle::Regular);
}
private: System::Void buttonSong_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	buttonSong->BackColor = Color::FromArgb(104, 181, 211);
	buttonSong->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12.5f, FontStyle::Regular);
}
private: System::Void buttonRatio_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	buttonRatio->BackColor = Color::FromArgb(104, 181, 211);
	buttonRatio->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12.5f, FontStyle::Regular);
}
private: System::Void buttonRatio_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	buttonRatio->BackColor = Color::FromArgb(50, 52, 77);
	buttonRatio->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, FontStyle::Regular);
}
private: System::Void buttonTest_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	buttonTest->BackColor = Color::FromArgb(50, 52, 77);
	buttonTest->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, FontStyle::Regular);
}
private: System::Void buttonTest_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	buttonTest->BackColor = Color::FromArgb(104, 181, 211);
	buttonTest->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12.5f, FontStyle::Regular);
}
private: System::Void buttonPastSimple_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	buttonPastSimple->BackColor = Color::FromArgb(50, 52, 77);
	buttonPastSimple->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, FontStyle::Regular);
}
private: System::Void buttonPastSimple_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	buttonPastSimple->BackColor = Color::FromArgb(104, 181, 211);
	buttonPastSimple->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12.5f, FontStyle::Regular);
}
private: System::Void buttonPrSimple_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	buttonPrSimple->BackColor = Color::FromArgb(104, 181, 211);
	buttonPrSimple->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12.5f, FontStyle::Regular);
}
private: System::Void buttonPrSimple_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	buttonPrSimple->BackColor = Color::FromArgb(50, 52, 77);
	buttonPrSimple->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, FontStyle::Regular);
}
private: System::Void buttonFutSimple_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	buttonFutSimple->BackColor = Color::FromArgb(104, 181, 211);
	buttonFutSimple->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12.5f, FontStyle::Regular);
}
private: System::Void buttonFutSimple_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	buttonFutSimple->BackColor = Color::FromArgb(50, 52, 77);
	buttonFutSimple->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, FontStyle::Regular);
}
private: System::Void buttonPastSimple_Click(System::Object^ sender, System::EventArgs^ e) {
	//buttonPastSimple->BackColor = Color::FromArgb(104, 181, 211);
	//buttonPastSimple->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12.5f, FontStyle::Regular);
	MyForm1^ J = gcnew MyForm1();
	J->Owner = this;
	J->TopLevel = false;
	J->Dock = DockStyle::Fill;
	this->panelWindow->Controls->Add(J);
	this->panelWindow->Tag = J;
	J->BringToFront();
	J->Show();
	labelStatus->Text = "PAST SIMPLE";
	buttonClosePanel->Visible = true;
}
private: System::Void buttonClosePanel_Click(System::Object^ sender, System::EventArgs^ e) {
	HomeOpen(sender, e);
	labelStatus->Text = "ДОМАШНЯЯ СТРАНИЦА";
	buttonClosePanel->Visible = false;
}

	private: System::Void buttonSong_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonSong->BackColor = Color::FromArgb(104, 181, 211);
		buttonSong->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12.5f, FontStyle::Regular);
		SongOpen(sender, e);
		labelStatus->Text = "ПЕРЕВЕДИ ПЕСНЮ";
		if (flagTap) {
			buttonVocab->Top -= 180; buttonSong->Top -= 180; buttonRatio->Top -= 180; buttonTest->Top -= 180;  buttonPastSimple->Visible = false; buttonFutSimple->Visible = false; buttonPrSimple->Visible = false; flagTap = false;
		}
		buttonClosePanel->Visible = true;
	}
	

private: System::Void buttonPrSimple_Click(System::Object^ sender, System::EventArgs^ e) {
	//buttonPrSimple->BackColor = Color::FromArgb(104, 181, 211);
	//buttonPrSimple->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12.5f, FontStyle::Regular);
	MyForm2^ K = gcnew MyForm2();
	K->Owner = this;
	K->TopLevel = false;
	K->Dock = DockStyle::Fill;
	this->panelWindow->Controls->Add(K);
	this->panelWindow->Tag = K;
	K->BringToFront();
	K->Show();
	labelStatus->Text = "PRESENT SIMPLE";
	buttonClosePanel->Visible = true;
}
private: System::Void buttonFutSimple_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
