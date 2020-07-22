#include <stdio.h>

int main()
{  
    int a,b;
    
    scanf_s("%d %d", &a, &b);
    
    if (b == 1 || b == 2) {
        printf("%d", 13 + 100 - (a / 10000));
    }
    else {
        printf("%d", 13 - a / 10000);
    }
}
