#include "main.h"

/**
 * _puts_recursion - print a string per recursion
 * @s: the string
 * Void
*/
void _puts_recursion(char *s)
{

if (*s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
else
	_putchar('\n');
}
