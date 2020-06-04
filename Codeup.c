#include <stdio.h>

int main()
{
   
   char c;
   
   while (1) {
       scanf_s("%c", &c);
       printf("%c", c);
       if (c == 'q') {
           break;
       }
   }
   return 0;
}