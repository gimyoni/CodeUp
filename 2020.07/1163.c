#include <stdio.h>

int main() 
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (((a + b + c)/ 100)%2 == 0)
	{
		printf("대박");
	}
	else {
		printf("그럭저럭");
	}
	return 0;
}
