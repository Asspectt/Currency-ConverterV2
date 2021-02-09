#include <iostream>
#include <Windows.h>
#include <conio.h>	
#include <cmath>

using namespace std;
float takeInput1();

float euroExchangeCad1()
{
	double euroExchangeCad{ 1.5412 };

	return euroExchangeCad;
}

float japaneseExchangeCad1()
{
	double japaneseExchangeCad{ 0.0121 };

	return japaneseExchangeCad;
}

float poundsExchangeCad1()
{
	double poundsExchangeCad{ 1.7557 };

	return poundsExchangeCad;
}

float usdExchangeCad1()
{
	double usdExchangeCad{ 1.2740 };

	return usdExchangeCad;
}

void resultsEuroCad()
{
	float input1{ takeInput1() };
	double euroExchangeCad{ euroExchangeCad1() };


	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "Euro to Cad is:	";

	cout << input1 * euroExchangeCad << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}


void resultsYenCad()
{
	float input1{ takeInput1() };
	double japaneseExchangeCad{ japaneseExchangeCad1() };

	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "Japanese Yen to Cad is:	";

	cout << input1 * japaneseExchangeCad << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}

void resultsPoundsCad()
{
	float input1{ takeInput1() };
	double poundsExchangeCad{ poundsExchangeCad1() };

	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "British Pounds to Cad is:	";

	cout << input1 * poundsExchangeCad << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}

void resultsUsdCad()
{
	float input1{ takeInput1() };
	double usdExchangeCad{ usdExchangeCad1() };

	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "United States Dollar to Cad is:	";

	cout << input1 * usdExchangeCad << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}



int convertToCad()
{
	int choiceCad1;
	bool choiceCad = true;
	while (choiceCad != false) {
		cout << "Converting To Cad!\n";
		Sleep(250);
		cout << "\n";
		cout << "What Currency Are you Converting to Cad?\n";
		cout << "\n";
		cout << "1 - Euro\n";
		cout << "\n";
		cout << "2 - Japanese Yen\n";
		cout << "\n";
		cout << "3 - British Pounds\n";
		cout << "\n";
		cout << "4 - United States Dollar\n";
		cout << "\n";
		cout << "Enter here:   ";

		cin >> choiceCad1;

		switch (choiceCad1) {
		case 1:
			resultsEuroCad();
			break;
		case 2:
			resultsYenCad();
			break;
		case 3:
			resultsPoundsCad();
			break;
		case 4:
			resultsUsdCad();
			break;
		}
		return 0;
	}
}