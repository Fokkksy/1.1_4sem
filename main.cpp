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
	
	return 0;
}
