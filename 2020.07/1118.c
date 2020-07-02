#include <stdio.h>

int main() 
{
	float a, b, result;
	scanf_s("%f %f", &a, &b);
	result = (a * b) / 2;
	printf("%.1f",result );

	return 0;
}
