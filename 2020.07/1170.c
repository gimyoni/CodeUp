#include <stdio.h>
void main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	
	if (c >= 10) {
		printf("%d%d%d", a, b, c);
	}
	else {
		printf("%d%d0%d", a, b, c);
	}
}
