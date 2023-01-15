#pragma once
#include "Item.h"

namespace GUI_Archivos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_AgregarItem
	/// </summary>
	public ref class Form_AgregarItem : public System::Windows::Forms::Form
	{
	public:
		Form_AgregarItem(void)
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
		~Form_AgregarItem()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ textBox_codigo;
	public: System::Windows::Forms::TextBox^ textBox_descripcion;
	protected:


	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ textBox_CantActual;

	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::TextBox^ textBox_CantMin;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::ComboBox^ comboBox_tipo;

	public: System::Windows::Forms::Button^ btn_AgregarItem;
	public: System::Windows::Forms::TextBox^ textBox_precio;
	private: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::Button^ btn_Cancelar;
	public: System::Windows::Forms::Button^ btn_modificar;
	public: System::Windows::Forms::Button^ btn_Borrar;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_codigo = (gcnew System::Windows::Forms::TextBox());
			this->textBox_descripcion = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_CantActual = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_CantMin = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox_tipo = (gcnew System::Windows::Forms::ComboBox());
			this->btn_AgregarItem = (gcnew System::Windows::Forms::Button());
			this->textBox_precio = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btn_Cancelar = (gcnew System::Windows::Forms::Button());
			this->btn_modificar = (gcnew System::Windows::Forms::Button());
			this->btn_Borrar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código";
			// 
			// textBox_codigo
			// 
			this->textBox_codigo->AllowDrop = true;
			this->textBox_codigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_codigo->Location = System::Drawing::Point(180, 29);
			this->textBox_codigo->Name = L"textBox_codigo";
			this->textBox_codigo->Size = System::Drawing::Size(191, 29);
			this->textBox_codigo->TabIndex = 1;
			this->textBox_codigo->TextChanged += gcnew System::EventHandler(this, &Form_AgregarItem::textBox_codigo_TextChanged);
			// 
			// textBox_descripcion
			// 
			this->textBox_descripcion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_descripcion->Location = System::Drawing::Point(180, 160);
			this->textBox_descripcion->MaxLength = 20;
			this->textBox_descripcion->Name = L"textBox_descripcion";
			this->textBox_descripcion->Size = System::Drawing::Size(191, 29);
			this->textBox_descripcion->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Descripcion";
			// 
			// textBox_CantActual
			// 
			this->textBox_CantActual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_CantActual->Location = System::Drawing::Point(180, 206);
			this->textBox_CantActual->Name = L"textBox_CantActual";
			this->textBox_CantActual->Size = System::Drawing::Size(191, 29);
			this->textBox_CantActual->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(24, 211);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(141, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Cantidad Actual";
			// 
			// textBox_CantMin
			// 
			this->textBox_CantMin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_CantMin->Location = System::Drawing::Point(180, 253);
			this->textBox_CantMin->Name = L"textBox_CantMin";
			this->textBox_CantMin->Size = System::Drawing::Size(191, 29);
			this->textBox_CantMin->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(24, 258);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(150, 24);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Cantidad Mínima";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(24, 84);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 24);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Tipo";
			// 
			// comboBox_tipo
			// 
			this->comboBox_tipo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_tipo->FormattingEnabled = true;
			this->comboBox_tipo->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Procesador", L"Motherboard", L"RAM", L"Placa de Video" });
			this->comboBox_tipo->Location = System::Drawing::Point(180, 76);
			this->comboBox_tipo->Name = L"comboBox_tipo";
			this->comboBox_tipo->Size = System::Drawing::Size(191, 32);
			this->comboBox_tipo->TabIndex = 9;
			// 
			// btn_AgregarItem
			// 
			this->btn_AgregarItem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_AgregarItem->Location = System::Drawing::Point(283, 317);
			this->btn_AgregarItem->Name = L"btn_AgregarItem";
			this->btn_AgregarItem->Size = System::Drawing::Size(107, 44);
			this->btn_AgregarItem->TabIndex = 10;
			this->btn_AgregarItem->Text = L"Agregar";
			this->btn_AgregarItem->UseVisualStyleBackColor = true;
			this->btn_AgregarItem->Click += gcnew System::EventHandler(this, &Form_AgregarItem::btn_AgregarItem_Click);
			// 
			// textBox_precio
			// 
			this->textBox_precio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_precio->Location = System::Drawing::Point(180, 121);
			this->textBox_precio->MaxLength = 20;
			this->textBox_precio->Name = L"textBox_precio";
			this->textBox_precio->Size = System::Drawing::Size(191, 29);
			this->textBox_precio->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(24, 126);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 24);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Precio";
			// 
			// btn_Cancelar
			// 
			this->btn_Cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Cancelar->Location = System::Drawing::Point(28, 317);
			this->btn_Cancelar->Name = L"btn_Cancelar";
			this->btn_Cancelar->Size = System::Drawing::Size(107, 44);
			this->btn_Cancelar->TabIndex = 13;
			this->btn_Cancelar->Text = L"Cancelar";
			this->btn_Cancelar->UseVisualStyleBackColor = true;
			this->btn_Cancelar->Click += gcnew System::EventHandler(this, &Form_AgregarItem::btn_Cancelar_Click);
			// 
			// btn_modificar
			// 
			this->btn_modificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_modificar->Location = System::Drawing::Point(155, 317);
			this->btn_modificar->Name = L"btn_modificar";
			this->btn_modificar->Size = System::Drawing::Size(107, 44);
			this->btn_modificar->TabIndex = 14;
			this->btn_modificar->Text = L"Modificar";
			this->btn_modificar->UseVisualStyleBackColor = true;
			this->btn_modificar->Click += gcnew System::EventHandler(this, &Form_AgregarItem::btn_modificar_Click);
			// 
			// btn_Borrar
			// 
			this->btn_Borrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Borrar->Location = System::Drawing::Point(283, 317);
			this->btn_Borrar->Name = L"btn_Borrar";
			this->btn_Borrar->Size = System::Drawing::Size(107, 44);
			this->btn_Borrar->TabIndex = 15;
			this->btn_Borrar->Text = L"Borrar";
			this->btn_Borrar->UseVisualStyleBackColor = true;
			this->btn_Borrar->Visible = false;
			this->btn_Borrar->Click += gcnew System::EventHandler(this, &Form_AgregarItem::btn_Borrar_Click);
			// 
			// Form_AgregarItem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(402, 382);
			this->Controls->Add(this->btn_modificar);
			this->Controls->Add(this->btn_Cancelar);
			this->Controls->Add(this->textBox_precio);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox_tipo);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox_CantMin);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_CantActual);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_descripcion);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_codigo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_Borrar);
			this->Controls->Add(this->btn_AgregarItem);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form_AgregarItem";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Agregar Item";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Metodos Formulario
	private: System::Void btn_AgregarItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_Cancelar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_modificar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_codigo_TextChanged(System::Object^ sender, System::EventArgs^ e);
		 //Metodos Front
	public:  System::Void completar(Reg::itemStock articulo);
	private: System::Void limpiar();
		 //Metodos Back
	private: System::Void cargarRegistro(Reg::itemStock& articulo);
	private: System::Void btn_Borrar_Click(System::Object^ sender, System::EventArgs^ e);
};
}
