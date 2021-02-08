#include <iostream>
#include <Windows.h>
#include <conio.h>	
#include <cmath>

using namespace std;

void resultsEuro();
void resultsYen();
void resultsPounds();
void resultsCad();
int restart();


int mainButNot()
{
	int choice1;
	bool choices = true;
	while (choices != false) {
		cout << "--------------------------------------------------------\n";
		cout << "\n";
		cout << "Welcome to Aspect's Currency Converter\n";
		cout << "\n";
		cout << "--------------------------------------------------------\n";
		cout << "\n";
		cout << "Choose the currency of your choice. (Only Converts the currency of your choosing to usd)\n";
		Sleep(200);
		cout << "\n";
		cout << "1 - Euro\n";
		cout << "\n";
		Sleep(200);
		cout << "2 - Japenese Yen\n";
		cout << "\n";
		Sleep(200);
		cout << "3 - British Pound\n";
		cout << "\n";
		Sleep(200);
		cout << "4 - Canadian Dollar\n";
		cout << "\n";
		Sleep(200);
		cout << "Enter Here:  ";

		cin >> (choice1);

		switch (choice1) {
		case 1:
			cout << '\n';
			cout << "Euro!";
			cout << '\n';
			resultsEuro();
			restart();
			break;
		case 2:
			cout << "\n";
			cout << "Yen!";
			cout << "\n";
			resultsYen();
			restart();
			break;
		case 3:
			cout << "\n";
			cout << "Pounds!";
			cout << "\n";
			resultsPounds();
			restart();
			break;
		case 4:
			cout << "\n";
			cout << "Canadian Dollar!";
			cout << "\n";
			resultsCad();
			restart();
			break;
		default:
			cout << "\nNot a Valid Choice. \n";
			cout << "Choose Again.\n";
			cout << "\n";
			break;

		}

	}
	return 0;
}