#include <iostream>

using namespace std;

int main() {
	int number;
	cout << "Think number... and input it here " << endl;
	cin >> number;

	cout << "Checking input..." << endl;

	if (number == 0) {
		cout << "Sorry '0' is not availiable" << endl;
	}

	
	return 0;
}