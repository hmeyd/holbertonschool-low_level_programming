#include "main.h"
/**
 * more_numbers - prints the numbers, from 1 to 14,14 time
 *
 *
 * Return: void.
 */
void more_numbers(void)
{
int i, j;

for (j = 1; j <= 10; j++)
{
	for (i = 1; i <= 14; i++)
{
	if (i > 9)
	{
		_putchar((i / 10) + '0');
		_putchar(i % 10 + '0');
	}
	else
	{
		_putchar(i + '0');
	}
}
_putchar('\n');
}
}
