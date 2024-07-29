#pragma once
#include <iostream>
#ifndef	 _CPUNAMEH
#define  _CPUNAMEH
#ifdef  CPUNAME_EXPORTS
#define CPUNAME_API __declspec(dllexport) 
#else
#define CPUNAME_API __declspec(dllimport)
#endif
extern "C" CPUNAME_API std::string Infa();

#endif
