#pragma once
#include <iterator>
#include <string>
#include <msclr/marshal_cppstd.h>

// string data conversion
std::string managedStrToNative(System::String^ sysstr)
{
	using System::IntPtr;
	using System::Runtime::InteropServices::Marshal;

	IntPtr ip = Marshal::StringToHGlobalAnsi(sysstr);
	std::string outString = static_cast<const char*>(ip.ToPointer());
	Marshal::FreeHGlobal(ip);
	return outString;
}

namespace ehinterguiform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ clipboard_button;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::CheckBox^ auto_paste_checkbox;
	private: System::Windows::Forms::ToolTip^ auto_paste_tooltip;
	private: System::Windows::Forms::Button^ clear_button;
	private: System::Windows::Forms::CheckBox^ auto_clear_1;
	private: System::Windows::Forms::ToolTip^ auto_clear_tooltip;
	private: System::Windows::Forms::ColorDialog^ enter_box_color_diallog;




	private: System::ComponentModel::IContainer^ components;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->clipboard_button = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->auto_paste_checkbox = (gcnew System::Windows::Forms::CheckBox());
			this->auto_clear_1 = (gcnew System::Windows::Forms::CheckBox());
			this->auto_paste_tooltip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->clear_button = (gcnew System::Windows::Forms::Button());
			this->auto_clear_tooltip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->enter_box_color_diallog = (gcnew System::Windows::Forms::ColorDialog());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(6, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter Email";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(10, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(485, 32);
			this->textBox1->TabIndex = 1;
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::textBox1_MouseClick);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox1_KeyDown);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(6, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Email Hint";
			this->label2->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(12, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 34);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Encrypt Email";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(12, 145);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(486, 25);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox2_TextChanged);
			// 
			// clipboard_button
			// 
			this->clipboard_button->AutoSize = true;
			this->clipboard_button->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->clipboard_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->clipboard_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clipboard_button->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clipboard_button->ForeColor = System::Drawing::Color::White;
			this->clipboard_button->Location = System::Drawing::Point(11, 176);
			this->clipboard_button->Name = L"clipboard_button";
			this->clipboard_button->Size = System::Drawing::Size(175, 34);
			this->clipboard_button->TabIndex = 6;
			this->clipboard_button->Text = L"Copy to Clipboard";
			this->clipboard_button->UseVisualStyleBackColor = true;
			this->clipboard_button->Click += gcnew System::EventHandler(this, &MainForm::clipboard_button_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(376, 68);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(119, 26);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"Auto-Copy";
			this->toolTip1->SetToolTip(this->checkBox1, L"Will automatically copy the generated Email Hint");
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox1_CheckedChanged);
			// 
			// toolTip1
			// 
			this->toolTip1->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &MainForm::toolTip1_Popup);
			// 
			// auto_paste_checkbox
			// 
			this->auto_paste_checkbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->auto_paste_checkbox->AutoSize = true;
			this->auto_paste_checkbox->BackColor = System::Drawing::Color::Transparent;
			this->auto_paste_checkbox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->auto_paste_checkbox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->auto_paste_checkbox->ForeColor = System::Drawing::Color::White;
			this->auto_paste_checkbox->Location = System::Drawing::Point(247, 68);
			this->auto_paste_checkbox->Name = L"auto_paste_checkbox";
			this->auto_paste_checkbox->Size = System::Drawing::Size(123, 26);
			this->auto_paste_checkbox->TabIndex = 8;
			this->auto_paste_checkbox->Text = L"Auto-Paste";
			this->toolTip1->SetToolTip(this->auto_paste_checkbox, L"Will automatically paste clipboard data to the enter box");
			this->auto_paste_checkbox->UseVisualStyleBackColor = false;
			this->auto_paste_checkbox->CheckedChanged += gcnew System::EventHandler(this, &MainForm::auto_paste_checkbox_CheckedChanged);
			// 
			// auto_clear_1
			// 
			this->auto_clear_1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->auto_clear_1->AutoSize = true;
			this->auto_clear_1->BackColor = System::Drawing::Color::Transparent;
			this->auto_clear_1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->auto_clear_1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->auto_clear_1->ForeColor = System::Drawing::Color::White;
			this->auto_clear_1->Location = System::Drawing::Point(286, 176);
			this->auto_clear_1->Name = L"auto_clear_1";
			this->auto_clear_1->Size = System::Drawing::Size(212, 26);
			this->auto_clear_1->TabIndex = 9;
			this->auto_clear_1->Text = L"Auto-Clear after Copy";
			this->toolTip1->SetToolTip(this->auto_clear_1, L"Will automatically clear text-boxes once Email-Hint has been copied");
			this->auto_clear_1->UseVisualStyleBackColor = false;
			// 
			// auto_paste_tooltip
			// 
			this->auto_paste_tooltip->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &MainForm::auto_paste_tooltip_Popup);
			// 
			// clear_button
			// 
			this->clear_button->AutoSize = true;
			this->clear_button->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->clear_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->clear_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->clear_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clear_button->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear_button->ForeColor = System::Drawing::Color::White;
			this->clear_button->Location = System::Drawing::Point(192, 176);
			this->clear_button->Name = L"clear_button";
			this->clear_button->Size = System::Drawing::Size(67, 34);
			this->clear_button->TabIndex = 4;
			this->clear_button->Text = L"Clear";
			this->clear_button->UseVisualStyleBackColor = false;
			this->clear_button->Click += gcnew System::EventHandler(this, &MainForm::clear_button_Click);
			// 
			// auto_clear_tooltip
			// 
			this->auto_clear_tooltip->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &MainForm::auto_clear_tooltip_Popup);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(509, 223);
			this->Controls->Add(this->auto_clear_1);
			this->Controls->Add(this->auto_paste_checkbox);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->clipboard_button);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->clear_button);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"E-Hinter 3.0";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   // enter box
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}

