#include <iostream>
using namespace std;

int main() {
	long long int a;
	cin >> a;

	if (90<=a && a <= 100) {
		cout << "A" << endl;
	}
	else if(70<=a && a<90){
		cout << "B" << endl;
	}
	else if (40 <= a && a < 70) {
		cout << "C" << endl;
	}
	else {
		cout << "D" << endl;
	}
	return 0;
}
