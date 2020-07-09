#include <stdio.h>

int main() 
{
	int a;
	scanf_s("%d", &a);

	if ((50<=a&&a<=70)||(a%6==0)) {
		printf("win");
	}
	else {
		printf("lose");
	}
	return 0;
}
