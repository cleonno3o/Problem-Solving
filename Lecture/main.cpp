#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>

int main() {

	using namespace std;

	int num = 0;
	cin >> num;
	if (num % 2 == 0) {
		cout << "Even" << endl;
	}
	else {
		cout << "Odd" << endl;
	}
	return 0;
}