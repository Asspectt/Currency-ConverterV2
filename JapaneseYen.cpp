#include <iostream>
#include <Windows.h>
#include <conio.h>	
#include <cmath>

using namespace std;

float takeInput1();

float usdExchangeYen1()
{
	double usdExchangeYen{ 104.64 };

	return usdExchangeYen;
}

float poundsExchangeYen1()
{
	double poundsExchangeYen{ 144.14 };

	return poundsExchangeYen;
}

float euroExchangeYen1()
{
	double euroExchangeYen{ 126.55 };

	return euroExchangeYen;
}

float cadExchangeYen1()
{
	double cadExchangeYen{ 82.025 };

	return cadExchangeYen;
}

void resultsUsdYen()
{
	float input1{ takeInput1() };
	double usdExchangeYen{ usdExchangeYen1() };


	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "Usd to Japanese Yen is:	";

	cout << input1 * usdExchangeYen << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}


void resultsPoundsYen()
{
	float input1{ takeInput1() };
	double japaneseExchangeYen{ poundsExchangeYen1() };

	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "British Pounds to Japanese Yen is:	";

	cout << input1 * japaneseExchangeYen << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}

void resultsEuroYen()
{
	float input1{ takeInput1() };
	double euroExchangeYen{ euroExchangeYen1() };

	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "Euro to Japanese Yen is:	";

	cout << input1 * euroExchangeYen << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}

void resultsCadYen()
{
	float input1{ takeInput1() };
	double cadExchangeYen{ cadExchangeYen1() };

	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "Canadian Dollar to Japanese Yen is:	";

	cout << input1 * cadExchangeYen << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}



int convertToYen()
{
	int choiceYen1;
	bool choiceYen = true;
	while (choiceYen != false) {
		cout << "Converting To Japanese Yen!\n";
		Sleep(250);
		cout << "\n";
		cout << "What Currency Are you Converting to Japanese Yen?\n";
		cout << "\n";
		cout << "1 - United States Dollar\n";
		cout << "\n";
		cout << "2 - British Pounds\n";
		cout << "\n";
		cout << "3 - Euro\n";
		cout << "\n";
		cout << "4 - Canadian Dollar\n";
		cout << "\n";
		cout << "Enter here:   ";

		cin >> choiceYen1;

		switch (choiceYen1) {
		case 1:
			resultsUsdYen();
			break;
		case 2:
			resultsPoundsYen();
			break;
		case 3:
			resultsEuroYen();
			break;
		case 4:
			resultsCadYen();
			break;
		}
		return 0;
	}
}