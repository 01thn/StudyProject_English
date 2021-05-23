#pragma once

namespace Eng {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Downlands
	/// </summary>
	public ref class Downlands : public System::Windows::Forms::Form
	{
	public:
		Downlands(void)
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
		~Downlands()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Downlands::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Gainsboro;
			this->label2->Location = System::Drawing::Point(393, 237);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Continue";
			this->label2->UseMnemonic = false;
			this->label2->Click += gcnew System::EventHandler(this, &Downlands::label2_Click);
			this->label2->MouseEnter += gcnew System::EventHandler(this, &Downlands::label2_MouseEnter);
			this->label2->MouseLeave += gcnew System::EventHandler(this, &Downlands::label2_MouseLeave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Gainsboro;
			this->label1->Location = System::Drawing::Point(90, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(301, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Welcome to the English simulator";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Downlands::timer1_Tick);
			// 
			// Downlands
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->ClientSize = System::Drawing::Size(480, 270);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Downlands";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Downlands";
			this->Load += gcnew System::EventHandler(this, &Downlands::Downlands_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int counter = 0;
		int len = 0;
		String^ text;
		Void Tof();
	private: System::Void Downlands_Load(System::Object^ sender, System::EventArgs^ e) {
		label2->Hide();
		text = label1->Text;
		len = text->Length;
		label1->Text = "";
		timer1->Start();
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = text->Substring(0, counter);
		++counter;
		if (counter > len)
		{
			label2->Show();
			timer1->Stop();
		}
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	Tof();

}
private: System::Void label2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label2->ForeColor = Color::Black;
}
private: System::Void label2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label2->ForeColor = Color::White;
}
};
}
