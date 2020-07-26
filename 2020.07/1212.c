#include <stdio.h>

int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b && a > c) {
		if (a < b + c) {
			printf("yes");
		}
		else {
			printf("no");
		}
	}
	else if (b>a && b>c){
		if ( b< a + c) {
			printf("yes");
		}
		else {
			printf("no");
		}
	}
	else if (c > a && c > b) {
		if (c < a + b) {
			printf("yes");
		}
		else {
			printf("no");
		}
	}
	else {
		printf("yes");
	}
	return 0;
}
