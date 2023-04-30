//#pragma once
//#include <math.h>
//#include <stdlib.h>
//#include<ctime>
//#include <thread>
//#include "windows.h"
//namespace Rendering {
//
//	using namespace System;
//	using namespace System::ComponentModel;
//	using namespace System::Collections;
//	using namespace System::Windows::Forms;
//	using namespace System::Data;
//	using namespace System::Drawing;
//
//	/// <summary>
//	/// Сводка для MyForm
//	/// </summary>
//	public ref class MyForm : public System::Windows::Forms::Form
//	{
//	public:
//		MyForm(void)
//		{
//			InitializeComponent();
//			//
//			//TODO: добавьте код конструктора
//			//
//		}
//
//	protected:
//		/// <summary>
//		/// Освободить все используемые ресурсы.
//		/// </summary>
//		~MyForm()
//		{
//			if (components)
//			{
//				delete components;
//			}
//		}
//	private: System::Windows::Forms::Panel^ panel1;
//
//
//
//
//
//	protected:
//
//
//	protected:
//
//	private:
//		/// <summary>
//		/// Обязательная переменная конструктора.
//		/// </summary>
//		System::ComponentModel::Container^ components;
//		Graphics^ graph;
//		Pen^ pen;
//		SolidBrush^ br = gcnew SolidBrush(System::Drawing::Color::Red);
//		//int W;
//
//	private: System::Windows::Forms::Button^ button1;
//	private: System::Windows::Forms::Label^ label1;
//	private: System::Windows::Forms::Label^ label2;
//
//	private: System::Windows::Forms::TextBox^ left_edge_text;
//	private: System::Windows::Forms::TextBox^ right_edge_text;
//
//
//
//
//	private: System::Windows::Forms::Panel^ panel2;
//
//#pragma region Windows Form Designer generated code
//		   /// <summary>
//		   /// Требуемый метод для поддержки конструктора — не изменяйте 
//		   /// содержимое этого метода с помощью редактора кода.
//		   /// </summary>
//		   void InitializeComponent(void)
//		   {
//			   this->panel1 = (gcnew System::Windows::Forms::Panel());
//			   this->button1 = (gcnew System::Windows::Forms::Button());
//			   this->label1 = (gcnew System::Windows::Forms::Label());
//			   this->label2 = (gcnew System::Windows::Forms::Label());
//			   this->left_edge_text = (gcnew System::Windows::Forms::TextBox());
//			   this->right_edge_text = (gcnew System::Windows::Forms::TextBox());
//			   this->panel2 = (gcnew System::Windows::Forms::Panel());
//			   this->panel2->SuspendLayout();
//			   this->SuspendLayout();
//			   // 
//			   // panel1
//			   // 
//			   this->panel1->BackColor = System::Drawing::SystemColors::Info;
//			   this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
//			   this->panel1->Location = System::Drawing::Point(0, 0);
//			   this->panel1->Name = L"panel1";
//			   this->panel1->Size = System::Drawing::Size(717, 534);
//			   this->panel1->TabIndex = 0;
//			   // 
//			   // button1
//			   // 
//			   this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
//			   this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
//			   this->button1->Cursor = System::Windows::Forms::Cursors::Default;
//			   this->button1->Location = System::Drawing::Point(21, 326);
//			   this->button1->Name = L"button1";
//			   this->button1->Size = System::Drawing::Size(169, 50);
//			   this->button1->TabIndex = 0;
//			   this->button1->Text = L"Draw!";
//			   this->button1->UseVisualStyleBackColor = false;
//			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
//			   // 
//			   // label1
//			   // 
//			   this->label1->AutoSize = true;
//			   this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
//			   this->label1->Location = System::Drawing::Point(18, 27);
//			   this->label1->Name = L"label1";
//			   this->label1->Size = System::Drawing::Size(49, 17);
//			   this->label1->TabIndex = 11;
//			   this->label1->Text = L"X(min)";
//			   // 
//			   // label2
//			   // 
//			   this->label2->AutoSize = true;
//			   this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
//			   this->label2->Location = System::Drawing::Point(18, 75);
//			   this->label2->Name = L"label2";
//			   this->label2->Size = System::Drawing::Size(52, 17);
//			   this->label2->TabIndex = 12;
//			   this->label2->Text = L"X(max)";
//			   // 
//			   // left_edge_text
//			   // 
//			   this->left_edge_text->Location = System::Drawing::Point(76, 27);
//			   this->left_edge_text->Name = L"left_edge_text";
//			   this->left_edge_text->Size = System::Drawing::Size(100, 22);
//			   this->left_edge_text->TabIndex = 14;
//			   this->left_edge_text->Text = L"1";
//			   // 
//			   // right_edge_text
//			   // 
//			   this->right_edge_text->Location = System::Drawing::Point(76, 75);
//			   this->right_edge_text->Name = L"right_edge_text";
//			   this->right_edge_text->Size = System::Drawing::Size(100, 22);
//			   this->right_edge_text->TabIndex = 15;
//			   this->right_edge_text->Text = L"3";
//			   // 
//			   // panel2
//			   // 
//			   this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
//			   this->panel2->Controls->Add(this->right_edge_text);
//			   this->panel2->Controls->Add(this->left_edge_text);
//			   this->panel2->Controls->Add(this->label2);
//			   this->panel2->Controls->Add(this->label1);
//			   this->panel2->Controls->Add(this->button1);
//			   this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
//			   this->panel2->Location = System::Drawing::Point(725, 0);
//			   this->panel2->Name = L"panel2";
//			   this->panel2->Size = System::Drawing::Size(215, 534);
//			   this->panel2->TabIndex = 1;
//			   // 
//			   // MyForm
//			   // 
//			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
//			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
//			   this->ClientSize = System::Drawing::Size(940, 534);
//			   this->Controls->Add(this->panel2);
//			   this->Controls->Add(this->panel1);
//			   this->Name = L"MyForm";
//			   this->Text = L"Motion animation";
//			   this->panel2->ResumeLayout(false);
//			   this->panel2->PerformLayout();
//			   this->ResumeLayout(false);
//
//		   }
//#pragma endregion
//
//	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
//		//Выбор кистей
//		Pen^ red = gcnew Pen(System::Drawing::Color::Red, 2.0F);
//		SolidBrush^ br = gcnew SolidBrush(System::Drawing::Color::Red);
//		SolidBrush^ br1 = gcnew SolidBrush(System::Drawing::Color::Blue);
//
//		//Объявление переменных для рисования пластины
//		double panel_height = panel1->Height;
//		double panel_width = panel1->Width;
//
//		// физические координаты частицы по ширине пластины
//		float X_min = Convert::ToDouble(left_edge_text->Text);
//		float X_max = Convert::ToDouble(right_edge_text->Text);
//
//		//Физическая высота пластинки
//		float Y_min = -500;
//		float Y_max = 500;
//
//		double x_min = 0, x_max = panel1->Width, y_min = 0, y_max = panel1->Width; // экранные координаты частицы
//		double scale_x, scale_y; // масштабирующие множители
//
//		scale_x = (x_max - x_min) / (X_max - X_min);
//		scale_y = (y_max - y_min) / (Y_max - Y_min);
//
//		graph = panel1->CreateGraphics();
//		graph->DrawRectangle(Pens::Black, scale_x*X_min, (float)0, scale_x*(X_max - X_min), (float)panel_height);//Создание пластины
//		for (int i = 0; i < panel_width; i += 20) {
//			System::Windows::Forms::Label^ labels = gcnew System::Windows::Forms::Label;
//			labels->AutoSize = true;
//			labels->Location = System::Drawing::Point(i, panel_height - 15);
//			labels->Name = L"labels" + i;
//			labels->Size = System::Drawing::Size(50, 20);
//			labels->Text = L"" + i / 20;
//			this->panel1->Controls->Add(labels);
//		}
//		for (int i = panel_height; i > 0; i -= 20) {
//			System::Windows::Forms::Label^ labels = gcnew System::Windows::Forms::Label;
//			labels->AutoSize = true;
//			labels->Location = System::Drawing::Point(15, i);
//			labels->Name = L"labels" + i;
//			labels->Size = System::Drawing::Size(20, 20);
//			labels->Text = L"" + i / 20;
//			this->panel1->Controls->Add(labels);
//		}
//		this->panel1->Refresh();
//		//Объявление переменных для перемещения нейтронов и отображения пути на экране
//		float diameter = 10;
//		float x_prev = 0, x_curr = 0;
//		float X_prev = 0, X_curr = 0;
//		float Y_prev = 0, Y_curr = 0;
//
//		float y_prev = panel_height / 2 - diameter / 2, y_curr = y_prev;
//
//		double sin = 0, cos = 0, //lamda = rand() % 20 + diameter;
//
//		
//		scatt = 4;
//		double capt = 758;
//		double sigma = capt + scatt; // B
//
//		double gamma;
//		double lamda;
//
//		srand(time(NULL));
//		graph = panel1->CreateGraphics();
//		graph->Clear(System::Drawing::SystemColors::Info);//Очищаем окно перед рисованием
//		graph->DrawRectangle(Pens::Black, scale_x*X_min, (float)0, scale_x*(X_max - X_min), (float)panel1->Height);//Создание пластины
//		graph->DrawLine(Pens::Black, 5, panel_height, 5, 0);
//		graph->DrawLine(Pens::Black, 1, panel_height - 2, panel_width, panel_height - 2);
//#pragma region Перемещаемся к левой границе пластины
//		graph->FillEllipse(br, x_curr, y_curr, diameter, diameter);
//		graph->DrawLine(red, x_prev, y_prev, x_curr, y_curr);
//		while (scale_x*X_min > x_curr) {
//			//lamda = rand() % 20 + diameter;
//			lamda = 10+diameter;
//			x_curr += lamda;
//			graph->FillEllipse(br1, x_curr, y_curr, diameter, diameter);
//			graph->FillEllipse(br, x_prev, y_prev, diameter, diameter);
//			graph->DrawLine(red, x_prev + diameter / 2, y_prev + diameter / 2, x_curr + diameter / 2, y_curr + diameter / 2);
//			x_prev = x_curr;
//			Sleep(200);
//		}
//#pragma endregion
//
//#pragma region Движение до выхода из пластины
//		while (scale_x*X_min < x_curr && x_curr < scale_x*X_max && y_curr > scale_y * Y_min && y_curr < scale_y * Y_max) {
//			//lamda = rand() % 20 + diameter;
//
//			//lamda = 1 + (double)rand() / RAND_MAX * (0 - 1)+diameter; 
//			if (y_curr < scale_y * Y_min)
//			{
//				graph->Clear(System::Drawing::SystemColors::Info);
//				y_curr = scale_y * Y_max;
//			}
//			else if (y_curr > scale_y * Y_max)
//			{
//				graph->Clear(System::Drawing::SystemColors::Info);
//				y_curr = scale_y * Y_min;
//			}
//			gamma = rand() / (RAND_MAX + 1.); //случайные вещественные числа от 0 до 1 включительно
//			lamda= -log(gamma) / sigma;
//			//cos = 1 + (double)rand() / RAND_MAX * (-1 - 1);//случайные вещественные числа от -1 до 1 включительно
//			//sin = sqrt(1 - cos * cos);
//			cos = 2 * gamma - 1;
//			sin = 2 * sqrt(gamma * (1 - gamma));
//			X_curr += lamda * cos;
//			x_curr += scale_x * X_curr;
//			Y_curr += lamda * sin;
//			y_curr += scale_y * Y_curr;
//			graph->FillEllipse(br1, x_curr, y_curr, diameter, diameter);
//			graph->FillEllipse(br, x_prev, y_prev, diameter, diameter);
//			graph->DrawLine(red, x_prev + diameter / 2, y_prev + diameter / 2, x_curr + diameter / 2, y_curr + diameter / 2);
//			x_prev = x_curr;
//			y_prev = y_curr;
//			X_prev = X_curr;
//			Y_prev = Y_curr;
//			Sleep(200);
//		}
//#pragma endregion
//
//
//	}
//	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
//	}
//	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
//	}
//	};
//}
//#pragma once
//#include <math.h>
//#include <stdlib.h>
//#include<ctime>
//#include <thread>
//#include "windows.h"
//namespace Rendering {
//
//	using namespace System;
//	using namespace System::ComponentModel;
//	using namespace System::Collections;
//	using namespace System::Windows::Forms;
//	using namespace System::Data;
//	using namespace System::Drawing;
//
//	/// <summary>
//	/// Сводка для MyForm
//	/// </summary>
//	public ref class MyForm : public System::Windows::Forms::Form
//	{
//	public:
//		MyForm(void)
//		{
//			InitializeComponent();
//			//
//			//TODO: добавьте код конструктора
//			//
//		}
//
//	protected:
//		/// <summary>
//		/// Освободить все используемые ресурсы.
//		/// </summary>
//		~MyForm()
//		{
//			if (components)
//			{
//				delete components;
//			}
//		}
//	private: System::Windows::Forms::Panel^ panel1;
//
//
//
//
//
//	protected:
//
//
//	protected:
//
//	private:
//		/// <summary>
//		/// Обязательная переменная конструктора.
//		/// </summary>
//		System::ComponentModel::Container^ components;
//		Graphics^ graph;
//		Pen^ pen;
//		SolidBrush^ br = gcnew SolidBrush(System::Drawing::Color::Red);
//		int W;
//
//	private: System::Windows::Forms::Button^ button1;
//	private: System::Windows::Forms::Label^ label1;
//	private: System::Windows::Forms::Label^ label2;
//	private: System::Windows::Forms::Label^ label3;
//	private: System::Windows::Forms::TextBox^ left_edge_text;
//	private: System::Windows::Forms::TextBox^ right_edge_text;
//	private: System::Windows::Forms::TextBox^ width_text;
//
//
//
//	private: System::Windows::Forms::Panel^ panel2;
//
//
//
//
//
//
//
//
//		   Point zen;
//
//#pragma region Windows Form Designer generated code
//		   /// <summary>
//		   /// Требуемый метод для поддержки конструктора — не изменяйте 
//		   /// содержимое этого метода с помощью редактора кода.
//		   /// </summary>
//		   void InitializeComponent(void)
//		   {
//			   this->panel1 = (gcnew System::Windows::Forms::Panel());
//			   this->button1 = (gcnew System::Windows::Forms::Button());
//			   this->label1 = (gcnew System::Windows::Forms::Label());
//			   this->label2 = (gcnew System::Windows::Forms::Label());
//			   this->label3 = (gcnew System::Windows::Forms::Label());
//			   this->left_edge_text = (gcnew System::Windows::Forms::TextBox());
//			   this->right_edge_text = (gcnew System::Windows::Forms::TextBox());
//			   this->width_text = (gcnew System::Windows::Forms::TextBox());
//			   this->panel2 = (gcnew System::Windows::Forms::Panel());
//			   this->panel2->SuspendLayout();
//			   this->SuspendLayout();
//			   // 
//			   // panel1
//			   // 
//			   this->panel1->BackColor = System::Drawing::SystemColors::Info;
//			   this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
//			   this->panel1->Location = System::Drawing::Point(0, 0);
//			   this->panel1->Name = L"panel1";
//			   this->panel1->Size = System::Drawing::Size(719, 534);
//			   this->panel1->TabIndex = 0;
//			   // 
//			   // button1
//			   // 
//			   this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
//			   this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
//			   this->button1->Cursor = System::Windows::Forms::Cursors::Default;
//			   this->button1->Location = System::Drawing::Point(12, 182);
//			   this->button1->Name = L"button1";
//			   this->button1->Size = System::Drawing::Size(169, 50);
//			   this->button1->TabIndex = 0;
//			   this->button1->Text = L"Draw!";
//			   this->button1->UseVisualStyleBackColor = false;
//			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
//			   // 
//			   // label1
//			   // 
//			   this->label1->AutoSize = true;
//			   this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
//			   this->label1->Location = System::Drawing::Point(18, 27);
//			   this->label1->Name = L"label1";
//			   this->label1->Size = System::Drawing::Size(16, 17);
//			   this->label1->TabIndex = 11;
//			   this->label1->Text = L"a";
//			   // 
//			   // label2
//			   // 
//			   this->label2->AutoSize = true;
//			   this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
//			   this->label2->Location = System::Drawing::Point(18, 75);
//			   this->label2->Name = L"label2";
//			   this->label2->Size = System::Drawing::Size(16, 17);
//			   this->label2->TabIndex = 12;
//			   this->label2->Text = L"b";
//			   // 
//			   // label3
//			   // 
//			   this->label3->AutoSize = true;
//			   this->label3->BackColor = System::Drawing::SystemColors::ActiveCaption;
//			   this->label3->Location = System::Drawing::Point(18, 119);
//			   this->label3->Name = L"label3";
//			   this->label3->Size = System::Drawing::Size(40, 17);
//			   this->label3->TabIndex = 13;
//			   this->label3->Text = L"width";
//			   // 
//			   // left_edge_text
//			   // 
//			   this->left_edge_text->Location = System::Drawing::Point(76, 27);
//			   this->left_edge_text->Name = L"left_edge_text";
//			   this->left_edge_text->Size = System::Drawing::Size(100, 22);
//			   this->left_edge_text->TabIndex = 14;
//			   // 
//			   // right_edge_text
//			   // 
//			   this->right_edge_text->Location = System::Drawing::Point(76, 75);
//			   this->right_edge_text->Name = L"right_edge_text";
//			   this->right_edge_text->Size = System::Drawing::Size(100, 22);
//			   this->right_edge_text->TabIndex = 15;
//			   // 
//			   // width_text
//			   // 
//			   this->width_text->Location = System::Drawing::Point(76, 116);
//			   this->width_text->Name = L"width_text";
//			   this->width_text->Size = System::Drawing::Size(100, 22);
//			   this->width_text->TabIndex = 16;
//			   // 
//			   // panel2
//			   // 
//			   this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
//			   this->panel2->Controls->Add(this->width_text);
//			   this->panel2->Controls->Add(this->right_edge_text);
//			   this->panel2->Controls->Add(this->left_edge_text);
//			   this->panel2->Controls->Add(this->label3);
//			   this->panel2->Controls->Add(this->label2);
//			   this->panel2->Controls->Add(this->label1);
//			   this->panel2->Controls->Add(this->button1);
//			   this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
//			   this->panel2->Location = System::Drawing::Point(725, 0);
//			   this->panel2->Name = L"panel2";
//			   this->panel2->Size = System::Drawing::Size(215, 534);
//			   this->panel2->TabIndex = 1;
//			   // 
//			   // MyForm
//			   // 
//			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
//			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
//			   this->ClientSize = System::Drawing::Size(940, 534);
//			   this->Controls->Add(this->panel2);
//			   this->Controls->Add(this->panel1);
//			   this->Name = L"MyForm";
//			   this->Text = L"Motion animation";
//			   this->panel2->ResumeLayout(false);
//			   this->panel2->PerformLayout();
//			   this->ResumeLayout(false);
//
//		   }
//#pragma endregion
//
//	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
//		//Выбор кистей
//		Pen^ red = gcnew Pen(System::Drawing::Color::Red, 2.0F);
//		SolidBrush^ br = gcnew SolidBrush(System::Drawing::Color::Red);
//		SolidBrush^ br1 = gcnew SolidBrush(System::Drawing::Color::Blue);
//		SolidBrush^ br2 = gcnew SolidBrush(System::Drawing::Color::Green);
//
//		//Объявление переменных для рисование пластины
//		int panel_height = panel1->Height;
//		int panel_Width = panel1->Width;
//		float left_edge = Convert::ToDouble(left_edge_text->Text);
//		float right_edge = Convert::ToDouble(right_edge_text->Text);
//		graph = panel1->CreateGraphics();
//		graph->DrawRectangle(Pens::Black, left_edge, (float)0, right_edge - left_edge, (float)panel_height);//Создание пластины
//		for (int i = 0; i < panel_Width; i += 20) {
//			System::Windows::Forms::Label^ labels = gcnew System::Windows::Forms::Label;
//			labels->AutoSize = true;
//			labels->Location = System::Drawing::Point(i, panel_height - 15);
//			labels->Name = L"labels" + i;
//			labels->Size = System::Drawing::Size(50, 20);
//			labels->Text = L"" + i / 20;
//			this->panel1->Controls->Add(labels);
//		}
//		for (int i = panel_height; i > 0; i -= 20) {
//			System::Windows::Forms::Label^ labels = gcnew System::Windows::Forms::Label;
//			labels->AutoSize = true;
//			labels->Location = System::Drawing::Point(15, i);
//			labels->Name = L"labels" + i;
//			labels->Size = System::Drawing::Size(20, 20);
//			labels->Text = L"" + i / 20;
//			this->panel1->Controls->Add(labels);
//		}
//		this->panel1->Refresh();
//		//Объявление переменных для перемещения нейтронов и отображения пути на экране
//
//
//		double	scatt = 4;
//		double capt = 758;
//		double sigma = capt + scatt; 
//		double gamma;
//		double lamda;
//		float diameter = 10;
//
//		float x_prev = 0, x_curr = 0;
//		float y_prev = panel_height / 2 - diameter / 2, y_curr = y_prev;
//		double sin = 0, cos = 0, //lamda = rand() % 20 + diameter;
//
//		srand(time(NULL));
//		graph = panel1->CreateGraphics();
//		graph->Clear(System::Drawing::SystemColors::Info);//Очищаем окно перед рисованием
//		graph->DrawRectangle(Pens::Black, left_edge, (float)0, right_edge - left_edge, (float)panel1->Height);//Создание пластины
//		graph->DrawLine(Pens::Black, 5, panel_height, 5, 0);
//		graph->DrawLine(Pens::Black, 1, panel_height - 2, panel_Width, panel_height - 2);
//#pragma region Перемещаемся к левой границе пластины
//		graph->FillEllipse(br, x_curr, y_curr, diameter, diameter);
//		graph->DrawLine(red, x_prev, y_prev, x_curr, y_curr);
//		while (left_edge > x_curr) {
//			lamda = 10 + diameter;
//			x_curr += lamda;
//			graph->FillEllipse(br1, x_curr, y_curr, diameter, diameter);
//			graph->FillEllipse(br, x_prev, y_prev, diameter, diameter);
//			graph->DrawLine(red, x_prev + diameter / 2, y_prev + diameter / 2, x_curr + diameter / 2, y_curr + diameter / 2);
//			x_prev = x_curr;
//			Sleep(200);
//		}
//#pragma endregion
//
//#pragma region Движение до выхода из пластины
//		while (left_edge < x_curr && x_curr < right_edge && y_curr > 0 && y_curr < panel_height) {
//			gamma = rand() / (RAND_MAX + 1.);
//			lamda = rand() % 20 + diameter;
//			//if (lamda < scatt / sigma)
//			//{
//			//	graph->FillEllipse(br1, x_curr, y_curr, diameter, diameter);
//			//	/*for (int i = 0; i < 4; i++)
//			//	{
//
//			//	}*/
//			//	panel1->Controls->Clear();
//			//}
//			cos = 2*gamma-1;
//			sin = 1 - cos * cos;
//			x_curr += lamda * cos;
//			y_curr += lamda * sin;
//			graph->FillEllipse(br1, x_curr, y_curr, diameter, diameter);
//			graph->FillEllipse(br, x_prev, y_prev, diameter, diameter);
//			graph->DrawLine(red, x_prev + diameter / 2, y_prev + diameter / 2, x_curr + diameter / 2, y_curr + diameter / 2);
//			x_prev = x_curr;
//			y_prev = y_curr;
//			Sleep(200);
//		}
//#pragma endregion
//
//
//	}
//	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
//	}
//	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
//	}
//	
//};
//}
//
//
//
//
//
//#pragma once
//#include <math.h>
//#include <stdlib.h>
//#include<ctime>
//#include <thread>
//#include "windows.h"
//namespace Rendering {
//
//	using namespace System;
//	using namespace System::ComponentModel;
//	using namespace System::Collections;
//	using namespace System::Windows::Forms;
//	using namespace System::Data;
//	using namespace System::Drawing;
//
//
//	/// <summary>
//	/// Сводка для MyForm
//	/// </summary>
//	public ref class MyForm : public System::Windows::Forms::Form
//	{
//	public:
//		MyForm(void)
//		{
//			InitializeComponent();
//			//
//			//TODO: добавьте код конструктора
//			//
//		}
//
//	protected:
//		/// <summary>
//		/// Освободить все используемые ресурсы.
//		/// </summary>
//		~MyForm()
//		{
//			if (components)
//			{
//				delete components;
//			}
//		}
//	private: System::Windows::Forms::Panel^ panel1;
//
//
//
//
//
//	protected:
//
//
//	protected:
//
//	private:
//		/// <summary>
//		/// Обязательная переменная конструктора.
//		/// </summary>
//		System::ComponentModel::Container^ components;
//		Graphics^ graph;
//		Pen^ pen;
//		SolidBrush^ br = gcnew SolidBrush(System::Drawing::Color::Red);
//		int W;
//
//	private: System::Windows::Forms::Button^ button1;
//	private: System::Windows::Forms::Label^ label1;
//	private: System::Windows::Forms::Label^ label2;
//	private: System::Windows::Forms::Label^ label3;
//	private: System::Windows::Forms::TextBox^ left_edge_text;
//	private: System::Windows::Forms::TextBox^ right_edge_text;
//	private: System::Windows::Forms::TextBox^ width_text;
//
//
//
//	private: System::Windows::Forms::Panel^ panel2;
//
//
//		   Point zen;
//
//#pragma region Windows Form Designer generated code
//		   /// <summary>
//		   /// Требуемый метод для поддержки конструктора — не изменяйте 
//		   /// содержимое этого метода с помощью редактора кода.
//		   /// </summary>
//		   void InitializeComponent(void)
//		   {
//			   this->panel1 = (gcnew System::Windows::Forms::Panel());
//			   this->button1 = (gcnew System::Windows::Forms::Button());
//			   this->label1 = (gcnew System::Windows::Forms::Label());
//			   this->label2 = (gcnew System::Windows::Forms::Label());
//			   this->label3 = (gcnew System::Windows::Forms::Label());
//			   this->left_edge_text = (gcnew System::Windows::Forms::TextBox());
//			   this->right_edge_text = (gcnew System::Windows::Forms::TextBox());
//			   this->width_text = (gcnew System::Windows::Forms::TextBox());
//			   this->panel2 = (gcnew System::Windows::Forms::Panel());
//			   this->panel2->SuspendLayout();
//			   this->SuspendLayout();
//			   // 
//			   // panel1
//			   // 
//			   this->panel1->BackColor = System::Drawing::SystemColors::Info;
//			   this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
//			   this->panel1->Location = System::Drawing::Point(0, 0);
//			   this->panel1->Name = L"panel1";
//			   this->panel1->Size = System::Drawing::Size(719, 534);
//			   this->panel1->TabIndex = 0;
//			   // 
//			   // button1
//			   // 
//			   this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
//			   this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
//			   this->button1->Cursor = System::Windows::Forms::Cursors::Default;
//			   this->button1->Location = System::Drawing::Point(12, 182);
//			   this->button1->Name = L"button1";
//			   this->button1->Size = System::Drawing::Size(169, 50);
//			   this->button1->TabIndex = 0;
//			   this->button1->Text = L"Draw!";
//			   this->button1->UseVisualStyleBackColor = false;
//			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
//			   // 
//			   // label1
//			   // 
//			   this->label1->AutoSize = true;
//			   this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
//			   this->label1->Location = System::Drawing::Point(18, 27);
//			   this->label1->Name = L"label1";
//			   this->label1->Size = System::Drawing::Size(16, 17);
//			   this->label1->TabIndex = 11;
//			   this->label1->Text = L"a";
//			   // 
//			   // label2
//			   // 
//			   this->label2->AutoSize = true;
//			   this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
//			   this->label2->Location = System::Drawing::Point(18, 75);
//			   this->label2->Name = L"label2";
//			   this->label2->Size = System::Drawing::Size(16, 17);
//			   this->label2->TabIndex = 12;
//			   this->label2->Text = L"b";
//			   // 
//			   // label3
//			   // 
//			   this->label3->AutoSize = true;
//			   this->label3->BackColor = System::Drawing::SystemColors::ActiveCaption;
//			   this->label3->Location = System::Drawing::Point(18, 119);
//			   this->label3->Name = L"label3";
//			   this->label3->Size = System::Drawing::Size(40, 17);
//			   this->label3->TabIndex = 13;
//			   this->label3->Text = L"width";
//			   // 
//			   // left_edge_text
//			   // 
//			   this->left_edge_text->Location = System::Drawing::Point(76, 27);
//			   this->left_edge_text->Name = L"left_edge_text";
//			   this->left_edge_text->Size = System::Drawing::Size(100, 22);
//			   this->left_edge_text->TabIndex = 14;
//			   // 
//			   // right_edge_text
//			   // 
//			   this->right_edge_text->Location = System::Drawing::Point(76, 75);
//			   this->right_edge_text->Name = L"right_edge_text";
//			   this->right_edge_text->Size = System::Drawing::Size(100, 22);
//			   this->right_edge_text->TabIndex = 15;
//			   // 
//			   // width_text
//			   // 
//			   this->width_text->Location = System::Drawing::Point(76, 116);
//			   this->width_text->Name = L"width_text";
//			   this->width_text->Size = System::Drawing::Size(100, 22);
//			   this->width_text->TabIndex = 16;
//			   // 
//			   // panel2
//			   // 
//			   this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
//			   this->panel2->Controls->Add(this->width_text);
//			   this->panel2->Controls->Add(this->right_edge_text);
//			   this->panel2->Controls->Add(this->left_edge_text);
//			   this->panel2->Controls->Add(this->label3);
//			   this->panel2->Controls->Add(this->label2);
//			   this->panel2->Controls->Add(this->label1);
//			   this->panel2->Controls->Add(this->button1);
//			   this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
//			   this->panel2->Location = System::Drawing::Point(725, 0);
//			   this->panel2->Name = L"panel2";
//			   this->panel2->Size = System::Drawing::Size(215, 534);
//			   this->panel2->TabIndex = 1;
//			   // 
//			   // MyForm
//			   // 
//			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
//			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
//			   this->ClientSize = System::Drawing::Size(940, 534);
//			   this->Controls->Add(this->panel2);
//			   this->Controls->Add(this->panel1);
//			   this->Name = L"MyForm";
//			   this->Text = L"Motion animation";
//			   this->panel2->ResumeLayout(false);
//			   this->panel2->PerformLayout();
//			   this->ResumeLayout(false);
//
//		   }
//#pragma endregion
//
//	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
//		//Выбор кистей
//		Pen^ red = gcnew Pen(System::Drawing::Color::Red, 2.0F);
//		SolidBrush^ br = gcnew SolidBrush(System::Drawing::Color::Red);
//		SolidBrush^ br1 = gcnew SolidBrush(System::Drawing::Color::Blue);
//		SolidBrush^ br2 = gcnew SolidBrush(System::Drawing::Color::Green);
//
//		//Объявление переменных для рисование пластины
//		int panel_height = panel1->Height;
//		int panel_Width = panel1->Width;
//		/*float left_edge = Convert::ToDouble(left_edge_text->Text);
//		float right_edge = Convert::ToDouble(right_edge_text->Text);*/
//
//		float left_edge = 100;
//		float right_edge = 300;
//
//		graph = panel1->CreateGraphics();
//		graph->DrawRectangle(Pens::Black, left_edge, (float)0, right_edge - left_edge, (float)panel_height);//Создание пластины
//		for (int i = 0; i < panel_Width; i += 20) {
//			System::Windows::Forms::Label^ labels = gcnew System::Windows::Forms::Label;
//			labels->AutoSize = true;
//			labels->Location = System::Drawing::Point(i, panel_height - 15);
//			labels->Name = L"labels" + i;
//			labels->Size = System::Drawing::Size(50, 20);
//			labels->Text = L"" + i / 20;
//			this->panel1->Controls->Add(labels);
//		}
//		for (int i = panel_height; i > 0; i -= 20) {
//			System::Windows::Forms::Label^ labels = gcnew System::Windows::Forms::Label;
//			labels->AutoSize = true;
//			labels->Location = System::Drawing::Point(15, i);
//			labels->Name = L"labels" + i;
//			labels->Size = System::Drawing::Size(20, 20);
//			labels->Text = L"" + i / 20;
//			this->panel1->Controls->Add(labels);
//		}
//		this->panel1->Refresh();
//		//Объявление переменных для перемещения нейтронов и отображения пути на экране
//		float diameter = 10;
//		float gamma;
//		float x_prev = 0, x_curr = 0;
//		float y_prev = panel_height / 2 - diameter / 2, y_curr = y_prev;
//		double sin = 0, cos = 0, lamda = rand() % 20 + diameter;
//
//		srand(time(NULL));
//		graph = panel1->CreateGraphics();
//		graph->Clear(System::Drawing::SystemColors::Info);//Очищаем окно перед рисованием
//		graph->DrawRectangle(Pens::Black, left_edge, (float)0, right_edge - left_edge, (float)panel1->Height);//Создание пластины
//		graph->DrawLine(Pens::Black, 5, panel_height, 5, 0);
//		graph->DrawLine(Pens::Black, 1, panel_height - 2, panel_Width, panel_height - 2);
//#pragma region Перемещаемся к левой границе пластины
//		graph->FillEllipse(br, x_curr, y_curr, diameter, diameter);
//		graph->DrawLine(red, x_prev, y_prev, x_curr, y_curr);
//		while (left_edge > x_curr) {
//			lamda = rand() % 20 + diameter;
//			x_curr += lamda;
//			graph->FillEllipse(br1, x_curr, y_curr, diameter, diameter);
//			graph->FillEllipse(br, x_prev, y_prev, diameter, diameter);
//			graph->DrawLine(red, x_prev + diameter / 2, y_prev + diameter / 2, x_curr + diameter / 2, y_curr + diameter / 2);
//			x_prev = x_curr;
//			Sleep(200);
//		}
//#pragma endregion
//
//#pragma region Движение до выхода из пластины
//		while (left_edge < x_curr && x_curr < right_edge && y_curr > 0 && y_curr < panel_height) {
//			lamda = rand() % 20 + diameter;
//			cos = 1 + (double)rand() / RAND_MAX * (-1 - 1);
//			if(rand()%2==0)
//				sin = sqrt(1 - cos * cos);
//			else
//				sin = -sqrt(1 - cos * cos);
//			x_curr += lamda * cos;
//			y_curr += lamda * sin;
//
//			//Если нужны случайные вещественные числа от a до b включительно, то
//
//				//double d = a + (double)rand() / RAND_MAX * (b - a);
//			if (rand()%10<1)
//			{
//				//graph->FillEllipse(br2, x_curr, y_curr, diameter, diameter);
//				//panel1->Controls->Clear();
//				//break;
//				int count;
//				while (count<5) {
//					lamda = 7 + diameter;
//					x_curr += lamda;
//					//y_curr += lamda*0,7;
//					graph->FillEllipse(br2, x_curr, y_curr, diameter, diameter);
//					graph->FillEllipse(br2, x_prev, y_prev, diameter, diameter);
//					graph->DrawLine(red, x_prev + diameter / 2, y_prev + diameter / 2, x_curr + diameter / 2, y_curr + diameter / 2);
//					x_prev = x_curr;
//					//y_prev = x_curr;
//					Sleep(500);
//					count++;
//				}
//				graph->Clear(System::Drawing::SystemColors::Info);
//				break;
//			}
//			graph->FillEllipse(br1, x_curr, y_curr, diameter, diameter);
//			graph->FillEllipse(br, x_prev, y_prev, diameter, diameter);
//			graph->DrawLine(red, x_prev + diameter / 2, y_prev + diameter / 2, x_curr + diameter / 2, y_curr + diameter / 2);
//			x_prev = x_curr;
//			y_prev = y_curr;
//			Sleep(200);
//		}
//#pragma endregion
//
//
//	}
//	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
//	}
//	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
//	}
//	};
//}












