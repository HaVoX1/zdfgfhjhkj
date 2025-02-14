#pragma once

namespace WFTest {

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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_a;
	private: System::Windows::Forms::TextBox^ textBox_h;
	private: System::Windows::Forms::TextBox^ textBox_b;
	private: System::Windows::Forms::CheckBox^ checkBox_cos;
	private: System::Windows::Forms::CheckBox^ checkBox_sin;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ построитьГрафикToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ очиститьГрафикToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;


	protected:

	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_a = (gcnew System::Windows::Forms::TextBox());
			this->textBox_h = (gcnew System::Windows::Forms::TextBox());
			this->textBox_b = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_cos = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_sin = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->построитьГрафикToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьГрафикToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea4);
			this->chart->DataSource = this->chart->Series;
			legend4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			legend4->BorderColor = System::Drawing::Color::Silver;
			legend4->HeaderSeparatorColor = System::Drawing::Color::Bisque;
			legend4->Name = L"Legend1";
			legend4->Title = L"Цвет графиков";
			this->chart->Legends->Add(legend4);
			this->chart->Location = System::Drawing::Point(40, 60);
			this->chart->Name = L"chart";
			series7->BorderWidth = 3;
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series7->Color = System::Drawing::Color::Red;
			series7->Legend = L"Legend1";
			series7->LegendText = L"cos";
			series7->Name = L"Series1";
			series8->BorderWidth = 3;
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series8->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series8->Legend = L"Legend1";
			series8->LegendText = L"sin";
			series8->Name = L"Series2";
			this->chart->Series->Add(series7);
			this->chart->Series->Add(series8);
			this->chart->Size = System::Drawing::Size(600, 389);
			this->chart->TabIndex = 0;
			this->chart->Text = L"chart1";
			title4->Name = L"Title1";
			title4->Text = L"Графики функций cos(x) и sin(x)";
			this->chart->Titles->Add(title4);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(35, 482);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"А(от)=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(35, 533);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"В(до)=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(35, 581);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"h(шаг)=";
			// 
			// textBox_a
			// 
			this->textBox_a->Location = System::Drawing::Point(133, 482);
			this->textBox_a->Name = L"textBox_a";
			this->textBox_a->Size = System::Drawing::Size(100, 26);
			this->textBox_a->TabIndex = 5;
			// 
			// textBox_h
			// 
			this->textBox_h->Location = System::Drawing::Point(133, 581);
			this->textBox_h->Name = L"textBox_h";
			this->textBox_h->Size = System::Drawing::Size(100, 26);
			this->textBox_h->TabIndex = 6;
			// 
			// textBox_b
			// 
			this->textBox_b->Location = System::Drawing::Point(133, 534);
			this->textBox_b->Name = L"textBox_b";
			this->textBox_b->Size = System::Drawing::Size(100, 26);
			this->textBox_b->TabIndex = 7;
			// 
			// checkBox_cos
			// 
			this->checkBox_cos->AutoSize = true;
			this->checkBox_cos->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox_cos->Location = System::Drawing::Point(349, 482);
			this->checkBox_cos->Name = L"checkBox_cos";
			this->checkBox_cos->Size = System::Drawing::Size(124, 29);
			this->checkBox_cos->TabIndex = 8;
			this->checkBox_cos->Text = L"y=cos(x)";
			this->checkBox_cos->UseVisualStyleBackColor = true;
			// 
			// checkBox_sin
			// 
			this->checkBox_sin->AutoSize = true;
			this->checkBox_sin->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox_sin->Location = System::Drawing::Point(349, 529);
			this->checkBox_sin->Name = L"checkBox_sin";
			this->checkBox_sin->Size = System::Drawing::Size(124, 29);
			this->checkBox_sin->TabIndex = 9;
			this->checkBox_sin->Text = L"y=sin(x)";
			this->checkBox_sin->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->менюToolStripMenuItem,
					this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(678, 33);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->построитьГрафикToolStripMenuItem,
					this->очиститьГрафикToolStripMenuItem
			});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(78, 29);
			this->менюToolStripMenuItem->Text = L"Меню";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(80, 29);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// построитьГрафикToolStripMenuItem
			// 
			this->построитьГрафикToolStripMenuItem->Name = L"построитьГрафикToolStripMenuItem";
			this->построитьГрафикToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->построитьГрафикToolStripMenuItem->Text = L"Построить график";
			this->построитьГрафикToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::построитьГрафикToolStripMenuItem_Click);
			// 
			// очиститьГрафикToolStripMenuItem
			// 
			this->очиститьГрафикToolStripMenuItem->Name = L"очиститьГрафикToolStripMenuItem";
			this->очиститьГрафикToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->очиститьГрафикToolStripMenuItem->Text = L"Очистить график";
			this->очиститьГрафикToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::очиститьГрафикToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(678, 644);
			this->Controls->Add(this->checkBox_sin);
			this->Controls->Add(this->checkBox_cos);
			this->Controls->Add(this->textBox_b);
			this->Controls->Add(this->textBox_h);
			this->Controls->Add(this->textBox_a);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->Text = L"График ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: double a, b, h, x, y;
	private: void DefaultValue()
	{
		a = -10;
		b = 10;
		h = 0, 1;
	}
	private: System::Void построитьГрафикToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkBox_cos->Checked == false && checkBox_sin->Checked == false)
		{
			MessageBox::Show("Нужно выбрать хотя бы один график", "Внимание!");
			return;
		}
		DefaultValue();
		{
			try {
				String^ text_a = textBox_a->Text;
				if (text_a->Length > 0) {
					a = Convert::ToDouble(text_a);
				}
				else {
					a = a;
				}

				String^ text_b = textBox_b->Text;
				if (text_b->Length > 0) {
					b = Convert::ToDouble(text_b);
				}
				else {
					b = b;
				}

				String^ text_h = textBox_h->Text;
				if (text_h->Length > 0) {
					h = Convert::ToDouble(text_h);
				}
				else {
					h = h;
				}
			}
			catch (...)
			{

			}
		}
		if (checkBox_cos->Checked)
		{
			this->chart->Series[0]->Points->Clear();
			x = a;
			while (x <= b)
			{
				y = Math::Cos(x);
				this->chart->Series[0]->Points->AddXY(x, y);
				x += h;
			}
		}
		if (checkBox_sin->Checked)
		{
			this->chart->Series[1]->Points->Clear();
			x = a;
			while (x <= b)
			{
				y = Math::Sin(x);
				chart->Series[1]->Points->AddXY(x, y);
				x += h;
			}
		}
	}
	private: System::Void очиститьГрафикToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkBox_cos->Checked)
		{
			chart->Series[0]->Points->Clear();
		}
		if (checkBox_sin->Checked)
		{
			chart->Series[1]->Points->Clear();
		}
	}
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (MessageBox::Show("Выйти?", "Внимание", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes)
		{
			this->Close();
		}
	}
	};
}