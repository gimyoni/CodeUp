#include <stdio.h>
int main(){
    int n, a;
    scanf("%d",&n);
    for(int i =1; i<=n; i++){
        scanf("%d",&a);
        if(i==1){
            printf("%d ",a);
        }
        if(i==n/2+1){
            printf("%d ",a);
        }
        if(i==n){
            printf("%d",a);
        }
    }
}
