#include "main.h"

/**
 * times_table - function multiplication table
 *
 * @x, r, c : variable resultat, raw, column of the multiplication's table
 *
 * Return: void return (nothing)
 */

void times_table(void)
{
	int i, j, x;
for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		x = j * i;
		if (x <= 9)
		{
		_putchar(x + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		}
		else
		{
		_putchar((x / 10) + '0');
		_putchar((x % 10) + '0');
		_putchar(',');
		_putchar(' ');
		}
	}
_putchar('\n');
}
}
