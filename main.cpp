#include <iostream>

using namespace std;

int main() {
	int number;
	cout << "Hello, dearest User!" << endl;
	cout << "Think number... and input it here " << endl;
	cin >> number;

	cout << "Checking input..." << endl;

	while (number == 0) {
		cout << "Sorry '0' is not availiable" << endl;
		cin >> number;
	}
	
	cout << "The programm works OK..." << endl;

	int another_number;
	cout << "Input another nember here " << endl;
	cin >> another_number;
	while (number == another_number) {
		cout << "Sorry "<< another_number << " mathes previous number " << number << endl;
		cin >> number;
	}

	cout << "The sum of inputed numers is " << number + another_number << endl;
	cout << "The differance of inputed numers is " << number - another_number << endl;
	cout << "The multiplication of inputed numers is " << number * another_number << endl;
	cout << "The divion of inputed numers is " << another_number / number << endl;
	cout << "The program is ended." << endl;
	cout << "Goodbye, dearest User!" << endl;

	int quality;
	cout << "We need your feedback. Please, input 10." << endl;
	cin >> quality;
	while (quality != 10) {
		cout << "WRONG INPUT! Please, input 10." << endl;
		cin >> quality;
	}
	cout << "Thank you for so high mark! We appriciate your opinion!" << endl;

	return 0;
}
