#pragma once
#include <string>
#include "Item.h"
namespace globalFunctions {
 std::string toStandardString(System::String^ string);
 System::String^ toSystemString(std::string str);
 bool buscar(int cod, Reg::itemStock& articulo);
}
