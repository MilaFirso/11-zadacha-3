#pragma once
#ifdef LeaverDinLab_EXPORTS
#define LeaverDinLab_API __declspec(dllexport)
#else
#define LeaverDinLab_API __declspec(dllimport)
#endif

#include<iostream> 
#include <string> 

class Leaver
{
public:
	void leave(std::string name);
};