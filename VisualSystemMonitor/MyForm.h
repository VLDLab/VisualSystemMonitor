#pragma once

#ifndef NOMINMAX
#define NOMINMAX
#endif

#include <winsock2.h>
#include <ws2tcpip.h>
#include <windows.h>
#pragma comment(lib, "ws2_32.lib")

#include <filesystem>

namespace VisualSystemMonitor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::Text;

	namespace fs = std::filesystem;


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
			this->info_window->Text = "";
			this->info_window->Text += "______________888888888888____________________\n";
			this->info_window->Text += "_____________8888888888888888888__________________\n";
			this->info_window->Text += "__________18888888888888888888888888______________\n";
			this->info_window->Text += "________88888888888888888888888888888__8__________\n";
			this->info_window->Text += "_______888888888888-Elites-888888888888_________\n";
			this->info_window->Text += "_______88888888888888888888888888______888________\n";
			this->info_window->Text += "______88888888888888888888888888888888___86_______\n";
			this->info_window->Text += "_______8888888888888____88888888865888888_8_______\n";
			this->info_window->Text += "_____8_8888888_8888881__88888___________88________\n";
			this->info_window->Text += "_____88________8888888888888_____________8________\n";
			this->info_window->Text += "______888____8888__888:8886_______________8_______\n";
			this->info_window->Text += "________8:_8888__________88_______________88______\n";
			this->info_window->Text += "_____8__58_88____________8888____________888888___\n";
			this->info_window->Text += "______8__888_____________:8_888_______688888888___\n";
			this->info_window->Text += "__________88____________88____:8888888888888888___\n";
			this->info_window->Text += "___________8__________:888______8888888____88_____\n";
			this->info_window->Text += "____________8________888888______8888____________\n";
			this->info_window->Text += "____________888888888888888___18888888___________\n";
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

	private: System::Windows::Forms::Button^ btn_network;
	protected:


	private: System::Windows::Forms::Button^ btn_disc;

	private: System::Windows::Forms::Button^ btn_memory;

	private: System::Windows::Forms::Button^ btn_cpu;
	private: System::Windows::Forms::Label^ vldlab;
	private: System::Windows::Forms::Label^ info_window;
	private: System::Windows::Forms::Button^ btn_close;
	private: System::Windows::Forms::Button^ btn_author;
	private: System::Windows::Forms::Button^ btn_system;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_network = (gcnew System::Windows::Forms::Button());
			this->btn_disc = (gcnew System::Windows::Forms::Button());
			this->btn_memory = (gcnew System::Windows::Forms::Button());
			this->btn_cpu = (gcnew System::Windows::Forms::Button());
			this->vldlab = (gcnew System::Windows::Forms::Label());
			this->info_window = (gcnew System::Windows::Forms::Label());
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->btn_author = (gcnew System::Windows::Forms::Button());
			this->btn_system = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_network
			// 
			this->btn_network->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_network->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn_network->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_network->Location = System::Drawing::Point(506, 122);
			this->btn_network->Name = L"btn_network";
			this->btn_network->Size = System::Drawing::Size(191, 81);
			this->btn_network->TabIndex = 1;
			this->btn_network->Text = L"Показать информацию о сети";
			this->btn_network->UseVisualStyleBackColor = true;
			this->btn_network->Click += gcnew System::EventHandler(this, &MyForm::btn_network_Click);
			// 
			// btn_disc
			// 
			this->btn_disc->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_disc->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn_disc->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_disc->Location = System::Drawing::Point(84, 122);
			this->btn_disc->Name = L"btn_disc";
			this->btn_disc->Size = System::Drawing::Size(191, 81);
			this->btn_disc->TabIndex = 2;
			this->btn_disc->Text = L"Показать информацию о дисках";
			this->btn_disc->UseVisualStyleBackColor = true;
			this->btn_disc->Click += gcnew System::EventHandler(this, &MyForm::btn_disc_Click);
			// 
			// btn_memory
			// 
			this->btn_memory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_memory->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn_memory->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_memory->Location = System::Drawing::Point(506, 26);
			this->btn_memory->Name = L"btn_memory";
			this->btn_memory->Size = System::Drawing::Size(191, 81);
			this->btn_memory->TabIndex = 3;
			this->btn_memory->Text = L"Показать информацию о памяти";
			this->btn_memory->UseVisualStyleBackColor = true;
			this->btn_memory->Click += gcnew System::EventHandler(this, &MyForm::btn_memory_Click);
			// 
			// btn_cpu
			// 
			this->btn_cpu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_cpu->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn_cpu->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_cpu->Location = System::Drawing::Point(293, 26);
			this->btn_cpu->Name = L"btn_cpu";
			this->btn_cpu->Size = System::Drawing::Size(191, 81);
			this->btn_cpu->TabIndex = 4;
			this->btn_cpu->Text = L"Показать информацию о процессоре";
			this->btn_cpu->UseVisualStyleBackColor = true;
			this->btn_cpu->Click += gcnew System::EventHandler(this, &MyForm::btn_cpu_Click);
			// 
			// vldlab
			// 
			this->vldlab->AutoSize = true;
			this->vldlab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->vldlab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->vldlab->Location = System::Drawing::Point(336, 142);
			this->vldlab->Name = L"vldlab";
			this->vldlab->Size = System::Drawing::Size(108, 32);
			this->vldlab->TabIndex = 5;
			this->vldlab->Text = L"VLDlab";
			// 
			// info_window
			// 
			this->info_window->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->info_window->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->info_window->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->info_window->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->info_window->Location = System::Drawing::Point(81, 225);
			this->info_window->Name = L"info_window";
			this->info_window->Size = System::Drawing::Size(616, 363);
			this->info_window->TabIndex = 6;
			// 
			// btn_close
			// 
			this->btn_close->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_close->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn_close->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_close->Location = System::Drawing::Point(84, 603);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(115, 49);
			this->btn_close->TabIndex = 7;
			this->btn_close->Text = L"Закрыть";
			this->btn_close->UseVisualStyleBackColor = true;
			this->btn_close->Click += gcnew System::EventHandler(this, &MyForm::btn_close_Click);
			// 
			// btn_author
			// 
			this->btn_author->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_author->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn_author->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_author->Location = System::Drawing::Point(582, 603);
			this->btn_author->Name = L"btn_author";
			this->btn_author->Size = System::Drawing::Size(115, 49);
			this->btn_author->TabIndex = 8;
			this->btn_author->Text = L"Про автора";
			this->btn_author->UseVisualStyleBackColor = true;
			this->btn_author->Click += gcnew System::EventHandler(this, &MyForm::btn_author_Click);
			// 
			// btn_system
			// 
			this->btn_system->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_system->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn_system->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_system->Location = System::Drawing::Point(81, 26);
			this->btn_system->Name = L"btn_system";
			this->btn_system->Size = System::Drawing::Size(191, 81);
			this->btn_system->TabIndex = 9;
			this->btn_system->Text = L"Показать информацию о системе";
			this->btn_system->UseVisualStyleBackColor = true;
			this->btn_system->Click += gcnew System::EventHandler(this, &MyForm::btn_system_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(123)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->ClientSize = System::Drawing::Size(766, 664);
			this->Controls->Add(this->btn_system);
			this->Controls->Add(this->btn_author);
			this->Controls->Add(this->btn_close);
			this->Controls->Add(this->info_window);
			this->Controls->Add(this->vldlab);
			this->Controls->Add(this->btn_cpu);
			this->Controls->Add(this->btn_memory);
			this->Controls->Add(this->btn_disc);
			this->Controls->Add(this->btn_network);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"System Monitor";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void btn_close_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btn_author_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		System::Diagnostics::ProcessStartInfo^ psi = gcnew System::Diagnostics::ProcessStartInfo("https://github.com/VLDLab");
		psi->UseShellExecute = true; 

		System::Diagnostics::Process::Start(psi);
	}
	catch (System::Exception^ ex)
	{
		System::Windows::Forms::MessageBox::Show("Не удалось открыть ссылку: " + ex->Message);
	}
}
private: System::Void btn_system_Click(System::Object^ sender, System::EventArgs^ e) {
	SYSTEM_INFO sysInfo;
	GetSystemInfo(&sysInfo);
		
	this->info_window->Text = "";
	this->info_window->Text += "-------------------------\n";
	this->info_window->Text += "Имя компьютера: " + System::Environment::MachineName + "\n";
	this->info_window->Text += "Процессор: " + sysInfo.dwProcessorType + "\n";
	this->info_window->Text += "Количество процессоров: " + sysInfo.dwNumberOfProcessors + "\n";
	this->info_window->Text += "Общий объем физической памяти: " + (System::Int64)sysInfo.dwNumberOfProcessors * 4 + " ГБ\n";
	this->info_window->Text += "Размер страницы: " + sysInfo.dwPageSize + " Байт\n";
	this->info_window->Text += "Маска процессора: " + sysInfo.dwActiveProcessorMask + "\n";
	this->info_window->Text += "Уровень процессора: " + sysInfo.wProcessorLevel + "\n";
	this->info_window->Text += "Ревизия процессора: " + sysInfo.wProcessorRevision + "\n";
	this->info_window->Text += "-------------------------\n";

	

}

