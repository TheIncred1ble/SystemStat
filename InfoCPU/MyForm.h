#pragma once
#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include<TCHAR.H>
#include "VersionHelpers.h"
#include "CPUName.h"
#include "string"
#include "Apps.h"
#include "Info.h"



namespace InfoCPU {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
			Appls = gcnew Apps;
			Infos = gcnew Info;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Diagnostics::PerformanceCounter^ performanceCounter1;
	private: System::Windows::Forms::Label^ lblCPU;
	protected:

	private: System::Windows::Forms::Timer^ timer1;

	private: System::Diagnostics::PerformanceCounter^ performanceCounter2;
	private: System::Windows::Forms::Label^ lblMem;



	private: System::Diagnostics::PerformanceCounter^ performanceCounter3;

	private: System::Windows::Forms::Label^ lblMem1;
	private: System::Windows::Forms::Label^ lblMem2;
	private: System::Windows::Forms::Label^ l1OS;
	private: System::Windows::Forms::Label^ l2OS;
	private: System::Windows::Forms::Label^ l3OS;
	private: System::Windows::Forms::Label^ l4OS;
	private: System::Windows::Forms::Label^ l5OS;
	private: System::Windows::Forms::Label^ l6OS;


















	private: System::Windows::Forms::Button^ bApp;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->performanceCounter1 = (gcnew System::Diagnostics::PerformanceCounter());
			this->lblCPU = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->performanceCounter2 = (gcnew System::Diagnostics::PerformanceCounter());
			this->lblMem = (gcnew System::Windows::Forms::Label());
			this->performanceCounter3 = (gcnew System::Diagnostics::PerformanceCounter());
			this->lblMem1 = (gcnew System::Windows::Forms::Label());
			this->lblMem2 = (gcnew System::Windows::Forms::Label());
			this->l1OS = (gcnew System::Windows::Forms::Label());
			this->l2OS = (gcnew System::Windows::Forms::Label());
			this->l3OS = (gcnew System::Windows::Forms::Label());
			this->l4OS = (gcnew System::Windows::Forms::Label());
			this->l5OS = (gcnew System::Windows::Forms::Label());
			this->l6OS = (gcnew System::Windows::Forms::Label());
			this->bApp = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->performanceCounter1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->performanceCounter2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->performanceCounter3))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// performanceCounter1
			// 
			this->performanceCounter1->CategoryName = L"Processor";
			this->performanceCounter1->CounterName = L"% Processor Time";
			this->performanceCounter1->InstanceName = L"_Total";
			// 
			// lblCPU
			// 
			this->lblCPU->AutoSize = true;
			this->lblCPU->Location = System::Drawing::Point(6, 89);
			this->lblCPU->Name = L"lblCPU";
			this->lblCPU->Size = System::Drawing::Size(197, 17);
			this->lblCPU->TabIndex = 0;
			this->lblCPU->Text = L"Загруженность процессора: ";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// performanceCounter2
			// 
			this->performanceCounter2->CategoryName = L"Память";
			this->performanceCounter2->CounterName = L"Доступно МБ";
			// 
			// lblMem
			// 
			this->lblMem->AutoSize = true;
			this->lblMem->Location = System::Drawing::Point(6, 59);
			this->lblMem->Name = L"lblMem";
			this->lblMem->Size = System::Drawing::Size(80, 17);
			this->lblMem->TabIndex = 2;
			this->lblMem->Text = L"Свободно: ";
			// 
			// performanceCounter3
			// 
			this->performanceCounter3->CategoryName = L"Память";
			this->performanceCounter3->CounterName = L"% использования выделенной памяти";
			// 
			// lblMem1
			// 
			this->lblMem1->AutoSize = true;
			this->lblMem1->Location = System::Drawing::Point(6, 89);
			this->lblMem1->Name = L"lblMem1";
			this->lblMem1->Size = System::Drawing::Size(53, 17);
			this->lblMem1->TabIndex = 3;
			this->lblMem1->Text = L"Всего: ";
			// 
			// lblMem2
			// 
			this->lblMem2->AutoSize = true;
			this->lblMem2->Location = System::Drawing::Point(6, 29);
			this->lblMem2->Name = L"lblMem2";
			this->lblMem2->Size = System::Drawing::Size(108, 17);
			this->lblMem2->TabIndex = 4;
			this->lblMem2->Text = L"Используется: ";
			// 
			// l1OS
			// 
			this->l1OS->AutoSize = true;
			this->l1OS->Location = System::Drawing::Point(6, 29);
			this->l1OS->Name = L"l1OS";
			this->l1OS->Size = System::Drawing::Size(127, 17);
			this->l1OS->TabIndex = 5;
			this->l1OS->Text = L"Имя компьютера: ";
			// 
			// l2OS
			// 
			this->l2OS->AutoSize = true;
			this->l2OS->Location = System::Drawing::Point(6, 59);
			this->l2OS->Name = L"l2OS";
			this->l2OS->Size = System::Drawing::Size(177, 17);
			this->l2OS->TabIndex = 6;
			this->l2OS->Text = L"Операционная система:  ";
			// 
			// l3OS
			// 
			this->l3OS->AutoSize = true;
			this->l3OS->Location = System::Drawing::Point(6, 29);
			this->l3OS->Name = L"l3OS";
			this->l3OS->Size = System::Drawing::Size(88, 17);
			this->l3OS->TabIndex = 7;
			this->l3OS->Text = L"Процессор: ";
			// 
			// l4OS
			// 
			this->l4OS->AutoSize = true;
			this->l4OS->Location = System::Drawing::Point(6, 59);
			this->l4OS->Name = L"l4OS";
			this->l4OS->Size = System::Drawing::Size(212, 17);
			this->l4OS->TabIndex = 8;
			this->l4OS->Text = L"Количество ядер процессора: ";
			// 
			// l5OS
			// 
			this->l5OS->AutoSize = true;
			this->l5OS->Location = System::Drawing::Point(6, 29);
			this->l5OS->Name = L"l5OS";
			this->l5OS->Size = System::Drawing::Size(95, 17);
			this->l5OS->TabIndex = 9;
			this->l5OS->Text = L"Видеокарта: ";
			// 
			// l6OS
			// 
			this->l6OS->AutoSize = true;
			this->l6OS->Location = System::Drawing::Point(6, 29);
			this->l6OS->Name = L"l6OS";
			this->l6OS->Size = System::Drawing::Size(0, 17);
			this->l6OS->TabIndex = 10;
			// 
			// bApp
			// 
			this->bApp->Location = System::Drawing::Point(13, 349);
			this->bApp->Name = L"bApp";
			this->bApp->Size = System::Drawing::Size(174, 56);
			this->bApp->TabIndex = 18;
			this->bApp->Text = L"Запущенные приложения";
			this->bApp->UseVisualStyleBackColor = true;
			this->bApp->Click += gcnew System::EventHandler(this, &MyForm::bApp_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->l1OS);
			this->groupBox1->Controls->Add(this->l2OS);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(442, 122);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Общая информация";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->l3OS);
			this->groupBox2->Controls->Add(this->l4OS);
			this->groupBox2->Controls->Add(this->lblCPU);
			this->groupBox2->Location = System::Drawing::Point(461, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(442, 122);
			this->groupBox2->TabIndex = 20;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Процессор";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->lblMem2);
			this->groupBox3->Controls->Add(this->lblMem);
			this->groupBox3->Controls->Add(this->lblMem1);
			this->groupBox3->Location = System::Drawing::Point(12, 140);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(442, 122);
			this->groupBox3->TabIndex = 21;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Оперативная память";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->l5OS);
			this->groupBox4->Location = System::Drawing::Point(13, 269);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(441, 63);
			this->groupBox4->TabIndex = 22;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Графический процессор:";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->l6OS);
			this->groupBox5->Location = System::Drawing::Point(461, 141);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(442, 191);
			this->groupBox5->TabIndex = 23;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Диски: ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(567, 358);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 47);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Информация";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(743, 358);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 47);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(919, 422);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->bApp);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"System Stat";
			this->Shown += gcnew System::EventHandler(this, &MyForm::MyForm_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->performanceCounter1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->performanceCounter2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->performanceCounter3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		public: int flagi = 0;

	private: Apps^ Appls;
	private: Info^ Infos;

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		// Загрузка процессора
		lblCPU->Text = "Загрузка процессора: " + (int)(performanceCounter1->NextValue()) + "%";
		int mem = (int)(performanceCounter2->NextValue());

		// Количество свободной оперативной памяти
		lblMem->Text = "Доступно памяти: " + mem + " МБ";

		// Количество используемой памяти и ее общее количество
		double proc = 100 - performanceCounter3->NextValue();
		int pr = performanceCounter2->NextValue() / proc;
		int isp = pr * performanceCounter3->NextValue();
		lblMem2->Text = "Используется памяти: " + isp + " МБ";
		int sum = pr * 100 / 1024;
		lblMem1->Text = "Всего памяти: " + sum + " ГБ";
	}

	   // Проверка операционной системы
	   String^ GetOsVersionName()
	   {
		  /* if (IsWindows10OrGreater())
		   {
			   return "10";
		   }
		   if (IsWindows8Point1OrGreater())
		   {
			   return "8.1";
		   }
		   if (IsWindows8OrGreater())
		   {
			   return "8";
		   }
		   if (IsWindows7OrGreater())
		   {
			   return "7";
		   }
		   if (IsWindowsVistaOrGreater())
		   {
			   return "Vista";
		   }
		   if (IsWindowsXPOrGreater())
		   {
			   return "XP";
		   }
		   return "Unknown";
		   */

		   OSVERSIONINFO info;
		   ZeroMemory(&info, sizeof(OSVERSIONINFO));
		   info.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);

		   GetVersionEx(&info);

		   std::string version = std::to_string(info.dwMajorVersion);
		   version.append(".").append(std::to_string(info.dwMinorVersion));

		   if (IsWindows7SP1OrGreater()) {
			   if (version == "7")
				   return "7";
		   }

		   if (IsWindows8Point1OrGreater())
			   return "8.1";
		   else
			   return "10";
	   }



