#include <stdio.h>

int main()
{  
    int a;
    
    scanf_s("%d", &a);
    int num1 = a % 10;
    int num2 = a/10;
    
    int b = (num1 * 10+ num2) * 2;
    if (b >= 100) {
        b -= 100;
    }
    printf("%d\n", b);

    if (b <= 50) {
        printf("GOOD");
    }
    else {
        printf("OH MY GOD");
    }
}
