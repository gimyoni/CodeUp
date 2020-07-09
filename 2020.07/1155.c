#include <stdio.h>

int main() 
{
	int a, b;
	scanf_s("%d", &a);
	if (a%7==0) {
		printf("multiple");
	}
	else {
		printf("not multiple");
	}
	return 0;
}
