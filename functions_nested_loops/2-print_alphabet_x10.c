#include "main.h"
/**
*print_alphabet_x10 -Entry point
*Return: void
*/
void print_alphabet_x10(void)
{
int j;
char i;
for (j = 1; j <= 10; j++)
{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
}
