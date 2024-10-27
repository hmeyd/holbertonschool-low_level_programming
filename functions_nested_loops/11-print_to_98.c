#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98
 * @n: the bigenning number
 *
 */
void print_to_98(int n)
{
	int i;

if (n > 98)
{
	for (i = n; i >= 98; i--)
	{
		if (n > 100)
		{
			_putchar((i / 100) + '0');
			_putchar((i - (i / 100) *100)/ 10) + '0');
			_putchar((i % 10) + '0');
			_putchar('\n');
		}
		else
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar('\n');
		}
	}
}
else
{
	for (i = n; i <= 98; i++)
	{
		if (i < 10)
		{
			if (i < 0)
			{
				_putchar('-');
			}
			_putchar(i + '0');
			_putchar('\n');
		}
		else
		{
			if (i < 0)
			{
				_putchar('-');
			}
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar('\n');
		}
	}
}
}
