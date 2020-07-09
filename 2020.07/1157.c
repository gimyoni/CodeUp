#include <stdio.h>

int main() 
{
	float a;
	scanf_s("%f", &a);

	if (50<a&&a<60) {
		printf("win");
	}
	else {
		printf("lose");
	}
	return 0;
}
