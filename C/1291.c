#include <stdio.h> 
int main() { 
    int a,b,c; 
    int num=0; 
    scanf("%d %d %d",&a,&b,&c); 
    for(int i=1; i<=3000; i++) { 
        if(a%i ==0 && b%i ==0 && c%i ==0) 
            num = i; 
    } printf("%d",num); return 0; 
    
}
