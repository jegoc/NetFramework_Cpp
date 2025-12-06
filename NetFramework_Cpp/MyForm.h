#pragma once

namespace NetFrameworkCpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Button^ btnCancel;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(38, 233);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(212, 100);
			this->btnLogin->TabIndex = 0;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &MyForm::btnLogin_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(286, 232);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(212, 101);
			this->btnCancel->TabIndex = 1;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &MyForm::btnCancel_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(556, 419);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnLogin);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
