#pragma once

namespace Eng {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ buttonPastSimple;
	private: System::Windows::Forms::Button^ buttonFutSimple;
	private: System::Windows::Forms::Button^ buttonPrSimple;
	private: System::Windows::Forms::Button^ buttonTest;
	private: System::Windows::Forms::Button^ buttonRatio;
	private: System::Windows::Forms::Button^ buttonSong;









	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->buttonTest = (gcnew System::Windows::Forms::Button());
			this->buttonGrammar = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->buttonSong = (gcnew System::Windows::Forms::Button());
			this->buttonRatio = (gcnew System::Windows::Forms::Button());
			this->buttonPastSimple = (gcnew System::Windows::Forms::Button());
			this->buttonPrSimple = (gcnew System::Windows::Forms::Button());
			this->buttonFutSimple = (gcnew System::Windows::Forms::Button());
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->panelWindow = (gcnew System::Windows::Forms::Panel());
			this->panelMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->panelMenu->Controls->Add(this->buttonTest);
			this->panelMenu->Controls->Add(this->buttonGrammar);
			this->panelMenu->Controls->Add(this->button2);
			this->panelMenu->Controls->Add(this->buttonSong);
			this->panelMenu->Controls->Add(this->buttonRatio);
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
			this->buttonTest->Text = L"   Тест";
			this->buttonTest->UseVisualStyleBackColor = false;
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
			this->buttonGrammar->Text = L"   Грамматика";
			this->buttonGrammar->UseVisualStyleBackColor = false;
			this->buttonGrammar->Click += gcnew System::EventHandler(this, &MyForm::buttonGrammar_Click);
			this->buttonGrammar->MouseEnter += gcnew System::EventHandler(this, &MyForm::buttonGrammar_MouseEnter);
			this->buttonGrammar->MouseLeave += gcnew System::EventHandler(this, &MyForm::buttonGrammar_MouseLeave);
			this->buttonGrammar->MouseHover += gcnew System::EventHandler(this, &MyForm::button1_MouseHover);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(0, 206);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(250, 100);
			this->button2->TabIndex = 2;
			this->button2->Text = L"   Словарь";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			this->button2->MouseEnter += gcnew System::EventHandler(this, &MyForm::button2_MouseEnter);
			this->button2->MouseLeave += gcnew System::EventHandler(this, &MyForm::button2_MouseLeave);
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
			this->buttonSong->Text = L"   Песня";
			this->buttonSong->UseVisualStyleBackColor = false;
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
			this->buttonRatio->Text = L"   Соотн";
			this->buttonRatio->UseVisualStyleBackColor = false;
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
			this->buttonPastSimple->Location = System::Drawing::Point(0, 206);
			this->buttonPastSimple->Name = L"buttonPastSimple";
			this->buttonPastSimple->Size = System::Drawing::Size(250, 70);
			this->buttonPastSimple->TabIndex = 3;
			this->buttonPastSimple->Text = L"       Прошедшее      простое";
			this->buttonPastSimple->UseVisualStyleBackColor = false;
			this->buttonPastSimple->Visible = false;
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
			this->buttonPrSimple->Location = System::Drawing::Point(0, 282);
			this->buttonPrSimple->Name = L"buttonPrSimple";
			this->buttonPrSimple->Size = System::Drawing::Size(250, 70);
			this->buttonPrSimple->TabIndex = 4;
			this->buttonPrSimple->Text = L"       Настоящее       простое";
			this->buttonPrSimple->UseVisualStyleBackColor = false;
			this->buttonPrSimple->Visible = false;
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
			this->buttonFutSimple->Location = System::Drawing::Point(0, 358);
			this->buttonFutSimple->Name = L"buttonFutSimple";
			this->buttonFutSimple->Size = System::Drawing::Size(250, 70);
			this->buttonFutSimple->TabIndex = 5;
			this->buttonFutSimple->Text = L"         Будущее простое";
			this->buttonFutSimple->UseVisualStyleBackColor = false;
			this->buttonFutSimple->Visible = false;
			// 
			// panelTop
			// 
			this->panelTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->panelTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTop->Location = System::Drawing::Point(250, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(1178, 100);
			this->panelTop->TabIndex = 2;
			// 
			// panelWindow
			// 
			this->panelWindow->BackColor = System::Drawing::Color::Transparent;
			this->panelWindow->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelWindow->Location = System::Drawing::Point(250, 100);
			this->panelWindow->Name = L"panelWindow";
			this->panelWindow->Size = System::Drawing::Size(1178, 849);
			this->panelWindow->TabIndex = 3;
			this->panelWindow->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panelWindow_Paint);
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
			this->ResumeLayout(false);

		}
#pragma endregion
		bool flagTap;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		flagTap = false;
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
	if (!flagTap) { button2->Top += 180; buttonSong->Top += 180; buttonRatio->Top += 180; buttonTest->Top += 180; flagTap = true; buttonPastSimple->Visible = true; buttonFutSimple->Visible = true; buttonPrSimple->Visible = true; }
	else{ button2->Top -= 180; buttonSong->Top -= 180; buttonRatio->Top -= 180; buttonTest->Top -= 180; flagTap = false; buttonPastSimple->Visible = false; buttonFutSimple->Visible = false; buttonPrSimple->Visible = false;	}
}
private: System::Void panelWindow_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	button2->BackColor = Color::FromArgb(104, 181, 211);
	button2->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12.5f, FontStyle::Regular);
}
private: System::Void button2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button2->BackColor = Color::FromArgb(50, 52, 77);
	button2->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, FontStyle::Regular);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
