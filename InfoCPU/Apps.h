#pragma once
#include <iostream>
#include "Windows.h"
#include "tlhelp32.h"
#include <ctime>

namespace InfoCPU {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для Apps
	/// </summary>
	public ref class Apps : public System::Windows::Forms::Form
	{
	public:
		Apps(void)
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
		~Apps()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ tb1;
	private: System::Windows::Forms::Label^ h1;
	private: System::Windows::Forms::Label^ min1;
	private: System::Windows::Forms::Label^ sec1;
	private: System::Windows::Forms::DataGridView^ dgvApps;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ App;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Time;
	private: System::Windows::Forms::Button^ btnSave;







	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tb1 = (gcnew System::Windows::Forms::RichTextBox());
			this->h1 = (gcnew System::Windows::Forms::Label());
			this->min1 = (gcnew System::Windows::Forms::Label());
			this->sec1 = (gcnew System::Windows::Forms::Label());
			this->dgvApps = (gcnew System::Windows::Forms::DataGridView());
			this->App = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvApps))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Запущенные приложения:  ";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Apps::timer1_Tick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(609, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Обновить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Apps::button1_Click);
			// 
			// tb1
			// 
			this->tb1->Location = System::Drawing::Point(609, 153);
			this->tb1->Name = L"tb1";
			this->tb1->ReadOnly = true;
			this->tb1->Size = System::Drawing::Size(109, 324);
			this->tb1->TabIndex = 2;
			this->tb1->Text = L"";
			this->tb1->Visible = false;
			// 
			// h1
			// 
			this->h1->AutoSize = true;
			this->h1->Location = System::Drawing::Point(478, 208);
			this->h1->Name = L"h1";
			this->h1->Size = System::Drawing::Size(0, 17);
			this->h1->TabIndex = 3;
			this->h1->Visible = false;
			// 
			// min1
			// 
			this->min1->AutoSize = true;
			this->min1->Location = System::Drawing::Point(478, 236);
			this->min1->Name = L"min1";
			this->min1->Size = System::Drawing::Size(0, 17);
			this->min1->TabIndex = 4;
			this->min1->Visible = false;
			// 
			// sec1
			// 
			this->sec1->AutoSize = true;
			this->sec1->Location = System::Drawing::Point(478, 265);
			this->sec1->Name = L"sec1";
			this->sec1->Size = System::Drawing::Size(0, 17);
			this->sec1->TabIndex = 5;
			this->sec1->Visible = false;
			// 
			// dgvApps
			// 
			this->dgvApps->AllowUserToDeleteRows = false;
			this->dgvApps->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvApps->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dgvApps->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvApps->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->App, this->ID,
					this->Time
			});
			this->dgvApps->Location = System::Drawing::Point(15, 30);
			this->dgvApps->Name = L"dgvApps";
			this->dgvApps->RowHeadersWidth = 51;
			this->dgvApps->RowTemplate->Height = 24;
			this->dgvApps->Size = System::Drawing::Size(588, 326);
			this->dgvApps->TabIndex = 6;
			// 
			// App
			// 
			this->App->HeaderText = L"Процесс";
			this->App->MinimumWidth = 6;
			this->App->Name = L"App";
			this->App->ReadOnly = true;
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			// 
			// Time
			// 
			this->Time->HeaderText = L"Время работы";
			this->Time->MinimumWidth = 6;
			this->Time->Name = L"Time";
			this->Time->ReadOnly = true;
			this->Time->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(609, 81);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(109, 66);
			this->btnSave->TabIndex = 7;
			this->btnSave->Text = L"Сохранить в файл";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &Apps::btnSave_Click);
			// 
			// Apps
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(730, 368);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->dgvApps);
			this->Controls->Add(this->sec1);
			this->Controls->Add(this->min1);
			this->Controls->Add(this->h1);
			this->Controls->Add(this->tb1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Apps";
			this->Text = L"Запущенные процессы";
			this->Shown += gcnew System::EventHandler(this, &Apps::Apps_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvApps))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: int j = 0;
			  int ex = 1;
			  int* sys = new int[100];
			  int kol = 0;
			  bool first = false;
			  bool exa = false;

		System::String^ CharToSystemString(char* ch)
		{
			return gcnew String(ch);
		}


		VOID PrintModuleList(HANDLE CONST hStdOut, DWORD CONST dwProcessId) {
			MODULEENTRY32 meModuleEntry;
			TCHAR szBuff[1024];
			DWORD dwTemp;
			HANDLE CONST hSnapshot = CreateToolhelp32Snapshot(
				TH32CS_SNAPMODULE, dwProcessId);
			if (INVALID_HANDLE_VALUE == hSnapshot) {
				return;
			}

			HWND hwnd;
			meModuleEntry.dwSize = sizeof(MODULEENTRY32);
			Module32First(hSnapshot, &meModuleEntry);
			do {
				wsprintf(szBuff, L"  ba: %08X, bs: %08X, %s\r\n",
					meModuleEntry.modBaseAddr, meModuleEntry.modBaseSize,
					meModuleEntry.szModule);
					for (int i = 0; i < 100; i++)
					{
						if (meModuleEntry.szModule[i] == '\0') break;
					}
			} while (Module32Next(hSnapshot, &meModuleEntry));

			CloseHandle(hSnapshot);
		}

		VOID PrintProcessList(HANDLE CONST hStdOut) {
			PROCESSENTRY32 peProcessEntry;
			TCHAR szBuff[1024];
			DWORD dwTemp;
			HANDLE CONST hSnapshot = CreateToolhelp32Snapshot(
				TH32CS_SNAPPROCESS, 0);
			if (INVALID_HANDLE_VALUE == hSnapshot) {
				return;
			}
			dgvApps->RowCount = 150;
			String^ Named = "";
			String^ Timed = "";
			peProcessEntry.dwSize = sizeof(PROCESSENTRY32);
			Process32First(hSnapshot, &peProcessEntry);
			do {
				wsprintf(szBuff, L"=== %08X %s ===\r\n",
					peProcessEntry.th32ProcessID, peProcessEntry.szExeFile);
				for (int i = 0; i < 100; i++)
				{
					if (peProcessEntry.szExeFile[i] == '\0')
					{
						break;
					}
					tb1->Text = (tb1->Text) + peProcessEntry.szExeFile[i];
					Named = Named + peProcessEntry.szExeFile[i];
				}
				dgvApps->Rows[j]->Cells[0]->Value = Named;
				Named = "";
				
				tb1->Text = (tb1->Text) + "  ID: " + peProcessEntry.th32ProcessID;
				int Iden = peProcessEntry.th32ProcessID;
				dgvApps->Rows[j]->Cells[1]->Value = Iden;

				// Считываем время открытия файла
				HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, peProcessEntry.th32ProcessID);
				FILETIME ft[4];
				GetProcessTimes(hProcess, &ft[0], &ft[1], &ft[2], &ft[3]);

				SYSTEMTIME sm, fm, dm, tm;
				FileTimeToSystemTime(&ft[0], &sm);
				FileTimeToSystemTime(&ft[1], &fm);
				int hour = sm.wHour;
				int minute = sm.wMinute;
				int sec = sm.wSecond;

				// Считываем актуальное системное время
				char buffer[80];
				time_t seca;
				time(&seca);
				strftime(buffer, 80, "%X", localtime(&seca));
				char* ans = buffer;
				String^ hh1 = CharToSystemString(buffer);
				int flagc = 0;
				for (int i = 0; i < 80; i++)
				{
					if (hh1[i] == '\0')
					{
						flagc = 0;
						break;
					}
					if (hh1[i] == ':')
					{
						if (flagc == 0)
						{
							h1->Text = (h1->Text) + hh1[i - 2];
							h1->Text = (h1->Text) + hh1[i - 1];
							flagc++;
						}
						if (flagc == 1)
						{
							min1->Text = min1->Text + hh1[i + 1] + hh1[i + 2];
							flagc++;
						}
						if (flagc == 2)
						{
							sec1->Text = sec1->Text + hh1[i + 4] + hh1[i + 5];
							flagc++;
						}
						break;
					}
					
				}

				int nhour = Convert::ToInt32(h1->Text);
				int nminute = Convert::ToInt32(min1->Text);
				int nsec = Convert::ToInt32(sec1->Text);
				h1->Text = "";
				min1->Text = "";
				sec1->Text = "";

				exa = false;
				hour = hour + 3;
				int ah = nhour - hour;
				int am = nminute - minute;
				int as = nsec - sec;
				if (am < 0)
				{
					ah = ah - 1;
					am = 60 + am;
				}
				if (as < 0)
				{
					am = am - 1;
					as = 60 + as;
				}

				if ((hour == 3 || hour == 0) && minute == 0 && sec == 0)
				{
					tb1->Text = (tb1->Text) + System::Environment::NewLine;
					if (first == false)
					{
						sys[kol] = peProcessEntry.th32ProcessID;
						kol++;
					}
				}
				else
				{
					if (first)
					{
						for (int jo = 0; jo <= 100; jo++)
						{
							if (peProcessEntry.th32ProcessID == sys[jo])
							{
								tb1->Text = (tb1->Text) + System::Environment::NewLine;
								exa = true;
								break;
							}
						}
						if (exa == false)
						{
							if (ah > 0)
							{
								tb1->Text = (tb1->Text) + " Время работы: " + ah + "ч. " + am + "мин. " + as + "сек." + System::Environment::NewLine;
								Timed = ah + "ч. " + am + "мин. " + as + "сек.";

							}
							else
							{
								if (am > 0)
								{
									tb1->Text = (tb1->Text) + " Время работы: " + am + "мин. " + as + "сек." + System::Environment::NewLine;
									Timed = am + "мин. " + as + "сек.";
								}
								else
								{
									tb1->Text = (tb1->Text) + " Время работы: " + as + "сек." + System::Environment::NewLine;
									Timed = as + "сек.";
								}
							}
						}
					}
					else
					{
						if (ah > 0)
						{
							tb1->Text = (tb1->Text) + " Время работы: " + ah + "ч. " + am + "мин. " + as + "сек." + System::Environment::NewLine;
							Timed = ah + "ч. " + am + "мин. " + as + "сек.";

						}
						else
						{
							if (am > 0)
							{
								tb1->Text = (tb1->Text) + " Время работы: " + am + "мин. " + as + "сек." + System::Environment::NewLine;
								Timed = am + "мин. " + as + "сек.";
							}
							else
							{
								tb1->Text = (tb1->Text) + " Время работы: " + as + "сек." + System::Environment::NewLine;
								Timed = as + "сек.";
							}
						}
					}
				}
				dgvApps->Rows[j]->Cells[2]->Value = Timed;
				Timed = "";
				j++;

				PrintModuleList(hStdOut, peProcessEntry.th32ProcessID);
			} while (Process32Next(hSnapshot, &peProcessEntry));
			for (int i = 0; i < dgvApps->RowCount - 1; i++)
			{

				if (dgvApps->Rows[i]->Cells[0]->Value == nullptr)
				{
					dgvApps->Rows->RemoveAt(i);
					i--;
				}
			}

			CloseHandle(hSnapshot);
		}
		

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		j = 0;
		tb1->Text = "";
		HANDLE CONST hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
		PrintProcessList(hStdOut);
		kol = 0;
	}


private: System::Void Apps_Shown(System::Object^ sender, System::EventArgs^ e) {
	j = 0;
	tb1->Text = "";
	HANDLE CONST hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	PrintProcessList(hStdOut);
	first = true;
	kol = 0;
}
private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamWriter^ sw = gcnew StreamWriter("Processes.txt"); "\n", "\r";
	sw->WriteLine(tb1->Text);
	sw->Close();
	String^ s = "Информация успешно сохранена в файл!";
	MessageBox::Show(s, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
