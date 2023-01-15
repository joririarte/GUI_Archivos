#pragma once
#include "Item.h"
#include "Form_AgregarItem.h"
#include <string>
#include <fstream>
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace GUI_Archivos;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






	private: System::Windows::Forms::Button^ btn_Agregar;

	private: System::Windows::Forms::Button^ btn_Buscar;
	private: System::Windows::Forms::DataGridView^ tabla;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Col_Codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Col_Descripcion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Col_Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cantActual;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cantMin;
	private: System::Windows::Forms::Label^ lbl_inventario;
	private: System::Windows::Forms::Button^ btn_modificar;













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
			this->btn_Agregar = (gcnew System::Windows::Forms::Button());
			this->btn_Buscar = (gcnew System::Windows::Forms::Button());
			this->tabla = (gcnew System::Windows::Forms::DataGridView());
			this->Col_Codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col_Descripcion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col_Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cantActual = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cantMin = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lbl_inventario = (gcnew System::Windows::Forms::Label());
			this->btn_modificar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabla))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_Agregar
			// 
			this->btn_Agregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Agregar->Location = System::Drawing::Point(584, 358);
			this->btn_Agregar->Name = L"btn_Agregar";
			this->btn_Agregar->Size = System::Drawing::Size(107, 42);
			this->btn_Agregar->TabIndex = 6;
			this->btn_Agregar->Text = L"Agregar";
			this->btn_Agregar->UseVisualStyleBackColor = true;
			this->btn_Agregar->Click += gcnew System::EventHandler(this, &Form1::btn_Agregar_Click);
			// 
			// btn_Buscar
			// 
			this->btn_Buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Buscar->Location = System::Drawing::Point(584, 406);
			this->btn_Buscar->Name = L"btn_Buscar";
			this->btn_Buscar->Size = System::Drawing::Size(107, 42);
			this->btn_Buscar->TabIndex = 7;
			this->btn_Buscar->Text = L"Buscar";
			this->btn_Buscar->UseVisualStyleBackColor = true;
			this->btn_Buscar->Click += gcnew System::EventHandler(this, &Form1::btn_Buscar_Click);
			// 
			// tabla
			// 
			this->tabla->AllowUserToAddRows = false;
			this->tabla->AllowUserToDeleteRows = false;
			this->tabla->AllowUserToResizeRows = false;
			this->tabla->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tabla->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Col_Codigo, this->Col_Descripcion,
					this->Col_Precio, this->cantActual, this->cantMin
			});
			this->tabla->Location = System::Drawing::Point(12, 51);
			this->tabla->MultiSelect = false;
			this->tabla->Name = L"tabla";
			this->tabla->ReadOnly = true;
			this->tabla->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->tabla->ShowEditingIcon = false;
			this->tabla->Size = System::Drawing::Size(543, 448);
			this->tabla->TabIndex = 8;
			// 
			// Col_Codigo
			// 
			this->Col_Codigo->HeaderText = L"Codigo";
			this->Col_Codigo->Name = L"Col_Codigo";
			this->Col_Codigo->ReadOnly = true;
			// 
			// Col_Descripcion
			// 
			this->Col_Descripcion->HeaderText = L"Descripcion";
			this->Col_Descripcion->Name = L"Col_Descripcion";
			this->Col_Descripcion->ReadOnly = true;
			// 
			// Col_Precio
			// 
			this->Col_Precio->HeaderText = L"Precio";
			this->Col_Precio->Name = L"Col_Precio";
			this->Col_Precio->ReadOnly = true;
			// 
			// cantActual
			// 
			this->cantActual->HeaderText = L"Cantidad Actual";
			this->cantActual->Name = L"cantActual";
			this->cantActual->ReadOnly = true;
			// 
			// cantMin
			// 
			this->cantMin->HeaderText = L"Cantidad Minima";
			this->cantMin->Name = L"cantMin";
			this->cantMin->ReadOnly = true;
			// 
			// lbl_inventario
			// 
			this->lbl_inventario->AutoSize = true;
			this->lbl_inventario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_inventario->Location = System::Drawing::Point(12, 9);
			this->lbl_inventario->Name = L"lbl_inventario";
			this->lbl_inventario->Size = System::Drawing::Size(135, 24);
			this->lbl_inventario->TabIndex = 9;
			this->lbl_inventario->Text = L"INVENTARIO";
			// 
			// btn_modificar
			// 
			this->btn_modificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_modificar->Location = System::Drawing::Point(584, 457);
			this->btn_modificar->Name = L"btn_modificar";
			this->btn_modificar->Size = System::Drawing::Size(107, 42);
			this->btn_modificar->TabIndex = 10;
			this->btn_modificar->Text = L"Modificar";
			this->btn_modificar->UseVisualStyleBackColor = true;
			this->btn_modificar->Click += gcnew System::EventHandler(this, &Form1::btn_modificar_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(703, 511);
			this->Controls->Add(this->btn_modificar);
			this->Controls->Add(this->lbl_inventario);
			this->Controls->Add(this->tabla);
			this->Controls->Add(this->btn_Buscar);
			this->Controls->Add(this->btn_Agregar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->Text = L"Sistema Stock";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabla))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Metodos Auxiliares
		private: void UpdateGrid();
		
		//Metodos Formulario
		private: System::Void btn_Agregar_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void btn_Buscar_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e);
		private: System::Void btn_modificar_Click(System::Object^ sender, System::EventArgs^ e);
};
}