private: System::Void bApp_Click(System::Object^ sender, System::EventArgs^ e) {
	Appls->ShowDialog(this);
}

private: System::Void MyForm_Shown(System::Object^ sender, System::EventArgs^ e) {
	if (flagi == 0)
	{
		// Имя компьютера
		SYSTEM_INFO lpSystemInfo;
		GetSystemInfo(&lpSystemInfo);
		TCHAR Compname[20];
		DWORD namesize = 20;
		GetComputerName(Compname, &namesize);

		for (int i = 0; i < 20; i++)
		{
			if (Compname[i] == '\0') break;
			l1OS->Text = (l1OS->Text) + Compname[i];
		}

		// Версия операционной системы
		String^ osVersionName = GetOsVersionName();
		l2OS->Text = (l2OS->Text) + "Windows " + osVersionName;

		// Информация о процессоре
		std::string a = Infa();
		String^ c = gcnew System::String(a.c_str());
		l3OS->Text = (l3OS->Text) + c;

		// Количество ядер процессора
		l4OS->Text = (l4OS->Text) + lpSystemInfo.dwNumberOfProcessors;

		// Информация о видеокарте
		DISPLAY_DEVICE lpDisplayDevice;
		DWORD dwFlags;
		DWORD cc;

		lpDisplayDevice.cb = sizeof(lpDisplayDevice);
		dwFlags = 0;
		cc = 0;
		EnumDisplayDevices(NULL, cc, &lpDisplayDevice, dwFlags);

		WCHAR* as = lpDisplayDevice.DeviceString;
		std::wstring ws(as);
		std::string sa(ws.begin(), ws.end());
		String^ asa = gcnew System::String(sa.c_str());
		l5OS->Text = (l5OS->Text) + Convert::ToString(asa);

		// Информация о дисках
		int sz = GetLogicalDriveStrings(NULL, 0);
		TCHAR* szLogicalDrives = new TCHAR[sz];
		GetLogicalDriveStrings(sz, szLogicalDrives);
		while (*szLogicalDrives)
		{
			TCHAR szDisk[80];
			lstrcpy(szDisk, szLogicalDrives);
			GetDriveType(szDisk);
			UINT uDriveType = GetDriveType(szDisk);
			if (uDriveType == DRIVE_FIXED)
			{
				for (int i = 0; i < 80; i++)
				{
					if (szDisk[i] == '\0') break;
					l6OS->Text = (l6OS->Text) + szDisk[i];
				}
				//определяем объем      
				__int64 uliTotalBytes, FreeCall, FreeBytes;
				GetDiskFreeSpaceEx(szDisk, (PULARGE_INTEGER)&FreeCall, (PULARGE_INTEGER)&uliTotalBytes, (PULARGE_INTEGER)&FreeBytes);
				int TotalB = uliTotalBytes / (1024 * 1024 * 1024);
				int Free = FreeBytes / (1024 * 1024 * 1024);
				int TotalA, FreeA;
				if (TotalB > 0)
				{
					l6OS->Text = (l6OS->Text) + "Объем: " + Convert::ToString(TotalB) + " ГБ. Свободно: " + Convert::ToString(Free) + " ГБ" + "\n";
				}
				else
				{
					TotalA = uliTotalBytes / (1024 * 1024);
					FreeA = FreeBytes / (1024 * 1024);
					l6OS->Text = (l6OS->Text) + "Объем: " + Convert::ToString(TotalA) + " МБ. Свободно: " + Convert::ToString(FreeA) + " МБ" + "\n";
				}
			}
			while (*szLogicalDrives) szLogicalDrives++;
			szLogicalDrives++;
		}

		flagi = 1;
	}
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Infos->ShowDialog(this);
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
