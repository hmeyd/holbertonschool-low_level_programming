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

int i , j , p1 , p2 , l1 , l2;

        for (i = 0;i <= 23; i++)
	{
		
		for (j = 0;j <= 59; j++)
		{
                		_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
                		_putchar(':');
				_putchar(( j / 10) + '0');
				_putchar((j % 10) + '0');
				_putchar('\n');

		}
}
