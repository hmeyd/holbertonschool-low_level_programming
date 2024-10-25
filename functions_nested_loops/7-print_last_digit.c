#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - print the laste digit
 * @n: the number
 *
 * Return:Returns the value of the last digit
 */
int print_last_digit(int n)
{
	int p;

	if (n > 9)
	{
		p = n % 10;
	}
	else if (n < -9)
	{
		n = -n;
		p = n % 10;
	}
	else if (n > -9 && n < 0)
	{
		p = -n;
	}
	else
	{
		p = n;
	}
	if (p < 0)
		p = -p;
	_putchar(p + '0');
	return (p);
}
