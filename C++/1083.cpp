#include <iostream>
using namespace std;

int main() {
	int a, i;
	cin >> a;
	for (i = 1; i <= a; i++)
	{
		if (i == 3 || i == 6 || i == 9) {
			cout << "X ";
		}
		else {
			cout << i<<" ";
		}
	}
	return 0;
}
