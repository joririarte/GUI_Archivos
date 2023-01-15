#include "pch.h"
#include "GlobalFunctions.h"
#include <fstream>

std::string globalFunctions::toStandardString(System::String^ string)
{
	using System::Runtime::InteropServices::Marshal;
	System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
	char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
	std::string returnString(charPointer, string->Length);
	Marshal::FreeHGlobal(pointer);
	return returnString;
}

System::String^ globalFunctions::toSystemString(std::string str)
{
	return gcnew System::String(str.c_str());
}

bool globalFunctions::buscar(int cod, Reg::itemStock& articulo)
{
	std::ifstream archStock;
	bool encontrado = false;
	archStock.open("stock.dat", std::ios::binary);
	if (!archStock.fail()) {
		do {
			archStock.read((char*)&articulo, sizeof(Reg::itemStock));
			if (cod == articulo.codigo) {
				encontrado = true;
			}
		} while (!archStock.eof() && !encontrado);
	}
	archStock.close();
	return encontrado;
}

bool globalFunctions::altaRegistro(Reg::itemStock articulo)
{
	std::ofstream archStock;
	bool exito = false;
	archStock.open("stock.dat", std::ios::app | std::ios::binary);
	if (!archStock.fail()) {
		archStock.write((char*)&articulo, sizeof(Reg::itemStock));
		exito = true;
	}
	archStock.close();
	return exito;
}

bool globalFunctions::modificarRegistro(Reg::itemStock articuloNuevo)
{
	bool exito = false;
	std::fstream archStock;
	archStock.open("stock.dat", std::ios::in | std::ios::out | std::ios::binary);
	if (!archStock.fail()) {
		Reg::itemStock articuloViejo;
		int pos;
		do {
			pos = archStock.tellg();
			archStock.read((char*)&articuloViejo, sizeof(Reg::itemStock));
			if (articuloViejo.codigo == articuloNuevo.codigo) {
				articuloViejo = articuloNuevo;
				archStock.seekp(pos, std::ios::beg);
				archStock.write((char*)&articuloViejo, sizeof(Reg::itemStock));
				exito = true;
				break;
			}
		} while (!archStock.eof());
	}
	archStock.close();
	return exito;
}

bool globalFunctions::borrarRegistro(Reg::itemStock articulo)
{

	return false;
}
