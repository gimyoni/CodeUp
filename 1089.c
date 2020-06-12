#include<stdio.h>

int main() {

    int a, d, n;
    scanf_s("%d %d %d", &a, &d, &n);

    for (int j = 1; j < n; j++) {

        a += d;

    }
    printf("%d", a);


    return 0;
}