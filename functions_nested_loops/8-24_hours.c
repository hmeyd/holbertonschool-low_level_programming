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
                		_putchar(j);
                		_putchar(':');
                		}
                		else
				{
                		_putchar(j);
                		_putchar(':');
				}
				 if (i < 10)
                		{
                		_putchar('0');
                		_putchar(i);
                		_putchar(':');
                		}
                		else
                		{
                		_putchar(i);
                		_putchar(':');
                		}
				_putchar('\n');

		}
}
_putchar('\n');
}
