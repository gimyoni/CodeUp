#include <stdio.h>

int i, j, k, a[10000];
int main()
{
    scanf_s("%d", &k);
    int min = 24;

    for (i = 0; i < k; i++)
    {
      scanf_s("%d", &a[i]);
        if (min > a[i])
            min = a[i];
    }
     printf("%d", min);

    return 0;
}