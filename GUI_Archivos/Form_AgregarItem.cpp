#include "pch.h"
#include "Form_AgregarItem.h"
#include "GlobalFunctions.h"
#include <string>
#include <fstream>

using namespace globalFunctions;

System::Void GUI_Archivos::Form_AgregarItem::btn_AgregarItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (this->textBox_codigo->TextLength > 0 &&
        this->comboBox_tipo->SelectedIndex > -1 &&
        this->textBox_precio->TextLength > 0 &&
        this->textBox_descripcion->TextLength > 0 &&
        this->textBox_CantActual->TextLength > 0 &&
        this->textBox_CantMin->TextLength > 0) {
        Reg::itemStock articulo;
        if (!buscar(std::stoi(toStandardString(this->textBox_codigo->Text)), articulo)) {
            this->cargarRegistro(articulo);
            if (globalFunctions::altaRegistro(articulo))
                MessageBox::Show(L"Articulo registrado exitosamente!", L"Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
            this->Close();
        }
        else
            MessageBox::Show(L"Ya existe un artículo con ese código!!");
    }
    else
        MessageBox::Show(L"Faltan campos por completar!!");
    return System::Void();
}

System::Void GUI_Archivos::Form_AgregarItem::btn_Cancelar_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
    return System::Void();
}

System::Void GUI_Archivos::Form_AgregarItem::btn_modificar_Click(System::Object^ sender, System::EventArgs^ e)
{
    auto result = MessageBox::Show(L"Está a punto de modificar un registro!", L"Atención!", MessageBoxButtons::OKCancel,MessageBoxIcon::Warning);
    if (result == System::Windows::Forms::DialogResult::OK) {
        Reg::itemStock articulo;
        this->cargarRegistro(articulo);
        if (globalFunctions::modificarRegistro(articulo)) {
            MessageBox::Show(L"Registro modificado exitosamente!", L"Éxito!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
            this->Close();
        }
        else
            MessageBox::Show(L"Error en modificación de registro!", L"Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    return System::Void();
}

System::Void GUI_Archivos::Form_AgregarItem::btn_Borrar_Click(System::Object^ sender, System::EventArgs^ e)
{
    auto result = MessageBox::Show(L"Está a punto de BORRAR un registro! \n\nEsta acción NO SE PUEDE deshacer", L"Atención!", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning);
    if (result == System::Windows::Forms::DialogResult::OK) {
        Reg::itemStock articulo;
        this->cargarRegistro(articulo);//FALTA IMPLEMENTAR BORRAR REGISTRO EN GLOBAL FUNCTIONS
        //if (globalFunctions::borrarRegistro(articulo)) {
            MessageBox::Show(L"Registro BORRADO exitosamente!", L"Éxito!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
            this->Close();
        //}
        //else
           // MessageBox::Show(L"Error en modificación de registro!", L"Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    return System::Void();
}

System::Void GUI_Archivos::Form_AgregarItem::textBox_codigo_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    Reg::itemStock articulo;
    std::string text = toStandardString(this->textBox_codigo->Text);
    if (text.size() >= 6)
        if (buscar(std::stoi(text), articulo)) {
            this->completar(articulo);
        }
        else {
            this->limpiar();
        }
    else {
        this->limpiar();
    }
    return System::Void();
}

System::Void GUI_Archivos::Form_AgregarItem::completar(Reg::itemStock articulo)
{
    this->comboBox_tipo->SelectedIndex = articulo.tipo;
    this->textBox_precio->Text = toSystemString(std::to_string(articulo.precio));
    std::string descr;
    for (char l : articulo.descripcion) descr += l;
    this->textBox_descripcion->Text = toSystemString(descr);
    this->textBox_CantActual->Text = toSystemString(std::to_string(articulo.cantActual));
    this->textBox_CantMin->Text = toSystemString(std::to_string(articulo.cantMinima));
    return System::Void();
}

System::Void GUI_Archivos::Form_AgregarItem::limpiar()
{
    this->comboBox_tipo->SelectedIndex = -1;
    this->textBox_precio->Text = "";
    this->textBox_descripcion->Text = "";
    this->textBox_CantActual->Text = "";
    this->textBox_CantMin->Text = "";
    return System::Void();
}

System::Void GUI_Archivos::Form_AgregarItem::cargarRegistro(Reg::itemStock& articulo)
{
    articulo.codigo = std::stoi(toStandardString(this->textBox_codigo->Text));
    articulo.precio = std::stof(toStandardString(this->textBox_precio->Text));
    articulo.cantActual = std::stoi(toStandardString(this->textBox_CantActual->Text));
    articulo.cantMinima = std::stoi(toStandardString(this->textBox_CantMin->Text));
    articulo.tipo = this->comboBox_tipo->SelectedIndex;
    std::string descr = toStandardString(this->textBox_descripcion->Text);
    for (int i = 0; i < 20; i++) {
        if (i < descr.size())
            articulo.descripcion[i] = descr[i];
        else
            articulo.descripcion[i] = ' ';
    }
    return System::Void();
}
