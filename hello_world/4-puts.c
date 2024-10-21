#include <stdio.h>
#include <stdlib.h>
int main()
{	 
    system("ltrace -bc ./4-puts_0");
    int num = puts("Programming is like building a multilingual puzzle");
    printf("\n%d", num);
       
    return 0;
}
