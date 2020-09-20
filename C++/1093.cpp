#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int a[24]={0,};
    
    for(int i=0;i<n;i++){
        cin>>k;
        a[k-1] +=1;
    }
    
    for(int z=0;z<23;z++){
        cout<<a[z]<<" ";
    
    }
}
