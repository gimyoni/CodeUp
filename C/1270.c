#include <stdio.h>

int main(){
    int a, result=0;
    scanf("%d",&a);

    for(int i =1; i<=a; i++){
        if(i%10==1){
            result++;
        }
    }
    printf("%d",result);
}
