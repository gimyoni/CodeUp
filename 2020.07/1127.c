#include <stdio.h>
int main()
{   
    float a,b,c;
    int d, e, f;
    scanf_s("%f %d", &a, &d);
    scanf_s("%f %d", &b, &e);
    scanf_s("%f %d", &c, &f);
    printf("%.1f", (a * d) + (b * e) + (c * f));
    return 0;
}
