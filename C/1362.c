#include <stdio.h>

int main() {
    
    int n, i,j;
    scanf("%d",&n);
    int max=0;
    for(i = 1; i<=n; i++){
        max += i;
    }
    
    for(i = 1; i<=n; i++) { 
        for(j = 1; j<=i; j++) { 
            printf("%d ",max--); 
        } 
        printf("\n"); 
    }

    
    return 0;
}
  