#pragma once
#include <math.h>
#include <stdlib.h>
#include<ctime>
#include <thread>
#include "windows.h"
namespace Rendering {

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
	private: System::Windows::Forms::Panel^ panel1;





	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;
		Graphics^ graph;
		Pen^ pen;
		SolidBrush^ br = gcnew SolidBrush(System::Drawing::Color::Red);
		SolidBrush^ br2 = gcnew SolidBrush(System::Drawing::Color::Green);


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ left_edge_text;
	private: System::Windows::Forms::TextBox^ right_edge_text;
	private: System::Windows::Forms::TextBox^ width_text;



	private: System::Windows::Forms::Panel^ panel2;



#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Требуемый метод для поддержки конструктора — не изменяйте 
		   /// содержимое этого метода с помощью редактора кода.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->left_edge_text = (gcnew System::Windows::Forms::TextBox());
			   this->right_edge_text = (gcnew System::Windows::Forms::TextBox());
			   this->width_text = (gcnew System::Windows::Forms::TextBox());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->panel2->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // panel1
			   // 
			   this->panel1->BackColor = System::Drawing::SystemColors::Info;
			   this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			   this->panel1->Location = System::Drawing::Point(0, 0);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(719, 534);
			   this->panel1->TabIndex = 0;
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			   this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			   this->button1->Location = System::Drawing::Point(12, 182);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(169, 50);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"Draw!";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			   this->label1->Location = System::Drawing::Point(18, 27);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(16, 17);
			   this->label1->TabIndex = 11;
			   this->label1->Text = L"a";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			   this->label2->Location = System::Drawing::Point(18, 75);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(16, 17);
			   this->label2->TabIndex = 12;
			   this->label2->Text = L"b";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			   this->label3->Location = System::Drawing::Point(18, 119);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(40, 17);
			   this->label3->TabIndex = 13;
			   this->label3->Text = L"width";
			   // 
			   // left_edge_text
			   // 
			   this->left_edge_text->Location = System::Drawing::Point(76, 27);
			   this->left_edge_text->Name = L"left_edge_text";
			   this->left_edge_text->Size = System::Drawing::Size(100, 22);
			   this->left_edge_text->TabIndex = 14;
			   // 
			   // right_edge_text
			   // 
			   this->right_edge_text->Location = System::Drawing::Point(76, 75);
			   this->right_edge_text->Name = L"right_edge_text";
			   this->right_edge_text->Size = System::Drawing::Size(100, 22);
			   this->right_edge_text->TabIndex = 15;
			   // 
			   // width_text
			   // 
			   this->width_text->Location = System::Drawing::Point(76, 116);
			   this->width_text->Name = L"width_text";
			   this->width_text->Size = System::Drawing::Size(100, 22);
			   this->width_text->TabIndex = 16;
			   // 
			   // panel2
			   // 
			   this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
			   this->panel2->Controls->Add(this->width_text);
			   this->panel2->Controls->Add(this->right_edge_text);
			   this->panel2->Controls->Add(this->left_edge_text);
			   this->panel2->Controls->Add(this->label3);
			   this->panel2->Controls->Add(this->label2);
			   this->panel2->Controls->Add(this->label1);
			   this->panel2->Controls->Add(this->button1);
			   this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			   this->panel2->Location = System::Drawing::Point(725, 0);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(215, 534);
			   this->panel2->TabIndex = 1;
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(940, 534);
			   this->Controls->Add(this->panel2);
			   this->Controls->Add(this->panel1);
			   this->Name = L"MyForm";
			   this->Text = L"Motion animation";
			   this->panel2->ResumeLayout(false);
			   this->panel2->PerformLayout();
			   this->ResumeLayout(false);


		   }
