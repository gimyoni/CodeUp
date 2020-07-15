#include <stdio.h>

    int main()
    {
        float h, b, c, s, result;
        scanf_s("%f %f %f %f", &h, &b, &c, &s);
        result = h * b * c * s / 8 / 1024 / 1024;
        printf("%.1f MB", result);


        return 0;
    }
