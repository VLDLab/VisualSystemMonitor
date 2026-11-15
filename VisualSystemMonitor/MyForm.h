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

	private: System::Windows::Forms::Label^ info_window;

	private: System::Windows::Forms::Button^ btn_author;
	private: System::Windows::Forms::Button^ btn_system;
	private: System::Windows::Forms::Label^ vldlab;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartCPU;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartMemory;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartGPU;
	private: System::Windows::Forms::Timer^ updateTimer;






	protected:

	private:
		[System::Runtime::InteropServices::DllImport("gdi32.dll")]
			static System::IntPtr CreateRoundRectRgn(int nLeftRect, int nTopRect, int nRightRect, int nBottomRect, int nWidthEllipse, int nHeightEllipse);
			
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_network = (gcnew System::Windows::Forms::Button());
			this->btn_disc = (gcnew System::Windows::Forms::Button());
			this->btn_memory = (gcnew System::Windows::Forms::Button());
			this->btn_cpu = (gcnew System::Windows::Forms::Button());
			this->info_window = (gcnew System::Windows::Forms::Label());
			this->btn_author = (gcnew System::Windows::Forms::Button());
			this->btn_system = (gcnew System::Windows::Forms::Button());
			this->vldlab = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_network
			// 
			this->btn_network->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->btn_network->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_network->FlatAppearance->BorderSize = 0;
			this->btn_network->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_network->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_network->ForeColor = System::Drawing::Color::White;
			this->btn_network->Location = System::Drawing::Point(60, 431);
			this->btn_network->Name = L"btn_network";
			this->btn_network->Size = System::Drawing::Size(191, 81);
			this->btn_network->TabIndex = 1;
			this->btn_network->Text = L"Network\ninformation";
			this->btn_network->UseVisualStyleBackColor = false;
			this->btn_network->Click += gcnew System::EventHandler(this, &MyForm::btn_network_Click);
			// 
			// btn_disc
			// 
			this->btn_disc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->btn_disc->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_disc->FlatAppearance->BorderSize = 0;
			this->btn_disc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_disc->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_disc->ForeColor = System::Drawing::Color::White;
			this->btn_disc->Location = System::Drawing::Point(60, 344);
			this->btn_disc->Name = L"btn_disc";
			this->btn_disc->Size = System::Drawing::Size(191, 81);
			this->btn_disc->TabIndex = 2;
			this->btn_disc->Text = L"Disk information";
			this->btn_disc->UseVisualStyleBackColor = false;
			this->btn_disc->Click += gcnew System::EventHandler(this, &MyForm::btn_disc_Click);
			// 
			// btn_memory
			// 
			this->btn_memory->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->btn_memory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_memory->FlatAppearance->BorderSize = 0;
			this->btn_memory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_memory->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_memory->ForeColor = System::Drawing::Color::White;
			this->btn_memory->Location = System::Drawing::Point(60, 257);
			this->btn_memory->Name = L"btn_memory";
			this->btn_memory->Size = System::Drawing::Size(191, 81);
			this->btn_memory->TabIndex = 3;
			this->btn_memory->Text = L"Memory\ninformation";
			this->btn_memory->UseVisualStyleBackColor = false;
			this->btn_memory->Click += gcnew System::EventHandler(this, &MyForm::btn_memory_Click);
			// 
			// btn_cpu
			// 
			this->btn_cpu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->btn_cpu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_cpu->FlatAppearance->BorderSize = 0;
			this->btn_cpu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cpu->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cpu->ForeColor = System::Drawing::Color::White;
			this->btn_cpu->Location = System::Drawing::Point(60, 170);
			this->btn_cpu->Name = L"btn_cpu";
			this->btn_cpu->Size = System::Drawing::Size(191, 81);
			this->btn_cpu->TabIndex = 4;
			this->btn_cpu->Text = L"Processor\ninformation";
			this->btn_cpu->UseVisualStyleBackColor = false;
			this->btn_cpu->Click += gcnew System::EventHandler(this, &MyForm::btn_cpu_Click);
			// 
			// info_window
			// 
			this->info_window->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->info_window->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->info_window->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->info_window->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->info_window->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->info_window->Location = System::Drawing::Point(324, 78);
			this->info_window->Name = L"info_window";
			this->info_window->Size = System::Drawing::Size(448, 434);
			this->info_window->TabIndex = 6;
			// 
			// btn_author
			// 
			this->btn_author->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->btn_author->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_author->FlatAppearance->BorderSize = 0;
			this->btn_author->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_author->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 13.8F));
			this->btn_author->ForeColor = System::Drawing::Color::White;
			this->btn_author->Location = System::Drawing::Point(60, 518);
			this->btn_author->Name = L"btn_author";
			this->btn_author->Size = System::Drawing::Size(191, 81);
			this->btn_author->TabIndex = 8;
			this->btn_author->Text = L"About ";
			this->btn_author->UseVisualStyleBackColor = false;
			this->btn_author->Click += gcnew System::EventHandler(this, &MyForm::btn_author_Click);
			// 
			// btn_system
			// 
			this->btn_system->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->btn_system->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_system->FlatAppearance->BorderSize = 0;
			this->btn_system->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_system->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_system->ForeColor = System::Drawing::Color::White;
			this->btn_system->Location = System::Drawing::Point(60, 83);
			this->btn_system->Name = L"btn_system";
			this->btn_system->Size = System::Drawing::Size(191, 81);
			this->btn_system->TabIndex = 9;
			this->btn_system->Text = L"General Info";
			this->btn_system->UseVisualStyleBackColor = false;
			this->btn_system->Click += gcnew System::EventHandler(this, &MyForm::btn_system_Click);
			// 
			// vldlab
			// 
			this->vldlab->AutoSize = true;
			this->vldlab->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vldlab->ForeColor = System::Drawing::Color::White;
			this->vldlab->Location = System::Drawing::Point(57, 27);
			this->vldlab->Name = L"vldlab";
			this->vldlab->Size = System::Drawing::Size(194, 31);
			this->vldlab->TabIndex = 5;
			this->vldlab->Text = L"System Monitor";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->panel1->Location = System::Drawing::Point(306, 63);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(481, 462);
			this->panel1->TabIndex = 10;
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Transparent;
			chartArea1->AxisX->MajorGrid->Enabled = false;
			chartArea1->AxisY->MajorGrid->Enabled = false;
			chartArea1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(851, 46);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(225, 149);
			this->chart1->TabIndex = 11;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// chart2
			// 
			this->chart2->BackColor = System::Drawing::Color::Transparent;
			chartArea2->AxisX->MajorGrid->Enabled = false;
			chartArea2->AxisY->MajorGrid->Enabled = false;
			chartArea2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Enabled = false;
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(851, 214);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(225, 149);
			this->chart2->TabIndex = 12;
			this->chart2->Text = L"chart2";
			this->chart2->Click += gcnew System::EventHandler(this, &MyForm::chart2_Click);
			// 
			// chart3
			// 
			this->chart3->BackColor = System::Drawing::Color::Transparent;
			chartArea3->AxisX->MajorGrid->Enabled = false;
			chartArea3->AxisY->MajorGrid->Enabled = false;
			chartArea3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Enabled = false;
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(851, 376);
			this->chart3->Name = L"chart3";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart3->Series->Add(series3);
			this->chart3->Size = System::Drawing::Size(225, 149);
			this->chart3->TabIndex = 13;
			this->chart3->Text = L"chart3";
			this->chart3->Click += gcnew System::EventHandler(this, &MyForm::chart3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(948, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 31);
			this->label1->TabIndex = 14;
			this->label1->Text = L"CPU";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(929, 193);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 31);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Memory";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(946, 357);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 31);
			this->label3->TabIndex = 16;
			this->label3->Text = L"GPU";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->ClientSize = System::Drawing::Size(1108, 630);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->btn_system);
			this->Controls->Add(this->btn_author);
			this->Controls->Add(this->info_window);
			this->Controls->Add(this->vldlab);
			this->Controls->Add(this->btn_cpu);
			this->Controls->Add(this->btn_memory);
			this->Controls->Add(this->btn_disc);
			this->Controls->Add(this->btn_network);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"System Monitor";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {


		this->panel1->Region = System::Drawing::Region::FromHrgn(CreateRoundRectRgn(0, 0, this->panel1->Width, this->panel1->Height, 20, 20));
		this->info_window->Region = System::Drawing::Region::FromHrgn(CreateRoundRectRgn(0, 0, this->info_window->Width, this->info_window->Height, 15, 15));
		int btnW = this->btn_cpu->Width;
		int btnH = this->btn_cpu->Height;

		this->btn_cpu->Region = System::Drawing::Region::FromHrgn(CreateRoundRectRgn(0, 0, btnW, btnH, 34, 34));
		this->btn_memory->Region = System::Drawing::Region::FromHrgn(CreateRoundRectRgn(0, 0, btnW, btnH, 34, 34));
		this->btn_disc->Region = System::Drawing::Region::FromHrgn(CreateRoundRectRgn(0, 0, btnW, btnH, 34, 34));
		this->btn_network->Region = System::Drawing::Region::FromHrgn(CreateRoundRectRgn(0, 0, btnW, btnH, 34, 34));
		this->btn_system->Region = System::Drawing::Region::FromHrgn(CreateRoundRectRgn(0, 0, btnW, btnH, 34, 34));
		this->btn_author->Region = System::Drawing::Region::FromHrgn(CreateRoundRectRgn(0, 0, btnW, btnH, 34, 34));

		this->updateTimer = (gcnew System::Windows::Forms::Timer());
		this->updateTimer->Interval = 1000; // обновление каждую секунду
		this->updateTimer->Tick += gcnew System::EventHandler(this, &MyForm::updateTimer_Tick);
		this->updateTimer->Start();


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
private: System::Void chart3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void chart2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void updateTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	// Создаем генератор без ключевого слова static, чтобы C++/CLI не ругался
	System::Random^ rand = gcnew System::Random();

	double cpuVal = rand->Next(10, 90);
	double memVal = rand->Next(30, 80);
	double gpuVal = rand->Next(5, 70);

	// --- ОБНОВЛЯЕМ chart1 (CPU) ---
	if (this->chart1 != nullptr) {
		this->chart1->Series["Series1"]->Points->AddY(cpuVal);
		if (this->chart1->Series["Series1"]->Points->Count > 20) {
			this->chart1->Series["Series1"]->Points->RemoveAt(0);
		}
	}

	// --- ОБНОВЛЯЕМ chart2 (Memory) ---
	if (this->chart2 != nullptr) {
		this->chart2->Series["Series1"]->Points->AddY(memVal);
		if (this->chart2->Series["Series1"]->Points->Count > 20) {
			this->chart2->Series["Series1"]->Points->RemoveAt(0);
		}
	}

	// --- ОБНОВЛЯЕМ chart3 (GPU) ---
	if (this->chart3 != nullptr) {
		this->chart3->Series["Series1"]->Points->AddY(gpuVal);
		if (this->chart3->Series["Series1"]->Points->Count > 20) {
			this->chart3->Series["Series1"]->Points->RemoveAt(0);
		}
	}

}
};
}
