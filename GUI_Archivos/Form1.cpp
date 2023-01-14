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