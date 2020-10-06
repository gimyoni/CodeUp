#include <iostream>

using namespace std;

int main()
{  
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    
    if (a <= 170 || b <=170 || c <= 170) {
        cout<<"CRASH"<<endl;
    }
    else {
        cout<<"PASS"<<endl;
    }
   
}
