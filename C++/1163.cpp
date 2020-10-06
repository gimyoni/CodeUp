#include <iostream>
using namespace std;


int main() 
{
	int a, b, c;
    cin>>a;
    cin>>b;
    cin>>c;
    
	if (((a + b + c)/ 100)%2 == 0)
	{
	    cout<<"대박"<<endl;
	}
	else {
		cout<<"그럭저럭"<<endl;
	}
	return 0;
}
