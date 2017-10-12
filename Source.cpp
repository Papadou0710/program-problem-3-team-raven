/*

Ray Chen - Period 1

Three Digit Ascend Descend Selection

3 digit number and find stuff about it.

*/

// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
#include <math.h>

// Namespaces
using namespace std;

//variables
int number;
int digit1;
int digit2;
int digit3;

// Functions()
void pause() {

	cout << "Press any key to continue . . .";

	while (!_kbhit());

	_getch();

	cout << '\n';
}

// MAIN
void main() {
	for(int iguess = 0; iguess < 30; iguess = iguess + 1)
	{
		cout << "Enter a three digit number. \n";
		cin >> number;

		digit1 = (number / 100);
		digit2 = (number - digit1 * 100) / 10;
		digit3 = (number - digit1 * 100 - (digit2 * 10));

		if (digit1 < digit2 && digit2 < digit3) {
			cout << "Ascending \n";
		}
		else if (digit1 > digit2 && digit2 > digit3) {
			cout << "Descending \n";
		}
		else {
			cout << "Neither \n";
		}
		pause(); // pauses to see the displayed text
	}
}
