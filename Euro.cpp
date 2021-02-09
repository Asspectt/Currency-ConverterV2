#include <iostream>
#include <Windows.h>
#include <conio.h>	
#include <cmath>

using namespace std;
float takeInput1();

float usdExchangeEuro1()
{
	double usdExchangeEuro{ 0.8268 };

	return usdExchangeEuro;
}

float japaneseExchangeEuro1()
{
	double japaneseExchangeEuro{ 0.0078 };

	return japaneseExchangeEuro;
}

float poundsExchangeEuro1()
{
	double poundsExchangeEuro{ 1.1387 };

	return poundsExchangeEuro;
}

float cadExchangeEuro1()
{
	double canadianExchangeEuro{ 0.6486 };

	return canadianExchangeEuro;
}

void resultsUsdEuro()
{
	float input1{ takeInput1() };
	double usdExchangeEuro{ usdExchangeEuro1() };


	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "Usd to Euro is:	";

	cout << input1 * usdExchangeEuro << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}


void resultsYenEuro()
{
	float input1{ takeInput1() };
	double japaneseExchangeEuro{ japaneseExchangeEuro1() };

	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "Japanese Yen to Euro is:	";

	cout << input1 * japaneseExchangeEuro << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}

void resultsPoundsEuro()
{
	float input1{ takeInput1() };
	double poundsExchangeEuro{ poundsExchangeEuro1() };

	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "British Pounds to Euro is:	";

	cout << input1 * poundsExchangeEuro << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}

void resultsCadEuro()
{
	float input1{ takeInput1() };
	double cadExchangeEuro{ cadExchangeEuro1() };

	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "Canadian Dollar to Euro is:	";

	cout << input1 * cadExchangeEuro << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}



int convertToEuro()
{
	int choiceEuro1;
	bool choiceEuro = true;
	while (choiceEuro != false) {
		cout << "Converting To Euro!\n";
		Sleep(250);
		cout << "\n";
		cout << "What Currency Are you Converting to Euro?\n";
		cout << "\n";
		cout << "1 - United States Dollar\n";
		cout << "\n";
		cout << "2 - Japanese Yen\n";
		cout << "\n";
		cout << "3 - British Pounds\n";
		cout << "\n";
		cout << "4 - Canadian Dollar\n";
		cout << "\n";
		cout << "Enter here:   ";

		cin >> choiceEuro1;

		switch (choiceEuro1) {
		case 1:
			resultsUsdEuro();
			break;
		case 2:
			resultsYenEuro();
			break;
		case 3:
			resultsPoundsEuro();
			break;
		case 4:
			resultsCadEuro();
			break;
		}
		return 0;
	}
}