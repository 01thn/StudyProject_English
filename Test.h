#pragma once
#include<time.h>
#include<algorithm>
namespace Eng {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	/// <summary>
	/// Сводка для Test
	/// </summary>
	public ref class Test : public System::Windows::Forms::Form
	{
	public:
		Test(void)
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
		~Test()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lb1;
	private: System::Windows::Forms::Label^ lb2;
	private: System::Windows::Forms::Label^ lb3;
	private: System::Windows::Forms::Label^ lb4;
	private: System::Windows::Forms::Label^ lb5;
	private: System::Windows::Forms::Label^ lb10;
	protected:

	protected:





	private: System::Windows::Forms::Label^ lb9;

	private: System::Windows::Forms::Label^ lb8;

	private: System::Windows::Forms::Label^ lb7;

	private: System::Windows::Forms::Label^ lb6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonSong;












	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lb1 = (gcnew System::Windows::Forms::Label());
			this->lb2 = (gcnew System::Windows::Forms::Label());
			this->lb3 = (gcnew System::Windows::Forms::Label());
			this->lb4 = (gcnew System::Windows::Forms::Label());
			this->lb5 = (gcnew System::Windows::Forms::Label());
			this->lb10 = (gcnew System::Windows::Forms::Label());
			this->lb9 = (gcnew System::Windows::Forms::Label());
			this->lb8 = (gcnew System::Windows::Forms::Label());
			this->lb7 = (gcnew System::Windows::Forms::Label());
			this->lb6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonSong = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lb1
			// 
			this->lb1->AutoSize = true;
			this->lb1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb1->ForeColor = System::Drawing::Color::Gainsboro;
			this->lb1->Location = System::Drawing::Point(394, 25);
			this->lb1->Name = L"lb1";
			this->lb1->Size = System::Drawing::Size(32, 32);
			this->lb1->TabIndex = 5;
			this->lb1->Text = L"1";
			this->lb1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lb2
			// 
			this->lb2->AutoSize = true;
			this->lb2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb2->ForeColor = System::Drawing::Color::Gainsboro;
			this->lb2->Location = System::Drawing::Point(432, 25);
			this->lb2->Name = L"lb2";
			this->lb2->Size = System::Drawing::Size(32, 32);
			this->lb2->TabIndex = 6;
			this->lb2->Text = L"2";
			this->lb2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lb3
			// 
			this->lb3->AutoSize = true;
			this->lb3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb3->ForeColor = System::Drawing::Color::Gainsboro;
			this->lb3->Location = System::Drawing::Point(470, 25);
			this->lb3->Name = L"lb3";
			this->lb3->Size = System::Drawing::Size(32, 32);
			this->lb3->TabIndex = 7;
			this->lb3->Text = L"3";
			this->lb3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lb3->Click += gcnew System::EventHandler(this, &Test::lb3_Click);
			// 
			// lb4
			// 
			this->lb4->AutoSize = true;
			this->lb4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb4->ForeColor = System::Drawing::Color::Gainsboro;
			this->lb4->Location = System::Drawing::Point(508, 25);
			this->lb4->Name = L"lb4";
			this->lb4->Size = System::Drawing::Size(32, 32);
			this->lb4->TabIndex = 8;
			this->lb4->Text = L"4";
			this->lb4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lb5
			// 
			this->lb5->AutoSize = true;
			this->lb5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb5->ForeColor = System::Drawing::Color::Gainsboro;
			this->lb5->Location = System::Drawing::Point(546, 25);
			this->lb5->Name = L"lb5";
			this->lb5->Size = System::Drawing::Size(32, 32);
			this->lb5->TabIndex = 9;
			this->lb5->Text = L"5";
			this->lb5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lb5->Click += gcnew System::EventHandler(this, &Test::lb5_Click);
			// 
			// lb10
			// 
			this->lb10->AutoSize = true;
			this->lb10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb10->ForeColor = System::Drawing::Color::Gainsboro;
			this->lb10->Location = System::Drawing::Point(736, 25);
			this->lb10->Name = L"lb10";
			this->lb10->Size = System::Drawing::Size(49, 32);
			this->lb10->TabIndex = 14;
			this->lb10->Text = L"10";
			this->lb10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lb9
			// 
			this->lb9->AutoSize = true;
			this->lb9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb9->ForeColor = System::Drawing::Color::Gainsboro;
			this->lb9->Location = System::Drawing::Point(698, 25);
			this->lb9->Name = L"lb9";
			this->lb9->Size = System::Drawing::Size(32, 32);
			this->lb9->TabIndex = 13;
			this->lb9->Text = L"9";
			this->lb9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lb9->Click += gcnew System::EventHandler(this, &Test::label6_Click);
			// 
			// lb8
			// 
			this->lb8->AutoSize = true;
			this->lb8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb8->ForeColor = System::Drawing::Color::Gainsboro;
			this->lb8->Location = System::Drawing::Point(660, 25);
			this->lb8->Name = L"lb8";
			this->lb8->Size = System::Drawing::Size(32, 32);
			this->lb8->TabIndex = 12;
			this->lb8->Text = L"8";
			this->lb8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lb7
			// 
			this->lb7->AutoSize = true;
			this->lb7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb7->ForeColor = System::Drawing::Color::Gainsboro;
			this->lb7->Location = System::Drawing::Point(622, 25);
			this->lb7->Name = L"lb7";
			this->lb7->Size = System::Drawing::Size(32, 32);
			this->lb7->TabIndex = 11;
			this->lb7->Text = L"7";
			this->lb7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lb6
			// 
			this->lb6->AutoSize = true;
			this->lb6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb6->ForeColor = System::Drawing::Color::Gainsboro;
			this->lb6->Location = System::Drawing::Point(584, 25);
			this->lb6->Name = L"lb6";
			this->lb6->Size = System::Drawing::Size(32, 32);
			this->lb6->TabIndex = 10;
			this->lb6->Text = L"6";
			this->lb6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox4->Location = System::Drawing::Point(704, 478);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox4->Size = System::Drawing::Size(390, 38);
			this->textBox4->TabIndex = 48;
			this->textBox4->TabStop = false;
			this->textBox4->Click += gcnew System::EventHandler(this, &Test::textBox4_Click);
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Test::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox3->Location = System::Drawing::Point(704, 390);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(390, 38);
			this->textBox3->TabIndex = 47;
			this->textBox3->TabStop = false;
			this->textBox3->Click += gcnew System::EventHandler(this, &Test::textBox3_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox2->Location = System::Drawing::Point(704, 302);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(390, 38);
			this->textBox2->TabIndex = 46;
			this->textBox2->TabStop = false;
			this->textBox2->Click += gcnew System::EventHandler(this, &Test::textBox2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox1->Location = System::Drawing::Point(704, 214);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(390, 38);
			this->textBox1->TabIndex = 45;
			this->textBox1->TabStop = false;
			this->textBox1->Click += gcnew System::EventHandler(this, &Test::textBox1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(45, 234);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(390, 230);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 49;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(39, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1049, 94);
			this->label1->TabIndex = 50;
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// buttonSong
			// 
			this->buttonSong->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->buttonSong->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonSong->FlatAppearance->BorderSize = 0;
			this->buttonSong->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonSong->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSong->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonSong->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonSong->Location = System::Drawing::Point(438, 629);
			this->buttonSong->Name = L"buttonSong";
			this->buttonSong->Size = System::Drawing::Size(250, 100);
			this->buttonSong->TabIndex = 51;
			this->buttonSong->Text = L"Отправить";
			this->buttonSong->UseVisualStyleBackColor = false;
			this->buttonSong->Click += gcnew System::EventHandler(this, &Test::buttonSong_Click);
			// 
			// Test
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1178, 849);
			this->Controls->Add(this->buttonSong);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lb10);
			this->Controls->Add(this->lb9);
			this->Controls->Add(this->lb8);
			this->Controls->Add(this->lb7);
			this->Controls->Add(this->lb6);
			this->Controls->Add(this->lb5);
			this->Controls->Add(this->lb4);
			this->Controls->Add(this->lb3);
			this->Controls->Add(this->lb2);
			this->Controls->Add(this->lb1);
			this->ForeColor = System::Drawing::Color::Gainsboro;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Test";
			this->Text = L"Test";
			this->Load += gcnew System::EventHandler(this, &Test::Test_Load_1);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int* tab = new int[10];
		void RandomArr() {
			srand(time(0));
			for (int i = 0; i < 11; i++) {
				tab[i] = i;
			}
			
			std::random_shuffle(&tab[0], &tab[11]);
		}

		int k;
		void QuestionChachge(int id) {
			srand(time(0));
			k = 1 + rand() % 4;

			String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database1.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
			dbConnection->Open();
			String^ query = "SELECT * FROM [Test] WHERE Код = " + id + " ";
			OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
			OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
			if (dbReader->HasRows == false) {

			}
			else {
				while (dbReader->Read()) {
					label1->Text = Convert::ToString(dbReader["Qestion"]);
					pictureBox1->Image = Image::FromFile(Convert::ToString(dbReader["PictureWay"]));
					switch (k)
					{
					case 1:
						
						textBox1->Text = Convert::ToString(dbReader["TrueAnswer"]);
						textBox2->Text = Convert::ToString(dbReader["Answer1"]);
						textBox3->Text = Convert::ToString(dbReader["Answer2"]);
						textBox4->Text = Convert::ToString(dbReader["Answer3"]);
						break;
					case 2:
						textBox1->Text = Convert::ToString(dbReader["Answer1"]);
						textBox2->Text = Convert::ToString(dbReader["TrueAnswer"]);
						textBox3->Text = Convert::ToString(dbReader["Answer3"]);
						textBox4->Text = Convert::ToString(dbReader["Answer2"]);
						break;
					case 3:
						textBox1->Text = Convert::ToString(dbReader["Answer1"]);
						textBox2->Text = Convert::ToString(dbReader["Answer2"]);
						textBox3->Text = Convert::ToString(dbReader["TrueAnswer"]);
						textBox4->Text = Convert::ToString(dbReader["Answer3"]);
						break;
					case 4:
						textBox1->Text = Convert::ToString(dbReader["Answer1"]);
						textBox2->Text = Convert::ToString(dbReader["Answer2"]);
						textBox3->Text = Convert::ToString(dbReader["Answer3"]);
						textBox4->Text = Convert::ToString(dbReader["TrueAnswer"]);
						break;
					default:
						break;
					}

				}
			}
			dbReader->Close();
			dbConnection->Close();
		}
		void updatenumbergreen(int prog) {
			switch (prog) {
			case 1:
				lb1->ForeColor = Color::Green;
				break;
			case 2:
				lb2->ForeColor = Color::Green;
				break;
			case 3:
				lb3->ForeColor = Color::Green;
				break;
			case 4:
				lb4->ForeColor = Color::Green;				
				break;
			case 5:
				lb5->ForeColor = Color::Green;
				break;
			case 6:
				lb6->ForeColor = Color::Green;
				break;
			case 7:
				lb7->ForeColor = Color::Green;
				break;
			case 8:
				lb8->ForeColor = Color::Green;
				break;
			case 9:
				lb9->ForeColor = Color::Green;
				break;
			case 10:
			
					lb10->ForeColor = Color::Green;
					MessageBox::Show("Вы успешно прошли тест!", "Успех");
				
			}
		}
		void updatenumbered(int prog) {
			switch (prog) {
			case 1:
				lb1->ForeColor = Color::Red;
				break;
			case 2:
				lb2->ForeColor = Color::Red;
				break;
			case 3:
				lb3->ForeColor = Color::Red;
				break;
			case 4:
				lb4->ForeColor = Color::Red;
				break;
			case 5:
				lb5->ForeColor = Color::Red;
				break;
			case 6:
				lb6->ForeColor = Color::Red;
				break;
			case 7:
				lb7->ForeColor = Color::Red;
				break;
			case 8:
				lb8->ForeColor = Color::Red;
				break;
			case 9:
				lb9->ForeColor = Color::Red;
				break;
			case 10:

				lb10->ForeColor = Color::Red;
				MessageBox::Show("Вы успешно прошли тест!", "Успех");

			}
		}
		int id = 1;
		
	private: System::Void Test_Load(System::Object^ sender, System::EventArgs^ e) {
		QuestionChachge(tab[id]);
		id++;
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (k == 4) {
		textBox4->BackColor = Color::Green;
		updatenumbergreen(id);
	}
	else {
		textBox4->BackColor = Color::Red;
		updatenumbered(id);
	}

}
private: System::Void buttonSong_Click(System::Object^ sender, System::EventArgs^ e) {
	id++;
	QuestionChachge(tab[id]);
	textBox1->BackColor = Color::FromArgb(79, 139, 163);
	textBox2->BackColor = Color::FromArgb(79, 139, 163);
	textBox3->BackColor = Color::FromArgb(79, 139, 163);
	textBox4->BackColor = Color::FromArgb(79, 139, 163);
}
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (k == 1) {
		textBox1->BackColor = Color::Green;
		updatenumbergreen(id);
	}
	else {
		textBox1->BackColor = Color::Red;
		updatenumbered(id);
	}
}
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (k == 2) {
		textBox2->BackColor = Color::Green;
		updatenumbergreen(id);

	}
	else {
		textBox2->BackColor = Color::Red;
		updatenumbered(id);
	}
}
private: System::Void textBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (k == 3) {
		textBox3->BackColor = Color::Green;
		updatenumbergreen(id);
	}
	else {
		textBox3->BackColor = Color::Red;
		updatenumbered(id);
	}
}

private: System::Void lb3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lb5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Test_Load_1(System::Object^ sender, System::EventArgs^ e) {
	RandomArr();
	QuestionChachge(id);
}
};
}
