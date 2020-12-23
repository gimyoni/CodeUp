#include <stdio.h>
int main(){
    int a, result;
    scanf("%d",&a);
    for(int i=1; i<=9; i++){
        result = a*i;
        for(int j=1; j<=result; j++){
            printf("*");
        }
        printf("\n");
    }
}
