#include "main.h"

/**
 * print_to_98 - Imprime tous les nombres naturels de n à 98
 * @n: Le nombre de départ
 */
void print_to_98(int n)
{
int i, num;

for (i = n; i != 98; i += (n > 98) ? -1 : 1)
{
	if (i < 0)
	{
	_putchar('-');
	num = -i;
	}
	else
	{
	num = i;
	}
	if (num >= 100)
	{
	_putchar((num / 100) + '0');
	_putchar(((num / 10) % 10) + '0');
	}
	else if (num >= 10)
	{
	_putchar((num / 10) + '0');
	}
	_putchar((num % 10) + '0');
	if (i != 98)
	{
	_putchar(',');
	_putchar(' ');
	}
}
_putchar('9');
_putchar('8');
_putchar('\n');
}
