#include <iostream>
using namespace std;

int main()
{  
    int a;
    
    cin>>a;
    
    if (a <= 10) {
        cout<<"정상"<<endl;
    }
    else if (a <= 20) {
        cout<<"과체중"<<endl;
    }
    else {
        cout<<"비만"<<endl;
    }
}
