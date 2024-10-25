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
		
		if (i < 10)
		{
		_putchar('0');
		_putchar(i + '0');
		_putchar(':');
		}
		else
		{	
		_putchar(i + '0');
                _putchar(':');
		}
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
                		_putchar(i + '0');
                		_putchar(':');
				}
		}
}
}
