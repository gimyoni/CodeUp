#include <stdio.h>

int factorial(int num){
    int i, result =1;
    
    for(i=1; i<=num; i++){
        result*=i;
    }
    return result;
}

int main() {
    int n, r, result;
    
    scanf("%d %d", &n, &r);
    
    int n_f = factorial(n);
    int r_f = factorial(r);
    int n_r_f = factorial(n-r);
    
    result = (n_f/(r_f*n_r_f));
    
    printf("%d",result);
    
    
    return 0;
}
  
