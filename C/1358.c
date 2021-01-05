#include<stdio.h> 
   
int main() 
{
    int i, j, n, s;
 
    scanf("%d", &n);
    s = n/2;
    
    for(i = 1; i <= n; i++)
    {
        if(i%2!=0){
            for(j = 1; j <= s; j++)
            {
                printf(" ");
            }
            for(j = 1; j <= i; j++)
            {
                printf("*");
            }
            s--;
            printf("\n");
        }    
    }
 
    return 0;
}
