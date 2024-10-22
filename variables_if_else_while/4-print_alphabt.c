#include <stdio.h>
#include <stdlib.h>
/**
*main -Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
{
putchar(c, grep('q', 'e'));
}
putchar('\n');
return (0);
}
