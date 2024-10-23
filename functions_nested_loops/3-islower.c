#include "main.h"
/**
*islower -Entry point
*Return: void
*/
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		_putchar('1');
	else
		_putchar('0');
	_putchar('\n');
return (0);
}
