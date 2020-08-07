#include <iostream>
using namespace std;

int main() {
	int a,i,sum=0;
    scanf("%d", &a);
    for (i = 1; ; i++)
    {
        sum += i;
        if (sum >= a) break;
    }
    cout << sum<< endl;
	return 0;
}
