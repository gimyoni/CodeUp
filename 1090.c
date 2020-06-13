
#include<stdio.h>

int main() {

    long long int a, r, n;
    scanf_s("%lld %lld %lld", &a, &r, &n);

    for (int j = 1; j < n; j++) {

        a *= r;

    }
    printf("%lld", a);


    return 0;
}
