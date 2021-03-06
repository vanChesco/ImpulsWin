#pragma once

#include "Klasy.h";
#include <string>;

namespace ImpulsWin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ in_fmax;
	protected:




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_generuj;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ in_sampling;
	private: System::Windows::Forms::TextBox^ in_fmin;




	private: System::Windows::Forms::ComboBox^ in_bitrate;
	private: System::Windows::Forms::Label^ lb_filename;
	private: System::Windows::Forms::TextBox^ in_filename;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obsługi projektanta — nie należy modyfikować
		/// jej zawartości w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->in_bitrate = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->in_sampling = (gcnew System::Windows::Forms::TextBox());
			this->in_fmin = (gcnew System::Windows::Forms::TextBox());
			this->in_fmax = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_generuj = (gcnew System::Windows::Forms::Button());
			this->lb_filename = (gcnew System::Windows::Forms::Label());
			this->in_filename = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->in_bitrate);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->in_sampling);
			this->groupBox1->Controls->Add(this->in_fmin);
			this->groupBox1->Controls->Add(this->in_fmax);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(11, 38);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(180, 126);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Parametry";
			// 
			// in_bitrate
			// 
			this->in_bitrate->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->in_bitrate->FormattingEnabled = true;
			this->in_bitrate->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"8", L"16", L"24", L"32" });
			this->in_bitrate->Location = System::Drawing::Point(64, 46);
			this->in_bitrate->Name = L"in_bitrate";
			this->in_bitrate->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->in_bitrate->Size = System::Drawing::Size(70, 21);
			this->in_bitrate->TabIndex = 3;
			this->in_bitrate->Tag = L"";
			this->in_bitrate->Text = L"24";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(140, 101);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Hz";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(140, 75);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Hz";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(140, 49);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"bitów";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(140, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Hz";
			// 
			// in_sampling
			// 
			this->in_sampling->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->in_sampling->Location = System::Drawing::Point(64, 20);
			this->in_sampling->Name = L"in_sampling";
			this->in_sampling->Size = System::Drawing::Size(70, 20);
			this->in_sampling->TabIndex = 1;
			this->in_sampling->Text = L"48000";
			this->in_sampling->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// in_fmin
			// 
			this->in_fmin->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->in_fmin->Location = System::Drawing::Point(64, 72);
			this->in_fmin->Name = L"in_fmin";
			this->in_fmin->Size = System::Drawing::Size(70, 20);
			this->in_fmin->TabIndex = 1;
			this->in_fmin->Text = L"20";
			this->in_fmin->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// in_fmax
			// 
			this->in_fmax->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->in_fmax->Location = System::Drawing::Point(64, 98);
			this->in_fmax->Name = L"in_fmax";
			this->in_fmax->Size = System::Drawing::Size(70, 20);
			this->in_fmax->TabIndex = 1;
			this->in_fmax->Text = L"22000";
			this->in_fmax->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"f max";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"f min";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Bitrate";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sampling";
			// 
			// btn_generuj
			// 
			this->btn_generuj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_generuj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_generuj->Location = System::Drawing::Point(197, 43);
			this->btn_generuj->Name = L"btn_generuj";
			this->btn_generuj->Size = System::Drawing::Size(125, 120);
			this->btn_generuj->TabIndex = 1;
			this->btn_generuj->Text = L"Generuj";
			this->btn_generuj->UseVisualStyleBackColor = true;
			this->btn_generuj->Click += gcnew System::EventHandler(this, &MyForm::btn_generuj_Click);
			// 
			// lb_filename
			// 
			this->lb_filename->AutoSize = true;
			this->lb_filename->Location = System::Drawing::Point(8, 14);
			this->lb_filename->Name = L"lb_filename";
			this->lb_filename->Size = System::Drawing::Size(68, 13);
			this->lb_filename->TabIndex = 0;
			this->lb_filename->Text = L"Nazwa pliku:";
			// 
			// in_filename
			// 
			this->in_filename->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->in_filename->Location = System::Drawing::Point(82, 12);
			this->in_filename->Name = L"in_filename";
			this->in_filename->Size = System::Drawing::Size(241, 20);
			this->in_filename->TabIndex = 1;
			this->in_filename->Text = L"ImpulsIdealny";
			this->in_filename->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(222, 170);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(100, 13);
			this->linkLabel1->TabIndex = 2;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"2020 © vanChesco";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(335, 192);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->btn_generuj);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->lb_filename);
			this->Controls->Add(this->in_filename);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Impuls Idealny";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void MarshalString(String^ s, std::string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}


		private: System::Void btn_generuj_Click(System::Object^ sender, System::EventArgs^ e)
		{
			std::string a;
			std::string komunikat;
			MarshalString(in_filename->Text, a);

			Plik wav1(System::Convert::ToInt32(in_sampling->Text), System::Convert::ToInt32(in_bitrate->Text), 1, 1, a);
			wav1.utworz_naglowek();

			int dl_wek = wav1.dlugosc * wav1.SamplingRate;
			std::vector<int> wektor(dl_wek, 0);

			Funkcje f1(wav1);
			f1.impuls_idealny(System::Convert::ToInt32(in_fmax->Text), wav1, wektor);

			wav1.dopisz_funkcje(wektor);
			wav1.wpisz_rozmiar_do_naglowka();

			komunikat = "Plik " + a + ".wav zostal wygenerowany pomyslnie.";

			System::Windows::Forms::MessageBox::Show("Plik zostal zapisany pomyslnie, Janku :)", "Plik zapisany", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	};
}