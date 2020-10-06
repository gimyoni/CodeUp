#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin>>a;
	cin>>b;
	cin>>c;
	
	if (c >= 10) {
    	cout<<a<<b<<c<<endl;
	}
	else {
		cout<<a<<b<<"0"<<c<<endl;
	}
}
