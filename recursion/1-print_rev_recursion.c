#include "main.h"

/**
 * _print_rev_recursion - print a string per recursion
 * @s: the string
 * Void
*/
void _print_rev_recursion(char *s)
{

_putchar(*s);
if (*s)
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
else
{
	_putchar('\n');
}
}
