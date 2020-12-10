#include<stdio.h> 
#include<math.h>
 
int main(){
    int n, k;
    
    scanf("%d %d", &n, &k);
    if(n==0){
        printf("1");
        return 0;
    }
    long long int result = pow(n, k);
    printf("%d", result);
}
