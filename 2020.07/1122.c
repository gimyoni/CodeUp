#include <stdio.h>
int main() {
	
	int a,b;
	
	scanf_s("%d", &a);
	a = 60 / a;
	b = 60 % a;
	printf("%d %d",a,b);
	
	return 0;
}
