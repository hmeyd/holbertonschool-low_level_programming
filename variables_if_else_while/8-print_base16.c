#include <stdio.h>
/**
*main -Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
char i;
for (i = 0; i <= 15; ++i)
{
if (i <= 9)
putchar(i + '0');
else
putchar(i - 10 + 'a');
}
putchar('\n');
return (0);
}