#pragma endregion


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Выбор кистей
		Pen^ red = gcnew Pen(System::Drawing::Color::Red, 1.0F);
		Pen^ green = gcnew Pen(System::Drawing::Color::Green, 1.0F);
		SolidBrush^ br = gcnew SolidBrush(System::Drawing::Color::Red);
		SolidBrush^ br1 = gcnew SolidBrush(System::Drawing::Color::Blue);

		//Объявление переменных для рисование пластины
		// высота и ширина пластины
		int panel_height = panel1->Height;
		int panel_width = panel1->Width;

		//граничные условия по физическим координатам (все в мм)
		double x_min = Convert::ToDouble(left_edge_text->Text) * 10E-3;
		double x_max = Convert::ToDouble(right_edge_text->Text) * 10E-3;
		//достаточно большие числа, в случае данной задачи бесконечно большие по сравнению с толщиной
		double y_min = -1000;
		double y_max = 1000;


		double scale_x = panel_width / (x_max - x_min);

		float left_edge = scale_x * x_min;
		float right_edge = scale_x*x_max;

		double sigma_capt = 0.008;
		double sigma_scatt = 4.8;
		double sigma_full = sigma_capt + sigma_scatt;
		double capture = sigma_capt / sigma_full;
		graph = panel1->CreateGraphics();
		graph->DrawRectangle(Pens::Black, left_edge, (float)0, right_edge - left_edge, (float)panel_height);//Создание пластины

		this->panel1->Refresh();
		//Объявление переменных для перемещения нейтронов и отображения пути на экране
		float diameter = 3;
		float x_prev = 0, x_curr = 0;
		float y_prev = panel_height / 2 - diameter / 2, y_curr = y_prev; //y не меняется при подлете к пластине
		double sin = 0, cos = 0 /*lamda = rand() % 20 + diameter*/;
		double gamma;
		double lamda;

		double gamma_min = 10E-16;

		double lamda_max = -log(gamma_min) / sigma_full;

		//double scale_lam = sqrt(panel_height * panel_height + panel_width * panel_width) / lamda_max;

		srand(time(NULL));
		graph = panel1->CreateGraphics();
		graph->Clear(System::Drawing::SystemColors::Info);//Очищаем окно перед рисованием
		graph->DrawRectangle(Pens::Black, left_edge, (float)0, right_edge - left_edge, (float)panel1->Height);//Создание пластины
		graph->DrawLine(Pens::Black, 5, panel_height, 5, 0);
		graph->DrawLine(Pens::Black, 1, panel_height - 2, panel_width, panel_height - 2);
