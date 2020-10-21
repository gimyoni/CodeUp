#include <iostream>
using namespace std;

int main() {
    
	int a, b;
	cin>>a;
	cin>>b;
	
	if (a > b) {
		if (a % b==0 ) {
			cout<<b<<"*"<< (a / b)<<"="<<a<<endl;
		}
		else {
			cout<<"none"<<endl;
		}
	}
	else {
		if (b % a == 0) {
			cout<<a<<"*"<< (b / a)<<"="<<b<<endl;
		}
		else {
			cout<<"none"<<endl;
		}
	}
	return 0;
}
