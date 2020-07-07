#include <stdio.h>

int main()
{  
    int a;
    scanf_s("%d", &a);
    if (a == 0 || a == 1) {
        printf("%d", !a);
    }
}
