#include <stdio.h>
int main(){
    int num, num2, sum=0;
    scanf("%d", &num);
    for(int i=0; i<num; i++){
        scanf("%d",&num2);
        if(num2%5==0){
            sum+=num2;
        }
    }
    printf("%d",sum);
    
}
