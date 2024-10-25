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

	int a;

	a = abs(n) % 10;
	_putchar(a + '0');
	return (a);
}
