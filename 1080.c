#include <stdio.h>

int main()
{
    int a;
    scanf_s("%d", &a);

    int sum=0;
    for (int i = 1; i <= a; i++) {
        sum += i;
        if (sum >= a) {
            printf("%d", i);
            break;
        }
    }

    return 0;
}