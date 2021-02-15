#include <iostream>

using namespace std;

int main() {
	int number;
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
	
	return 0;
}
