#include <stdio.h>

int main()
{  
    int a,b;
    scanf_s("%d %d", &a,&b);
   
    if (a>b) {
        printf(">");
    }
    else if(b>a){
        printf("<");
    }
    else {
        printf("=");
    }
   
}
