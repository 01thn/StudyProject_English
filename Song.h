#pragma once

namespace Eng {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	using namespace System::Data::OleDb;

	/// <summary>
	/// —водка дл€ Song
	/// </summary>
	public ref class Song : public System::Windows::Forms::Form
	{
	public:
		Song(void)
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
		~Song()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;




	private: System::Windows::Forms::Button^ buttonGrammar;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label1;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Song::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->buttonGrammar = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->buttonGrammar);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->ForeColor = System::Drawing::Color::Gainsboro;
			this->panel1->Location = System::Drawing::Point(0, 717);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1178, 132);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Song::panel1_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(520, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 29);
			this->label1->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(113, 39);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 80);
			this->button3->TabIndex = 4;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Song::button3_Click);
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
			this->button2->Location = System::Drawing::Point(305, 39);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 80);
			this->button2->TabIndex = 3;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Song::button2_Click);
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
			this->buttonGrammar->Location = System::Drawing::Point(209, 39);
			this->buttonGrammar->Name = L"buttonGrammar";
			this->buttonGrammar->Size = System::Drawing::Size(90, 80);
			this->buttonGrammar->TabIndex = 1;
			this->buttonGrammar->UseVisualStyleBackColor = false;
			this->buttonGrammar->Click += gcnew System::EventHandler(this, &Song::buttonGrammar_Click);
			// 
			// Song
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->ClientSize = System::Drawing::Size(1178, 849);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Song";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Song";
			this->Load += gcnew System::EventHandler(this, &Song::Song_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
		SoundPlayer^ player = nullptr;
		String^ SongChange(int id) {
			String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database1.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
			dbConnection->Open();
			String^ query1 = "SELECT SongName, SongWay  FROM [table_name] WHERE  од = " + id;
			OleDbCommand^ dbCommand1 = gcnew OleDbCommand(query1, dbConnection);
			OleDbDataReader^ dbReader = dbCommand1->ExecuteReader();
			while (dbReader->Read()) {
				label1->Text = Convert::ToString(dbReader["SongName"]);
				return Convert::ToString(dbReader["SongWay"]);
			}
			dbReader->Close();
			dbConnection->Close();
		}
			//gcnew SoundPlayer("D:/VS_2019/LastDance/Media/aplodismentyi-38722.wav");
		int id = 1;
	private: System::Void Song_Load(System::Object^ sender, System::EventArgs^ e) {
		player = gcnew SoundPlayer();
		player->SoundLocation = SongChange(id);
		id++;
	}

		   bool flag = true;
private: System::Void buttonGrammar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (flag) {
		player->Play();
		buttonGrammar->Image = Image::FromFile("Media/стоп.png");
		flag = false;
	}
	else {
		player->Stop();
		buttonGrammar->Image = Image::FromFile("Media/старт.png");
		flag = true;
	}
	
}

private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	buttonGrammar->Image = Image::FromFile("Media/старт.png");
	player->Stop();
	player->SoundLocation = SongChange(id);
	id++;
	flag = true;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	id--;
	player->Stop();
	player->SoundLocation = SongChange(id);
	buttonGrammar->Image = Image::FromFile("Media/старт.png");
	flag = true;
}
};
}
