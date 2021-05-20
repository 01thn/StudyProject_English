#pragma once

namespace Eng {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelMenu;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Panel^ panelTop;
	private: System::Windows::Forms::Panel^ panelWindow;
	private: System::Windows::Forms::Button^ button2;






	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->panelWindow = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panelMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->panelMenu->Controls->Add(this->button2);
			this->panelMenu->Controls->Add(this->button1);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(250, 699);
			this->panelMenu->TabIndex = 0;
			this->panelMenu->MouseHover += gcnew System::EventHandler(this, &MyForm::panel1_MouseHover);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(0, 100);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 100);
			this->button1->TabIndex = 0;
			this->button1->Text = L"   √рамматика";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &MyForm::button1_MouseEnter);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &MyForm::button1_MouseLeave);
			this->button1->MouseHover += gcnew System::EventHandler(this, &MyForm::button1_MouseHover);
			// 
			// panelTop
			// 
			this->panelTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->panelTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTop->Location = System::Drawing::Point(250, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(928, 100);
			this->panelTop->TabIndex = 2;
			// 
			// panelWindow
			// 
			this->panelWindow->BackColor = System::Drawing::Color::Transparent;
			this->panelWindow->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelWindow->Location = System::Drawing::Point(250, 100);
			this->panelWindow->Name = L"panelWindow";
			this->panelWindow->Size = System::Drawing::Size(928, 599);
			this->panelWindow->TabIndex = 3;
			this->panelWindow->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panelWindow_Paint);
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
			this->button2->TabIndex = 1;
			this->button2->Text = L"   √рамматика";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->MouseEnter += gcnew System::EventHandler(this, &MyForm::button2_MouseEnter);
			this->button2->MouseLeave += gcnew System::EventHandler(this, &MyForm::button2_MouseLeave);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1178, 699);
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
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void button1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	button1->BackColor = Color::FromArgb(104, 181, 211);
	button1->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12.5f, FontStyle::Regular);
}
private: System::Void button1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button1->BackColor = Color::FromArgb(50, 52, 77);
	button1->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12, FontStyle::Regular);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	button2->Top += 50;
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
};
}
