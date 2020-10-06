#include <iostream>
using namespace std;

int main()
{  
    int a,b,c;
    
    cin>>a;
    cin>>b;
    cin>>c;
    
    if ((b >c || a>c) && (c >= a || c>=b)) {
        cout<<c<<endl;
    }
    else if ((a > b || c > b) && (b >= a || b >= c)) {
        cout<<b<<endl;
    }
    else {
        cout<<a<<endl;
    }
}
