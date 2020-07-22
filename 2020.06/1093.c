#include <stdio.h>

int n, i, t, a[24];

int main()
{
    scanf_s("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &t);
        a[t]++;
    }

    for (i = 1; i <= 23; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
