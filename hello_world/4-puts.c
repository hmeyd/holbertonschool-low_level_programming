#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
int main()
{	
   ltrace -bc 
    int num = puts("Programming is like building a multilingual puzzle");
    printf("\n%d", num);
       
    return 0;
}
