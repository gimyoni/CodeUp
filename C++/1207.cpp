#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	
	int sum = a + b + c + d;
	if (sum == 1) {
    	cout<<"도"<<endl;
	}
	else if (sum == 2) {
		cout<<"개"<<endl;
	}
	else if (sum == 3) {
	    cout<<"걸"<<endl;
	}
	else if (sum == 4) {
		cout<<"윷"<<endl;
	}
	else {
		cout<<"모"<<endl;
	}
	return 0;
}
