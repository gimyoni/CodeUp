#include <stdio.h>

int main()
{  
    int a,b;
    
    scanf_s("%d %d", &a, &b);
    
    if (b < 30) {
        if (a == 0)a = 24;
        a = a - 1;
        b = b + 30;
        printf("%d %d", a, b);
    }
    else {
        printf("%d %d", a, b - 30);
    }
}
