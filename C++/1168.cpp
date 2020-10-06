#include <iostream>
using namespace std;

int main()
{  
    int a,b;
    
    cin>>a;
    cin>>b;
    
    if (b == 1 || b == 2) {
       cout<< (13 + 100 - (a / 10000))<<endl;
    }
    else {
        cout<<(13 - a / 10000)<<endl;
    }
}
