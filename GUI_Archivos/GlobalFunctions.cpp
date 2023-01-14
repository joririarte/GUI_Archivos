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