#include "main.h"

/**
 * _puts_recursion - print a string per recursion
 * @s: the string
 * Void
*/
void _puts_recursion(char *s)
{

_putchar(*s);
s++;
if (*s)
{
	_puts_recursion(s);
}
else
	_putchar('\n');
}
