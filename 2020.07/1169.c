#include <stdio.h>

int main()
{  
    int a;
    
    scanf_s("%d", &a);
    
    if (a<=13) {
        printf("%d 3", 13 -a);
    }
    else {
        printf("%d 1", 101-a+12);
    }
}
