#include <stdio.h>

int main()
{  
    int a, b, c;
    scanf_s("%d %d %d", &a, &b, &c);
   
    if (b>=a && c>=a) {
        printf("%d",a);
    }
    else if (a >= b && c >= b) {
        printf("%d", b);
    }
    else {
        printf("%d",c);
    }
}
