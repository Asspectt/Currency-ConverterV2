#include <iostream>
#include <Windows.h>
#include <conio.h>	
#include <cmath>

using namespace std;

int convertToUsd();
int convertToCad();
int convertToEuro();
int convertToPounds();
int convertToYen();
int restart();



int mainButNot()
{
	system("Color 0B");

	int choice1;
	
	bool choices = true;
	while (choices != false) {
		cout << "--------------------------------------------------------\n";
		cout << "\n";
		cout << "Welcome to Aspect's Currency Converter\n";
		cout << "\n";
		cout << "--------------------------------------------------------\n";
		cout << "\n";
		cout << "Choose the currency to convert to.\n";
		Sleep(200);
		cout << "\n";
		cout << "1 - USD\n";
		cout << "\n";
		Sleep(200);
		cout << "2 - Canadian Dollar\n";
		cout << "\n";
		Sleep(200);
		cout << "3 - Euro\n";
		cout << "\n";
		Sleep(200);
		cout << "4 - British Pound\n";
		cout << "\n";
		Sleep(200);
		cout << "5 - Japanese Yen\n";
		cout << "\n";
		Sleep(200);
		cout << "Enter Here:  ";

		cin >> (choice1);

		switch (choice1) {
		case 1:
			cout << '\n';
			convertToUsd();
			restart();
			break;
		case 2:
			cout << "\n";
			convertToCad();
			restart();
			break;
		case 3:
			cout << "\n";
			convertToEuro();
			restart();
			break;
		case 4:
			cout << "\n";
			convertToPounds();
			restart();
			break;
		case 5:
			cout << "\n";
			convertToYen();
			restart();
			break;
		default:
			cout << "\nNot a Valid Choice. \n";
			cout << "Choose Again.\n";
			cout << "\n";
			return mainButNot();
			
			


		}

	}
	return 0;
}