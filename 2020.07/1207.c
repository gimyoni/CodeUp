#include <stdio.h>

int main() {
	int a, b, c, d;
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	
	int sum = a + b + c + d;
	if (sum == 1) {
		printf("도");
	}
	else if (sum == 2) {
		printf("개");
	}
	else if (sum == 3) {
		printf("걸");
	}
	else if (sum == 4) {
		printf("윷");
	}
	else {
		printf("모");
	}
	return 0;
}
