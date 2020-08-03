#include <stdio.h>

int main() {
	int y, m,a;
	scanf_s("%d %d %d", &y, &m, &a);
	int sum = m - a;
	if(y>sum){
		printf("do not advertise");
	}
	else if (y < sum) {
		printf("advertise");
	}
	else {
		printf("does not matter");
	}
	return 0;
}
