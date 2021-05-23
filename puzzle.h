#pragma once

namespace Eng {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ puzzle
	/// </summary>
	public ref class puzzle : public System::Windows::Forms::Form
	{
	public:
		puzzle(void)
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
		~puzzle()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ agoA;
	public: System::Windows::Forms::Button^ laptopA;
	protected:

	protected:

	public: System::Windows::Forms::Button^ AppleA;
	public: System::Windows::Forms::Button^ worksA;

	public: System::Windows::Forms::Button^ headphonesA;
	public: System::Windows::Forms::Button^ careA;


	public: System::Windows::Forms::Button^ WillA;
	public: System::Windows::Forms::Button^ withinA;


	public: System::Windows::Forms::Button^ winA;

	public: System::Windows::Forms::Button^ doA;

	public: System::Windows::Forms::Button^ InA;
	public: System::Windows::Forms::Button^ ofA;
	public: System::Windows::Forms::Button^ laptopQ;



	public: System::Windows::Forms::Button^ worksQ;

	public: System::Windows::Forms::Button^ withinQ;

	public: System::Windows::Forms::Button^ agoQ;

	public: System::Windows::Forms::Button^ winQ;

	public: System::Windows::Forms::Button^ doQ;

	public: System::Windows::Forms::Button^ ofQ;

	public: System::Windows::Forms::Button^ careQ;

	public: System::Windows::Forms::Button^ headphonesQ;

	public: System::Windows::Forms::Button^ InQ;

	public: System::Windows::Forms::Button^ WillQ;

	public: System::Windows::Forms::Button^ AppleQ;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(puzzle::typeid));
			this->agoA = (gcnew System::Windows::Forms::Button());
			this->laptopA = (gcnew System::Windows::Forms::Button());
			this->AppleA = (gcnew System::Windows::Forms::Button());
			this->worksA = (gcnew System::Windows::Forms::Button());
			this->headphonesA = (gcnew System::Windows::Forms::Button());
			this->careA = (gcnew System::Windows::Forms::Button());
			this->WillA = (gcnew System::Windows::Forms::Button());
			this->withinA = (gcnew System::Windows::Forms::Button());
			this->winA = (gcnew System::Windows::Forms::Button());
			this->doA = (gcnew System::Windows::Forms::Button());
			this->InA = (gcnew System::Windows::Forms::Button());
			this->ofA = (gcnew System::Windows::Forms::Button());
			this->laptopQ = (gcnew System::Windows::Forms::Button());
			this->worksQ = (gcnew System::Windows::Forms::Button());
			this->withinQ = (gcnew System::Windows::Forms::Button());
			this->agoQ = (gcnew System::Windows::Forms::Button());
			this->winQ = (gcnew System::Windows::Forms::Button());
			this->doQ = (gcnew System::Windows::Forms::Button());
			this->ofQ = (gcnew System::Windows::Forms::Button());
			this->careQ = (gcnew System::Windows::Forms::Button());
			this->headphonesQ = (gcnew System::Windows::Forms::Button());
			this->InQ = (gcnew System::Windows::Forms::Button());
			this->WillQ = (gcnew System::Windows::Forms::Button());
			this->AppleQ = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// agoA
			// 
			this->agoA->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->agoA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->agoA->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold));
			this->agoA->Location = System::Drawing::Point(1004, 640);
			this->agoA->Name = L"agoA";
			this->agoA->Size = System::Drawing::Size(166, 131);
			this->agoA->TabIndex = 23;
			this->agoA->Text = L"ago";
			this->agoA->UseVisualStyleBackColor = true;
			this->agoA->Click += gcnew System::EventHandler(this, &puzzle::agoA_Click);
			// 
			// laptopA
			// 
			this->laptopA->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->laptopA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->laptopA->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold));
			this->laptopA->Location = System::Drawing::Point(805, 640);
			this->laptopA->Name = L"laptopA";
			this->laptopA->Size = System::Drawing::Size(166, 131);
			this->laptopA->TabIndex = 22;
			this->laptopA->Text = L"Laptop";
			this->laptopA->UseVisualStyleBackColor = true;
			this->laptopA->Click += gcnew System::EventHandler(this, &puzzle::laptopA_Click);
			// 
			// AppleA
			// 
			this->AppleA->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->AppleA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AppleA->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AppleA->Location = System::Drawing::Point(593, 640);
			this->AppleA->Name = L"AppleA";
			this->AppleA->Size = System::Drawing::Size(166, 131);
			this->AppleA->TabIndex = 21;
			this->AppleA->Text = L"Apple";
			this->AppleA->UseVisualStyleBackColor = true;
			this->AppleA->Click += gcnew System::EventHandler(this, &puzzle::AppleA_Click);
			// 
			// worksA
			// 
			this->worksA->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->worksA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->worksA->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold));
			this->worksA->Location = System::Drawing::Point(393, 640);
			this->worksA->Name = L"worksA";
			this->worksA->Size = System::Drawing::Size(166, 131);
			this->worksA->TabIndex = 20;
			this->worksA->Text = L"works";
			this->worksA->UseVisualStyleBackColor = true;
			this->worksA->Click += gcnew System::EventHandler(this, &puzzle::worksA_Click);
			// 
			// headphonesA
			// 
			this->headphonesA->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->headphonesA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->headphonesA->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->headphonesA->Location = System::Drawing::Point(199, 640);
			this->headphonesA->Name = L"headphonesA";
			this->headphonesA->Size = System::Drawing::Size(166, 131);
			this->headphonesA->TabIndex = 19;
			this->headphonesA->Text = L"Headphones";
			this->headphonesA->UseVisualStyleBackColor = true;
			this->headphonesA->Click += gcnew System::EventHandler(this, &puzzle::headphonesA_Click);
			// 
			// careA
			// 
			this->careA->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->careA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->careA->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold));
			this->careA->Location = System::Drawing::Point(12, 640);
			this->careA->Name = L"careA";
			this->careA->Size = System::Drawing::Size(166, 131);
			this->careA->TabIndex = 18;
			this->careA->Text = L"Ћюбить";
			this->careA->UseVisualStyleBackColor = true;
			this->careA->Click += gcnew System::EventHandler(this, &puzzle::careA_Click);
			// 
			// WillA
			// 
			this->WillA->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->WillA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WillA->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold));
			this->WillA->Location = System::Drawing::Point(1004, 485);
			this->WillA->Name = L"WillA";
			this->WillA->Size = System::Drawing::Size(166, 131);
			this->WillA->TabIndex = 17;
			this->WillA->Text = L"will";
			this->WillA->UseVisualStyleBackColor = true;
			this->WillA->Click += gcnew System::EventHandler(this, &puzzle::WillA_Click);
			// 
			// withinA
			// 
			this->withinA->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->withinA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->withinA->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold));
			this->withinA->Location = System::Drawing::Point(805, 485);
			this->withinA->Name = L"withinA";
			this->withinA->Size = System::Drawing::Size(166, 131);
			this->withinA->TabIndex = 16;
			this->withinA->Text = L"¬нутри, в пределах, не далее";
			this->withinA->UseVisualStyleBackColor = true;
			this->withinA->Click += gcnew System::EventHandler(this, &puzzle::withinA_Click);
			// 
			// winA
			// 
			this->winA->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->winA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->winA->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold));
			this->winA->Location = System::Drawing::Point(593, 485);
			this->winA->Name = L"winA";
			this->winA->Size = System::Drawing::Size(166, 131);
			this->winA->TabIndex = 15;
			this->winA->Text = L"Windows";
			this->winA->UseVisualStyleBackColor = true;
			this->winA->Click += gcnew System::EventHandler(this, &puzzle::winA_Click);
			// 
			// doA
			// 
			this->doA->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->doA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->doA->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold));
			this->doA->Location = System::Drawing::Point(393, 485);
			this->doA->Name = L"doA";
			this->doA->Size = System::Drawing::Size(166, 131);
			this->doA->TabIndex = 14;
			this->doA->Text = L"do";
			this->doA->UseVisualStyleBackColor = true;
			this->doA->Click += gcnew System::EventHandler(this, &puzzle::doA_Click);
			// 
			// InA
			// 
			this->InA->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->InA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->InA->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold));
			this->InA->Location = System::Drawing::Point(199, 485);
			this->InA->Name = L"InA";
			this->InA->Size = System::Drawing::Size(166, 131);
			this->InA->TabIndex = 13;
			this->InA->Text = L"In";
			this->InA->UseVisualStyleBackColor = true;
			this->InA->Click += gcnew System::EventHandler(this, &puzzle::InA_Click);
			// 
			// ofA
			// 
			this->ofA->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ofA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ofA->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold));
			this->ofA->Location = System::Drawing::Point(12, 485);
			this->ofA->Name = L"ofA";
			this->ofA->Size = System::Drawing::Size(166, 131);
			this->ofA->TabIndex = 12;
			this->ofA->Text = L"of";
			this->ofA->UseVisualStyleBackColor = true;
			this->ofA->Click += gcnew System::EventHandler(this, &puzzle::ofA_Click);
			// 
			// laptopQ
			// 
			this->laptopQ->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"laptopQ.BackgroundImage")));
			this->laptopQ->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->laptopQ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->laptopQ->Location = System::Drawing::Point(1004, 176);
			this->laptopQ->Name = L"laptopQ";
			this->laptopQ->Size = System::Drawing::Size(166, 131);
			this->laptopQ->TabIndex = 35;
			this->laptopQ->UseVisualStyleBackColor = true;
			this->laptopQ->Click += gcnew System::EventHandler(this, &puzzle::laptopQ_Click);
			// 
			// worksQ
			// 
			this->worksQ->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->worksQ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->worksQ->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold));
			this->worksQ->Location = System::Drawing::Point(805, 176);
			this->worksQ->Name = L"worksQ";
			this->worksQ->Size = System::Drawing::Size(166, 131);
			this->worksQ->TabIndex = 34;
			this->worksQ->Text = L"I work\nHe ____";
			this->worksQ->UseVisualStyleBackColor = true;
			this->worksQ->Click += gcnew System::EventHandler(this, &puzzle::worksQ_Click);
			// 
			// withinQ
			// 
			this->withinQ->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->withinQ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->withinQ->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->withinQ->Location = System::Drawing::Point(593, 176);
			this->withinQ->Name = L"withinQ";
			this->withinQ->Size = System::Drawing::Size(166, 131);
			this->withinQ->TabIndex = 33;
			this->withinQ->Text = L"Within";
			this->withinQ->UseVisualStyleBackColor = true;
			this->withinQ->Click += gcnew System::EventHandler(this, &puzzle::withinQ_Click);
			// 
			// agoQ
			// 
			this->agoQ->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->agoQ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->agoQ->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->agoQ->Location = System::Drawing::Point(393, 176);
			this->agoQ->Name = L"agoQ";
			this->agoQ->Size = System::Drawing::Size(166, 131);
			this->agoQ->TabIndex = 32;
			this->agoQ->Text = L"Five days __";
			this->agoQ->UseVisualStyleBackColor = true;
			this->agoQ->Click += gcnew System::EventHandler(this, &puzzle::agoQ_Click);
			// 
			// winQ
			// 
			this->winQ->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"winQ.BackgroundImage")));
			this->winQ->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->winQ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->winQ->Location = System::Drawing::Point(199, 176);
			this->winQ->Name = L"winQ";
			this->winQ->Size = System::Drawing::Size(166, 131);
			this->winQ->TabIndex = 31;
			this->winQ->UseVisualStyleBackColor = true;
			this->winQ->Click += gcnew System::EventHandler(this, &puzzle::winQ_Click);
			// 
			// doQ
			// 
			this->doQ->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->doQ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->doQ->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold));
			this->doQ->Location = System::Drawing::Point(12, 176);
			this->doQ->Name = L"doQ";
			this->doQ->Size = System::Drawing::Size(166, 131);
			this->doQ->TabIndex = 30;
			this->doQ->Text = L"I __ not play";
			this->doQ->UseVisualStyleBackColor = true;
			this->doQ->Click += gcnew System::EventHandler(this, &puzzle::doQ_Click);
			// 
			// ofQ
			// 
			this->ofQ->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ofQ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ofQ->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold));
			this->ofQ->Location = System::Drawing::Point(1004, 21);
			this->ofQ->Name = L"ofQ";
			this->ofQ->Size = System::Drawing::Size(166, 131);
			this->ofQ->TabIndex = 29;
			this->ofQ->Text = L"Instead __";
			this->ofQ->UseVisualStyleBackColor = true;
			this->ofQ->Click += gcnew System::EventHandler(this, &puzzle::ofQ_Click);
			// 
			// careQ
			// 
			this->careQ->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->careQ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->careQ->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold));
			this->careQ->Location = System::Drawing::Point(805, 21);
			this->careQ->Name = L"careQ";
			this->careQ->Size = System::Drawing::Size(166, 131);
			this->careQ->TabIndex = 28;
			this->careQ->Text = L"To care for";
			this->careQ->UseVisualStyleBackColor = true;
			this->careQ->Click += gcnew System::EventHandler(this, &puzzle::careQ_Click);
			// 
			// headphonesQ
			// 
			this->headphonesQ->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"headphonesQ.BackgroundImage")));
			this->headphonesQ->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->headphonesQ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->headphonesQ->Location = System::Drawing::Point(593, 21);
			this->headphonesQ->Name = L"headphonesQ";
			this->headphonesQ->Size = System::Drawing::Size(166, 131);
			this->headphonesQ->TabIndex = 27;
			this->headphonesQ->UseVisualStyleBackColor = true;
			this->headphonesQ->Click += gcnew System::EventHandler(this, &puzzle::headphonesQ_Click);
			// 
			// InQ
			// 
			this->InQ->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->InQ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->InQ->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold));
			this->InQ->Location = System::Drawing::Point(393, 21);
			this->InQ->Name = L"InQ";
			this->InQ->Size = System::Drawing::Size(166, 131);
			this->InQ->TabIndex = 26;
			this->InQ->Text = L"__ 1980";
			this->InQ->UseVisualStyleBackColor = true;
			this->InQ->Click += gcnew System::EventHandler(this, &puzzle::InQ_Click);
			// 
			// WillQ
			// 
			this->WillQ->BackColor = System::Drawing::Color::Transparent;
			this->WillQ->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->WillQ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WillQ->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold));
			this->WillQ->Location = System::Drawing::Point(199, 21);
			this->WillQ->Name = L"WillQ";
			this->WillQ->Size = System::Drawing::Size(166, 131);
			this->WillQ->TabIndex = 25;
			this->WillQ->Text = L"I ____ go to Paris next summer";
			this->WillQ->UseVisualStyleBackColor = false;
			this->WillQ->Click += gcnew System::EventHandler(this, &puzzle::WillQ_Click);
			// 
			// AppleQ
			// 
			this->AppleQ->BackColor = System::Drawing::Color::Transparent;
			this->AppleQ->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AppleQ.BackgroundImage")));
			this->AppleQ->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->AppleQ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AppleQ->Location = System::Drawing::Point(12, 21);
			this->AppleQ->Name = L"AppleQ";
			this->AppleQ->Size = System::Drawing::Size(166, 131);
			this->AppleQ->TabIndex = 24;
			this->AppleQ->UseVisualStyleBackColor = false;
			this->AppleQ->Click += gcnew System::EventHandler(this, &puzzle::AppleQ_Click);
			// 
			// puzzle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1200, 900);
			this->Controls->Add(this->laptopQ);
			this->Controls->Add(this->worksQ);
			this->Controls->Add(this->withinQ);
			this->Controls->Add(this->agoQ);
			this->Controls->Add(this->winQ);
			this->Controls->Add(this->doQ);
			this->Controls->Add(this->ofQ);
			this->Controls->Add(this->careQ);
			this->Controls->Add(this->headphonesQ);
			this->Controls->Add(this->InQ);
			this->Controls->Add(this->WillQ);
			this->Controls->Add(this->AppleQ);
			this->Controls->Add(this->agoA);
			this->Controls->Add(this->laptopA);
			this->Controls->Add(this->AppleA);
			this->Controls->Add(this->worksA);
			this->Controls->Add(this->headphonesA);
			this->Controls->Add(this->careA);
			this->Controls->Add(this->WillA);
			this->Controls->Add(this->withinA);
			this->Controls->Add(this->winA);
			this->Controls->Add(this->doA);
			this->Controls->Add(this->InA);
			this->Controls->Add(this->ofA);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"puzzle";
			this->Text = L"puzzle";
			this->Load += gcnew System::EventHandler(this, &puzzle::puzzle_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	bool appleQuest;
	bool willQuest;
	bool inQuest;
	bool headphonesQuest;
	bool careQuest;
	bool ofQuest;
	bool doQuest;
	bool winQuest;
	bool agoQuest;
	bool withinQuest;
	bool worksQuest;
	bool laptopQuest;
	Void answ() {
		appleQuest = false;
		willQuest = false;
		inQuest = false;
		headphonesQuest = false;
		careQuest = false;
		ofQuest = false;
		doQuest = false;
		winQuest = false;
		agoQuest = false;
		withinQuest = false; 
		worksQuest = false;
		laptopQuest = false;
	}

private: System::Void AppleA_Click(System::Object^ sender, System::EventArgs^ e) {
	if (appleQuest) { AppleQ->Visible = false; AppleA->Visible = false; }
	else{ AppleA->BackColor = Color::Red; answ();}

}
private: System::Void AppleQ_Click(System::Object^ sender, System::EventArgs^ e) {
	appleQuest = true;
}
private: System::Void WillQ_Click(System::Object^ sender, System::EventArgs^ e) {
	willQuest = true;
}
private: System::Void WillA_Click(System::Object^ sender, System::EventArgs^ e) {
	if (willQuest) { WillQ->Visible = false; WillA->Visible = false; }
	else { WillA->BackColor = Color::Red; answ();}
}
private: System::Void puzzle_Load(System::Object^ sender, System::EventArgs^ e) {
	answ();
}
private: System::Void InQ_Click(System::Object^ sender, System::EventArgs^ e) {
	inQuest = true;
}
private: System::Void InA_Click(System::Object^ sender, System::EventArgs^ e) {
	if (inQuest) { InQ->Visible = false; InA->Visible = false; }
	else { InA->BackColor = Color::Red; answ(); }
}
private: System::Void headphonesQ_Click(System::Object^ sender, System::EventArgs^ e) {
	headphonesQuest = true;
}
private: System::Void headphonesA_Click(System::Object^ sender, System::EventArgs^ e) {
	if (headphonesQuest) { headphonesQ->Visible = false; headphonesA->Visible = false; }
	else { headphonesA->BackColor = Color::Red; answ(); }
}
private: System::Void careQ_Click(System::Object^ sender, System::EventArgs^ e) {
	careQuest = true;
}
private: System::Void careA_Click(System::Object^ sender, System::EventArgs^ e) {
	if (careQuest) { careQ->Visible = false; careA->Visible = false; }
	else { careA->BackColor = Color::Red; answ(); }
}
private: System::Void ofQ_Click(System::Object^ sender, System::EventArgs^ e) {
	ofQuest = true;
}
private: System::Void ofA_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ofQuest) { ofQ->Visible = false; ofA->Visible = false; }
	else { ofA->BackColor = Color::Red; answ(); }
}
private: System::Void doQ_Click(System::Object^ sender, System::EventArgs^ e) {
	doQuest = true;
}
private: System::Void doA_Click(System::Object^ sender, System::EventArgs^ e) {
	if (doQuest) { doQ->Visible = false; doA->Visible = false; }
	else { doA->BackColor = Color::Red; answ(); }
}
private: System::Void winQ_Click(System::Object^ sender, System::EventArgs^ e) {
	winQuest = true;
}
private: System::Void winA_Click(System::Object^ sender, System::EventArgs^ e) {
	if (winQuest) { winQ->Visible = false; winA->Visible = false; }
	else { winA->BackColor = Color::Red; answ(); }
}
private: System::Void agoQ_Click(System::Object^ sender, System::EventArgs^ e) {
	agoQuest = true;
}
private: System::Void agoA_Click(System::Object^ sender, System::EventArgs^ e) {
	if (agoQuest) { agoQ->Visible = false; agoA->Visible = false; }
	else { agoA->BackColor = Color::Red; answ(); }
}
private: System::Void withinQ_Click(System::Object^ sender, System::EventArgs^ e) {
	withinQuest = true;
}
private: System::Void withinA_Click(System::Object^ sender, System::EventArgs^ e) {
	if (withinQuest) { withinQ->Visible = false; withinA->Visible = false; }
	else { withinA->BackColor = Color::Red; answ(); }
}
private: System::Void worksQ_Click(System::Object^ sender, System::EventArgs^ e) {
	worksQuest = true;
}
private: System::Void worksA_Click(System::Object^ sender, System::EventArgs^ e) {
	if (worksQuest) { worksQ->Visible = false; worksA->Visible = false; }
	else { worksA->BackColor = Color::Red; answ(); }
}
private: System::Void laptopQ_Click(System::Object^ sender, System::EventArgs^ e) {
	laptopQuest = true;
}
private: System::Void laptopA_Click(System::Object^ sender, System::EventArgs^ e) {
	if (laptopQuest) { laptopQ->Visible = false; laptopA->Visible = false; }
	else { laptopA->BackColor = Color::Red; answ(); }
}
};
}
