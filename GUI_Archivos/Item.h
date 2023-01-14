#pragma once
#include<string>
namespace Reg
{
	struct itemStock {
		int codigo, cantActual, cantMinima;
		int tipo;//0: Procesador, 1: Motherboard, 2: RAM,3: Placa de Video.
		char descripcion[20];
		float precio;
	};
};
