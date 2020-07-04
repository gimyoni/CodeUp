#include <stdio.h>
int main() {
	
	float a,b,c;
	
	scanf_s("%f %f %f", &a, &b, &c);
	printf("%.2f", (a+b+c)/3);
	
	return 0;
}
