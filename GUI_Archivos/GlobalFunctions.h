#pragma once
#include <string>
namespace globalFunctions {
 std::string toStandardString(System::String^ string);
 System::String^ toSystemString(std::string str);
}
