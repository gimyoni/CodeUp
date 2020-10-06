#include <iostream>
using namespace std;

int main()
{  
    int a;
    
    cin>>a;
    
    if (a > 0) {
        cout<<"양수"<<endl;
    }
    else if (a < 0) {
        cout<<"음수"<<endl;
    }
    else {
        cout<<"0"<<endl;
    }
    
}
