#pragma once
#include<string>
namespace Reg
{
	struct itemStock {
		int codigo, cantActual, cantMinima;
		int tipo;//0: Procesador, 1: Motherboard, 2: RAM,3: Placa de Video.
		char descripcion[20];
		float precio;//trabajar con int en centimos y ver como poner la coma en el front
	};
	struct itemVenta {
		int codVenta;//codigo de la venta
		int codArticulo[100];//hasta 100 articulos en la misma venta
		char descripcion[100][20];
		int tipo[100];
		float precioF = 0.0f;
		char medioPago;//Efectivo/Transferencia: E; Tarjeta: Debito: D; Credito: C
	};
	struct Opcion {
		itemStock procesador, mother, ram, placaVideo;
		float precioTotal;
	};
};
