#include <iostream>
using namespace std;

int main()
{  
    double a;
   
    cin>> a;
    
    if((a>=30 && a<=40)||(a>=60 && a<=70)){
        cout<<"win"<<endl;
    }else{
        cout<<"lose"<<endl;
    }
    return 0;
}
