#include <iostream>
#include <Windows.h>
#include <conio.h>	
#include <cmath>

using namespace std;
float takeInput1();

float usdExchangePounds1()
{
	double usdExchangePounds{ 0.7257 };

	return usdExchangePounds;
}

float japaneseExchangePounds1()
{
	double japaneseExchangePounds{ 0.0069 };

	return japaneseExchangePounds;
}

float euroExchangePounds1()
{
	double euroExchangePounds{ 0.8781 };

	return euroExchangePounds;
}

float cadExchangePounds1()
{
	double cadExchangePounds{ 0.5693 };

	return cadExchangePounds;
}

void resultsUsdPounds()
{
	float input1{ takeInput1() };
	double usdExchangePounds{ usdExchangePounds1() };


	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "Usd to British Pounds is:	";

	cout << input1 * usdExchangePounds << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}


void resultsYenPounds()
{
	float input1{ takeInput1() };
	double japaneseExchangePounds{ japaneseExchangePounds1() };

	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "Japanese Yen to British Pounds is:	";

	cout << input1 * japaneseExchangePounds << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}

void resultsEuroPounds()
{
	float input1{ takeInput1() };
	double euroExchangePounds{ euroExchangePounds1() };

	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "Euro to British Pounds is:	";

	cout << input1 * euroExchangePounds << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}

void resultsCadPounds()
{
	float input1{ takeInput1() };
	double cadExchangePounds{ cadExchangePounds1() };

	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "Canadian Dollar to Pounds is:	";

	cout << input1 * cadExchangePounds << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}



int convertToPounds()
{
	int choicePounds1;
	bool choicePounds = true;
	while (choicePounds != false) {
		cout << "Converting To British Pounds!\n";
		Sleep(250);
		cout << "\n";
		cout << "What Currency Are you Converting to British Pounds?\n";
		cout << "\n";
		cout << "1 - United States Dollar\n";
		cout << "\n";
		cout << "2 - Japanese Yen\n";
		cout << "\n";
		cout << "3 - Euro\n";
		cout << "\n";
		cout << "4 - Canadian Dollar\n";
		cout << "\n";
		cout << "Enter here:   ";

		cin >> choicePounds1;

		switch (choicePounds1) {
		case 1:
			resultsUsdPounds();
			break;
		case 2:
			resultsYenPounds();
			break;
		case 3:
			resultsEuroPounds();
			break;
		case 4:
			resultsCadPounds();
			break;
		}
		return 0;
	}
}