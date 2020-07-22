#include <stdio.h>

int main()
{  
    int a,b,c;
    
    scanf_s("%d %d %d", &a, &b, &c);
    
    if ((b >c || a>c) && (c >= a || c>=b)) {
        printf("%d", c);
    }
    else if ((a > b || c > b) && (b >= a || b >= c)) {
        printf("%d", b);
    }
    else {
        printf("%d", a);
    }
}