#pragma region Перемещаемся к левой границе пластины
		graph->FillEllipse(br, x_curr, y_curr, diameter, diameter);
		graph->DrawLine(red, x_prev, y_prev, x_curr, y_curr);
		while (left_edge > x_curr) {
			lamda = 10; 
			x_curr += lamda;
			graph->FillEllipse(br1, x_curr, y_curr, diameter, diameter);
			graph->FillEllipse(br, x_prev, y_prev, diameter, diameter);
			graph->DrawLine(red, x_prev + diameter / 2, y_prev + diameter / 2, x_curr + diameter / 2, y_curr + diameter / 2);
			x_prev = x_curr;
			Sleep(20);
		}

#pragma endregion

#pragma region Движение до выхода из пластины
		while (left_edge < x_curr && x_curr < right_edge && y_curr > 0 && y_curr < panel_height) {

			//обрабатывать случай выхода за пределы формы

			if (y_curr > panel_height)
			{
				//верни его назад вниз
				/*y_curr = y_curr / 2;*/
				continue;
			}

			if (y_curr < 0)
			{
				y_curr = 3*(y_prev+1);
				continue;
			}

			// имитация поглощения (в теле if надо проверять именно условие поглощения)
			// сейчас там просто временное условие
			if ((double)rand() / RAND_MAX < capture)
			//if (rand() % 12 < 1)
			{
				graph->FillEllipse(br2, x_curr, y_curr, diameter, diameter);
				//graph->FillEllipse(br2, x_prev, y_curr, diameter, diameter);
				//graph->DrawLine(green, x_prev + diameter / 2, y_prev + diameter / 2, x_curr + diameter);
				break;
			}

			gamma = (double)rand() / RAND_MAX;
			//lamda = scale_lam *(-log(gamma) / sigma_full);

			//Если нужны случайные вещественные числа от a до b включительно, то
			//double d = a + (double)rand() / RAND_MAX * (b - a);

			cos = -1 + (double)rand() / RAND_MAX * (1 - (-1));
			if (rand() % 2 == 0)
				sin = sqrt(1 - cos * cos);
			else
				sin = -sqrt(1 - cos * cos);

			/*x_curr += lamda * cos;
			y_curr += lamda * sin;*/

			x_curr = /*scale_x * */(x_curr + lamda * cos);
			y_curr =/* scale_y * */(y_curr + lamda * sin);
			graph->FillEllipse(br1, x_curr, y_curr, diameter, diameter);
			graph->FillEllipse(br, x_prev, y_prev, diameter, diameter);
			graph->DrawLine(red, x_prev + diameter / 2, y_prev + diameter / 2, x_curr + diameter / 2, y_curr + diameter / 2);
			x_prev = x_curr;
			y_prev = y_curr;
			Sleep(30);
		}
#pragma endregion


	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	};
}



















