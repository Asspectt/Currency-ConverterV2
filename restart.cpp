#include <iostream>
#include <Windows.h>
#include <conio.h>	
#include <cmath>



using namespace std;



int restart()
{
	int choice2;
	bool lastChoice = true;
	while (lastChoice != false) {
		Sleep(300);
		cout << "\n";
		cout << "Anymore you need to convert?\n";
		cout << "\n";
		cout << "1 - yes\n";
		cout << "\n";
		cout << "2 - no\n";
		cout << "\n";
		cout << "Enter here:  ";

		cin >> choice2;

		switch (choice2) {
		case 1:
			cout << "\n";
			cout << "yes? ok!\n";
			cout << "\n";
			Sleep(400);
			lastChoice = false;
			break;

		case 2:
			cout << "\n";
			cout << "no? ok byeee!\n";
			cout << "\n";
			Sleep(300);
			exit(0);
			break;

		default:
			cout << "\nthat was not a valid choice!\n";
			cout << "choose again.\n";
			cout << "\n";
			break;
		}

	}
}