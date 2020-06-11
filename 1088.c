#include <stdio.h>

int main()
{
    int a, sum=0;

    scanf_s("%d", &a);
    
    for (int i = 1; i <= a; i++) {
  
        if(i%3==0) {
            continue;
        }
        printf("%d ", i);
    }


   return 0;
}