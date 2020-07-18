#include <stdio.h>

int main()
{  
    int a;
    
    scanf_s("%d", &a);
    
    if (a % 10 == 1) {
        if (a == 11) {
            printf("11th");
        }
        else {
            printf("%dst",a);

        }
    }
    else if (a%10 ==2) {
        if (a == 12) {
            printf("12th");
        }
        else {
            printf("%dnd",a);
        }
    }
    else if(a%10==3) {
        if (a == 13) {
            printf("13th");
        }
        else {
            printf("%drd",a);
        }
    }
    else {
        printf("%dth", a);
    }
}
