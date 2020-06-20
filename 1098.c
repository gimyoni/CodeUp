#include <stdio.h>

int main()
{
    int a[101][101];  

    int h, w, n, l, d, x, y;

    scanf_s("%d %d", &h, &w); 
    scanf_s("%d", &n);     
    for (int i = 1; i <= h; i++) 
    {
        for (int j = 1; j <= w; j++) 
        {
            a[i][j] = 0; 
        }
    }

    for (int i = 1; i <= n; i++) {

        scanf_s("%d %d %d %d", &l, &d, &x, &y);
        if (d == 0) {
            for (int j = 0; j < l; j++) {
                a[x][y + j] = 1;
            }
        }
        else {
            for (int j = 0; j < l; j++) {
                a[x + j][y] = 1;
            }
        }
    }

    for (int i = 1; i <= h; i++) 
    {
        for (int j = 1; j <= w; j++) 
        {
            printf("%d ", a[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}

