#include <iostream>
#include <Windows.h>
#include <conio.h>	
#include <cmath>
#include "Discord.h"
#include <chrono>

using namespace std;

int mainButNot();
Discord* g_Discord;


int main()
{
	g_Discord->Initialize();
	g_Discord->Update();
	SetConsoleTitle("Aspect's Currency Converter");
	mainButNot();

}