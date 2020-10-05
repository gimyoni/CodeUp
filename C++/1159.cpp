#include <iostream>
using namespace std;

int main()
{  
    int a;
   
    cin>> a;
    
    if((a>=50 && a<= 70)||(a%6==0)){
        cout<<"win"<<endl;
    }else{
        cout<<"lose"<<endl;
    }
    return 0;
}