private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

	   // hint button
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ originalEmail = this->textBox1->Text;
	int ogEmailSize{ originalEmail->Length };

	int domainIndex = originalEmail->IndexOf('@');
	constexpr int id1{ 1 };
	constexpr int id2{ 2 };
	int test = 1;

	std::string ogEmail_cpp{ managedStrToNative(originalEmail) };

	for (int index = id2; index < domainIndex - id1; ++index)
	{
		ogEmail_cpp[index] = '*';
	}

	String^ ogEmaill_Sys = gcnew String(ogEmail_cpp.data());

	this->textBox2->Text = ogEmaill_Sys;

	if (this->checkBox1->Checked == true)
	{
		clipboard_button->PerformClick();
	}
}

	private: System::Void clear_button_Click(System::Object^ sender, System::EventArgs^ e) {

		// make sure boxes aren't empty before clearing
		if (this->textBox1->Text->Length > 0)
		{
			this->textBox1->Text = nullptr;
		}
		if (this->textBox2->Text->Length > 0)
		{
			this->textBox2->Text = nullptr;
		}
	}


	   // hinted box
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		button1->PerformClick();
		if (this->checkBox1->Checked == true)
		{
			if (this->textBox2->Text->Length > 0)
			{
				clipboard_button->PerformClick();
				if (this->auto_clear_1->Checked == true)
				{
					if (this->textBox1->Text->Length > 0)
					{
						this->textBox1->Text = nullptr;
					}
					if (this->textBox2->Text->Length > 0)
					{
						this->textBox2->Text = nullptr;
					}
				}
			}
		}
	}
}

private: System::Void clipboard_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox2->Text->Length > 0)
	{
		Clipboard::SetData(System::Windows::Forms::DataFormats::UnicodeText, this->textBox2->Text);
		if (this->auto_clear_1->Checked == true)
		{
			if (this->textBox1->Text->Length > 0)
			{
				this->textBox1->Text = nullptr;
			}
			if (this->textBox2->Text->Length > 0)
			{
				this->textBox2->Text = nullptr;
			}
		}
	}
}


private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void toolTip1_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {
}
private: System::Void auto_paste_tooltip_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {
}
private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (this->auto_paste_checkbox->Checked == true)
	{
		if (this->textBox1->Text->Length == 0)
		{
			String^ cp_data = Clipboard::GetText();
			this->textBox1->Text = cp_data;
		}
	}
}

private: System::Void auto_paste_checkbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void auto_clear_tooltip_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {
}


};

}