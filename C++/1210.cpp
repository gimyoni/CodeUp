#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin>> a;
	cin>>b;
	
	int sum = 0;
	switch (a) {
	case 1:
		sum += 400;
		break;
	case 2:
		sum += 340;
		break;
	case 3:
		sum += 170;
		break;
	case 4:
		sum += 100;
		break;
	case 5:
		sum += 70;
	}

	switch (b) {
	case 1:
		sum += 400;
		break;
	case 2:
		sum += 340;
		break;
	case 3:
		sum += 170;
		break;
	case 4:
		sum += 100;
		break;
	case 5:
		sum += 70;
	}

	if (sum > 500) {
    	cout<<"angry"<<endl;
	}
	else {
		cout<<"no angry"<<endl;
	}

	return 0;
}
