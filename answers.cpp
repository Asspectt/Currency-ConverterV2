#include <iostream>
#include <Windows.h>
#include <conio.h>	
#include <cmath>

using namespace std;
float takeInput1();

float euroExchange1()
{
	double euroExchange{ 1.2038 };

	return euroExchange;
}

float japaneseExchange1()
{
	double japaneseExchange{ 0.0094 };
	
	return japaneseExchange;
}

float poundsExchange1()
{
	double poundsExchange{ 1.3729 };

	return poundsExchange;
}

float canadianExchange1()
{
	double canadianExchange{ 0.7835 };

	return canadianExchange;
}

void resultsEuro()
{
	float input1{ takeInput1() };
	double euroExchange{ euroExchange1() };


	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "Euro to Usd is:	";

	cout << input1 * euroExchange << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}


void resultsYen()
{
	float input1{ takeInput1() };
	double japaneseExchange{ japaneseExchange1() };

	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "Japanese Yen to Usd is:	";

	cout << input1 * japaneseExchange << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}

void resultsPounds()
{
	float input1{ takeInput1() };
	double poundsExchange{ poundsExchange1() };

	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "British Pounds to Usd is:	";

	cout << input1 * poundsExchange << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}

void resultsCad()
{
	float input1{ takeInput1() };
	double canadianExchange{ canadianExchange1() };

	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "Canadian Dollar to Usd is:	";

	cout << input1 * canadianExchange << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}