#include "pch.h"
#include "Form_AgregarItem.h"
#include "Item.h"
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

        std::ofstream archStock;
        archStock.open("stock.dat", std::ios::app | std::ios::binary);
        if (!archStock.fail())
            archStock.write((char*)&articulo, sizeof(Reg::itemStock));
        archStock.close();
        this->Close();
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
