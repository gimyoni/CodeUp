#include <iostream>
using namespace std;

int main() {
	int a, i,sum = 0;
	cin >> a;
	for (i = 1; ; i++)
	{
		sum += i;
		if (sum >= a) break;
	}
	cout << i << endl;
	
	return 0;
}
