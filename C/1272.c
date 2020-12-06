#include <stdio.h>
int main(){
    int k, h, sum=0;
    scanf("%d %d", &k,&h);
    if(k%2==0){
        sum+=k*5;
    }else{
        sum+=k/2+1;
    }
    if(h%2==0){
        sum+=h*5;
    }else{
        sum+=h/2+1;
    }
    printf("%d",sum);
}
