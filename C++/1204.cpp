#include <iostream>
using namespace std;

int main()
{  
    int a;
    
    cin>>a;
    
    if (a % 10 == 1) {
        if (a == 11) {
            cout<<"11th"<<endl;
        }
        else {
            cout<<a<<"st"<<endl;

        }
    }
    else if (a%10 ==2) {
        if (a == 12) {
            cout<<"12th"<<endl;
        }
        else {
            cout<<a<<"nd"<<endl;
        }
    }
    else if(a%10==3) {
        if (a == 13) {
            cout<<"13th"<<endl;
        }
        else {
            cout<<a<<"rd"<<endl;
        }
    }
    else {
       cout<<a<<"th"<<endl;
    }
}
