#include "pch.h"
#include "GlobalFunctions.h"

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
