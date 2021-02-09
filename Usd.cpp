#include <iostream>
#include <Windows.h>
#include <conio.h>	
#include <cmath>

using namespace std;
float takeInput1();

float euroExchangeUsd1()
{
	double euroExchangeUsd{ 1.2103 };

	return euroExchangeUsd;
}

float japaneseExchangeUsd1()
{
	double japaneseExchangeUsd{ 0.0095 };
	
	return japaneseExchangeUsd;
}

float poundsExchangeUsd1()
{
	double poundsExchangeUsd{ 1.3781 };

	return poundsExchangeUsd;
}

float canadianExchangeUsd1()
{
	double canadianExchangeUsd{ 0.7851 };

	return canadianExchangeUsd;
}

void resultsEuroUsd()
{
	float input1{ takeInput1() };
	double euroExchangeUsd{ euroExchangeUsd1() };


	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "Euro to Usd is:	";

	cout << input1 * euroExchangeUsd << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}


void resultsYenUsd()
{
	float input1{ takeInput1() };
	double japaneseExchangeUsd{ japaneseExchangeUsd1() };

	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "Japanese Yen to Usd is:	";

	cout << input1 * japaneseExchangeUsd << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}

void resultsPoundsUsd()
{
	float input1{ takeInput1() };
	double poundsExchangeUsd{ poundsExchangeUsd1() };

	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "British Pounds to Usd is:	";

	cout << input1 * poundsExchangeUsd << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}

void resultsCadUsd()
{
	float input1{ takeInput1() };
	double canadianExchangeUsd{ canadianExchangeUsd1() };

	cout << "--------------------------------------------------------\n";
	cout << "\n";

	cout << "Canadian Dollar to Usd is:	";

	cout << input1 * canadianExchangeUsd << "\n";
	cout << "\n";
	cout << "--------------------------------------------------------\n";
}



int convertToUsd()
{
	int choiceUsd1;
	bool choiceUsd = true;
	while (choiceUsd != false) {
		cout << "Converting To Usd!\n";
		Sleep(250);
		cout << "\n";
		cout << "What Currency Are you Converting to Usd?\n";
		cout << "\n";
		cout << "1 - Euro\n";
		cout << "\n";
		cout << "2 - Japanese Yen\n";
		cout << "\n";
		cout << "3 - British Pounds\n";
		cout << "\n";
		cout << "4 - Canadian Dollar\n";
		cout << "\n";
		cout << "Enter here:   ";

		cin >> choiceUsd1;

		switch (choiceUsd1) {
		case 1:
			resultsEuroUsd();
			break;
		case 2:
			resultsYenUsd();
			break;
		case 3:
			resultsPoundsUsd();
			break;
		case 4:
			resultsCadUsd();
			break;
		}
		return 0;
	}
}