private: System::Void btn_cpu_Click(System::Object^ sender, System::EventArgs^ e) {
	SYSTEM_INFO sysInfo;
	GetSystemInfo(&sysInfo);
	
	this->info_window->Text = "";
	this->info_window->Text += "-------------------------\n";

	if (sysInfo.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_AMD64) {
		this->info_window->Text += "Процессор: x64" + "\n";
	}
	else if (sysInfo.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_INTEL) {
		this->info_window->Text += "Процессор: x86" + "\n";
	}
	else if (sysInfo.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_ARM) {
		this->info_window->Text += "Процессор: ARM" + "\n";
	}
	else {
		this->info_window->Text += "Процессор: неизвестно" + "\n";
	}

	this->info_window->Text += "Количество процессоров: " + sysInfo.dwNumberOfProcessors + "\n";
	this->info_window->Text += "Маска процессора: " + sysInfo.dwActiveProcessorMask + "\n";
	this->info_window->Text += "Уровень процессора: " + sysInfo.wProcessorLevel + "\n";
	this->info_window->Text += "Тип процессора: " + sysInfo.dwProcessorType + "\n";
	this->info_window->Text += "Ревизия процессора: " + sysInfo.wProcessorRevision + "\n";
	this->info_window->Text += "-------------------------\n";

}
private: System::Void btn_memory_Click(System::Object^ sender, System::EventArgs^ e) {
	MEMORYSTATUSEX memStatus;
	memStatus.dwLength = sizeof(memStatus);

	this->info_window->Text = "";
	this->info_window->Text += "-------------------------\n";

	if (GlobalMemoryStatusEx(&memStatus)) {
		this->info_window->Text += "Общий объем физической памяти: " + memStatus.ullTotalPhys / (1024 * 1024) + " МБ\n";
		this->info_window->Text += "Доступная физическая память: " + memStatus.ullAvailPhys / (1024 * 1024) + " МБ\n";
		this->info_window->Text += "Общий объем виртуальной памяти: " + memStatus.ullTotalVirtual / (1024 * 1024) + " МБ\n";
		this->info_window->Text += "Доступная виртуальная память: " + memStatus.ullAvailVirtual / (1024 * 1024) + " МБ\n";
	}
	else {
		this->info_window->Text += "Ошибка при получении информации о памяти." + "\n";
	}
	this->info_window->Text += "-------------------------\n";
}
private: System::Void btn_disc_Click(System::Object^ sender, System::EventArgs^ e) {
	fs::path p = "C:\\";

	try {

		fs::space_info inf = fs::space(p);

		this->info_window->Text = "";
		this->info_window->Text += "-------------------------\n";
		this->info_window->Text += "Общий объем диска: " + inf.capacity / (1024 * 1024 * 1024) + " ГБ\n";
		this->info_window->Text += "Доступное место на диске: " + inf.available / (1024 * 1024 * 1024) + " ГБ\n";
		this->info_window->Text += "-------------------------\n";
	}
	catch (const fs::filesystem_error& e) {
		this->info_window->ForeColor = System::Drawing::Color::Red;
		this->info_window->Text += "Ошибка: " + gcnew System::String(e.what()) + "\n";
	}
}
private: System::Void btn_network_Click(System::Object^ sender, System::EventArgs^ e) {
	WSADATA wsaData;

	this->info_window->Text = "";
	this->info_window->Text += "-------------------------\n";

	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
		this->info_window->Text += "Ошибка инициализации Winsock.\n";
		return;
	}

	char hostname[256];
	if (gethostname(hostname, sizeof(hostname)) == SOCKET_ERROR) {
		this->info_window->Text += "Ошибка получения имени хоста.\n";
		WSACleanup();
		return;
	}

	this->info_window->Text += "Имя компьютера (Hostname): " + gcnew System::String(hostname) + "\n";

	addrinfo hints = {};
	hints.ai_family = AF_INET;
	addrinfo* res = nullptr;

	if (getaddrinfo(hostname, nullptr, &hints, &res) == 0) {
		for (addrinfo* ptr = res; ptr != nullptr; ptr = ptr->ai_next) {
			sockaddr_in* sockaddr_ipv4 = reinterpret_cast<sockaddr_in*>(ptr->ai_addr);
			char ipStr[INET_ADDRSTRLEN];
			inet_ntop(AF_INET, &(sockaddr_ipv4->sin_addr), ipStr, sizeof(ipStr));

			this->info_window->Text += "IP-адрес (IPv4): " + gcnew System::String(ipStr) + "\n";
		}
		freeaddrinfo(res);
	}
	else {
		this->info_window->Text += "Не удалось получить IP-адрес.\n";
	}

	WSACleanup();
	this->info_window->Text += "-------------------------\n";
}
};
}
