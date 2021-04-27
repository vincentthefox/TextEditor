#pragma once

namespace TxtCreatorc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem6;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::IO::FileSystemWatcher^ fileSystemWatcher1;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::RichTextBox^ MainTextBox;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton6;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton11;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ создатьToolStripMenuItem;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->создатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton11 = (gcnew System::Windows::Forms::ToolStripButton());
			this->MainTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem4
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(804, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->создатьToolStripMenuItem,
					this->toolStripMenuItem6, this->toolStripMenuItem5
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(48, 20);
			this->toolStripMenuItem1->Text = L"Файл";
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem5->Text = L"Сохранить";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &MainForm::toolStripMenuItem5_Click);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem6->Text = L"Открыть";
			this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &MainForm::toolStripMenuItem6_Click);
			// 
			// создатьToolStripMenuItem
			// 
			this->создатьToolStripMenuItem->Name = L"создатьToolStripMenuItem";
			this->создатьToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->создатьToolStripMenuItem->Text = L"Создать";
			this->создатьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::создатьToolStripMenuItem_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(94, 20);
			this->toolStripMenuItem4->Text = L"О программе";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &MainForm::toolStripMenuItem4_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"RTF-формат (*.rtf)|*.rtf|Text (*.txt)|*.txt";
		
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"RTF-формат (*.rtf)|*.rtf|Text (*.txt)|*.txt";
			// 
			// fileSystemWatcher1
			// 
			this->fileSystemWatcher1->EnableRaisingEvents = true;
			this->fileSystemWatcher1->SynchronizingObject = this;
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripButton6,
					this->toolStripButton11
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(804, 25);
			this->toolStrip1->TabIndex = 3;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(23, 22);
			this->toolStripButton6->Text = L"toolStripButton6";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &MainForm::toolStripButton6_Click);
			// 
			// toolStripButton11
			// 
			this->toolStripButton11->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton11.Image")));
			this->toolStripButton11->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton11->Name = L"toolStripButton11";
			this->toolStripButton11->Size = System::Drawing::Size(40, 22);
			this->toolStripButton11->Text = L"Color";
			this->toolStripButton11->Click += gcnew System::EventHandler(this, &MainForm::toolStripButton11_Click);
			// 
			// MainTextBox
			// 
			this->MainTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MainTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MainTextBox->Location = System::Drawing::Point(12, 66);
			this->MainTextBox->Name = L"MainTextBox";
			this->MainTextBox->Size = System::Drawing::Size(776, 380);
			this->MainTextBox->TabIndex = 4;
			this->MainTextBox->Text = L"";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(804, 461);
			this->Controls->Add(this->MainTextBox);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(820, 500);
			this->MinimumSize = System::Drawing::Size(820, 500);
			this->Name = L"MainForm";
			this->Text = L"Текстовый редактор";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void MainTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}


	private: System::Void toolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) //about
	{
		MessageBox::Show("Мой Курсовой Проект");
	}
	private: System::Void toolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) //createnew\save
	{
		String^ FileName;
		if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) 
		{
			FileName = saveFileDialog1->FileName;
		}
		try 
		{
			MainTextBox->SaveFile(saveFileDialog1->FileName, RichTextBoxStreamType::RichText);
			
		}
		catch (Exception^ e) 
		{
			MessageBox::Show(this, "ErrorOnSaving", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

 } 
		   //createnew/save
	
private: System::Void toolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e) { //Open
	String^ FileName = "";
	if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		FileName = openFileDialog1->FileName;
	}
	try
	{
		MainTextBox->LoadFile(FileName, RichTextBoxStreamType::RichText);
	}
	catch (Exception^ e)
	{
		MessageBox::Show(this, "Error", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ FileName = "";
	
}

private: System::Void toolStripButton6_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::FontDialog^ fd = gcnew System::Windows::Forms::FontDialog();
	if (fd->ShowDialog() != System::Windows::Forms::DialogResult::OK)
		return;
	MainTextBox->SelectionFont = fd->Font;
}

private: System::Void toolStripButton11_Click(System::Object^ sender, System::EventArgs^ e) {
	colorDialog1->ShowDialog();
	MainTextBox->SelectionColor = colorDialog1->Color;
}
private: System::Void создатьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MainTextBox->Text = "";	
	
}
};
}
