#include <stdio.h>

    int main()
    {
        float w, h, b, result;
        scanf_s("%f %f %f", &w, &h, &b);
        result = w* h *b/ 8 / 1024 / 1024;
        printf("%.2f MB", result);


        return 0;
    }