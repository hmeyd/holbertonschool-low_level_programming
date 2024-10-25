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
	if (n > 0)
	{
	p = n % 10;
	}
	else if (n < 0)
	{
	n = -n;
	p = n % 10;
	}
	else
	{	
	p = 0;
	}
	_putchar(p + '0');
	return (p);
}
