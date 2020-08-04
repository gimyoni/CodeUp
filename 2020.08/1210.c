#include <stdio.h>

int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	
	int sum = 0;
	switch (a) {
	case 1:
		sum += 400;
		break;
	case 2:
		sum += 340;
		break;
	case 3:
		sum += 170;
		break;
	case 4:
		sum += 100;
		break;
	case 5:
		sum += 70;
	}

	switch (b) {
	case 1:
		sum += 400;
		break;
	case 2:
		sum += 340;
		break;
	case 3:
		sum += 170;
		break;
	case 4:
		sum += 100;
		break;
	case 5:
		sum += 70;
	}

	if (sum > 500) {
		printf("angry");
	}
	else {
		printf("no angry");
	}

	return 0;
}
