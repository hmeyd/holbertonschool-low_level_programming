#include <stdio.h>
int main()
{	
   ltrace -bc ./4-puts_0 
    int num = puts("Programming is like building a multilingual puzzle");
    printf("\n%d", num);
       
    return 0;
}
