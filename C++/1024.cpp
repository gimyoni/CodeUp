#include <iostream>
#include <string>
using namespace std;

int main()
{	
	char a[30];
	cin >> a;
	for (int i = 0; a[i] != '\0'; i++) {
		printf("\'%c\'\n", a[i]);
	}

}
