#include <stdio.h>
/**
*main -Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
char charValue[]="stringValueX";
for (i = 0; i <= 9; ++i)
{
charValue[11]= i + '0';
putchar(charValue);
}
putchar('\n');
return (0);
}
