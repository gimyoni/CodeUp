#include <stdio.h>

int main(){
    int n, i;
    scanf("%d",&n);
    
    for(i = 1; i <= n; i++){
        if (n % i == 0) 
            if (i != 1 && i != n)
            {
                printf("not prime"); 
                return 0; 
            }
    }        
    printf("prime");
    
    return 0;
}
