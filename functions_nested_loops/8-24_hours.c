#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - print the laste digit
 * @n: the number
 *
 * Return:Returns the value of the last digit
 */
void jack_bauer(void)
{

int i , j;

        for (i = 0;i <= 23; i++)
	{
		
		for (j = 0;j <= 59; j++)
		{
				if (i < 10)
				{
                		_putchar('0');
                		_putchar(i + '0');
                		_putchar(':');
                		}
                		else
				{
				p1 = i / 10;
                                l1 = i % 10;
                		_putchar(p1 + '0');
				_putchar(l1 + '0');
                		_putchar(':');
				}
				 if (j < 10)
                		{
                		_putchar('0');
                		_putchar(j + '0');
                		}
                		else
                		{
				p2 = j / 10;
				l2 = j % 10;
                		_putchar(p2 + '0');
				_putchar(l2 + '0');
				_putchar(j + '0');
                		}
				_putchar('\n');

		}
}
_putchar('\n');
}
