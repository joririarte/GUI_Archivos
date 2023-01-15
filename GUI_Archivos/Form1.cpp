#include "pch.h"
#include "Form1.h"
#include "GlobalFunctions.h"

using namespace globalFunctions;

void CppCLRWinFormsProject::Form1::UpdateGrid()
{
	this->tabla->Rows->Clear();
	Reg::itemStock articulo;
	std::ifstream archivo;
	archivo.open("stock.dat", std::ios::binary);
	if (!archivo.fail()) {
		do {
			archivo.read((char*)&articulo, sizeof(Reg::itemStock));
			std::string descr;
			for (char l : articulo.descripcion) descr += l;
			array<String^>^ valores = gcnew array<String^>(5);
			valores[0] = toSystemString(std::to_string(articulo.codigo));
			valores[1] = toSystemString(descr);
			valores[2] = toSystemString(std::to_string(articulo.precio));
			valores[3] = toSystemString(std::to_string(articulo.cantActual));
			valores[4] = toSystemString(std::to_string(articulo.cantMinima));
			if (!archivo.eof())
				this->tabla->Rows->Add(valores);

		} while (!archivo.eof());
	}
	archivo.close();
    //throw gcnew System::NotImplementedException();
}

System::Void CppCLRWinFormsProject::Form1::btn_Agregar_Click(System::Object^ sender, System::EventArgs^ e)
{
	Form_AgregarItem^ agregarItem = gcnew Form_AgregarItem();
	agregarItem->btn_modificar->Enabled = false;
	agregarItem->btn_modificar->Visible = false;
	agregarItem->ShowDialog();
	this->UpdateGrid();
	return System::Void();
}

System::Void CppCLRWinFormsProject::Form1::btn_Buscar_Click(System::Object^ sender, System::EventArgs^ e)
{
	Form_AgregarItem^ buscarItem = gcnew Form_AgregarItem();
	buscarItem->Text = L"Buscar";
	buscarItem->btn_Cancelar->Text = L"Hecho";
	buscarItem->btn_Cancelar->Location = System::Drawing::Point(155, 317);
	buscarItem->btn_AgregarItem->Enabled = false;
	buscarItem->btn_AgregarItem->Visible = false;
	buscarItem->btn_modificar->Enabled = false;
	buscarItem->btn_modificar->Visible = false;
	buscarItem->ShowDialog();
	return System::Void();
}

System::Void CppCLRWinFormsProject::Form1::btn_modificar_Click(System::Object^ sender, System::EventArgs^ e)
{
	Form_AgregarItem^ modificarItem = gcnew Form_AgregarItem();
	modificarItem->Text = L"Modificar Item";
	modificarItem->textBox_codigo->Enabled = false;
	modificarItem->textBox_codigo->Text = this->tabla->CurrentCell->Value->ToString();
	modificarItem->btn_AgregarItem->Enabled = false;
	modificarItem->btn_AgregarItem->Visible = false;
	modificarItem->btn_modificar->Location = System::Drawing::Point(283, 317);
	modificarItem->comboBox_tipo->Enabled = false;
	modificarItem->ShowDialog();
	this->UpdateGrid();
	return System::Void();
}

System::Void CppCLRWinFormsProject::Form1::btn_quitar_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void CppCLRWinFormsProject::Form1::Form1_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->UpdateGrid();
	return System::Void();
}
