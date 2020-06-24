#include <stdio.h>

int main()
{
    int map[11][11];
    int i, j,x,y;
   
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            scanf_s("%d", &map[i][j]);
        }
    }
   
    x = y = 2;
    while(1)
    {
       
        if (map[x][y] == 0) {
            map[x][y] = 9;
            y++;
        }
        
        if (map[x][y] == 1) {
            y--;
            x++;
        }

        if (map[x][y] == 2) {
            map[x][y] = 9;
            break;
        }
        else if (map[x][y + 1] == 1 && map[x + 1][y] == 1) {
            if (map[x][y] == 0) {
                map[x][y] = 9;
            }
            break;
        }

    }



    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }

    return 0;
}

