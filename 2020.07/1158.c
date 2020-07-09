#include <stdio.h>

int main() 
{
	int a;
	scanf_s("%d", &a);

	if ((30<=a&&a<=40)||(60<=a&&a<=70)) {
		printf("win");
	}
	else {
		printf("lose");
	}
	return 0;
}
