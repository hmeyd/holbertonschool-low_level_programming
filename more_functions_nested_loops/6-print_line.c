#include "main.h"
/**
 * print_line - prints the numbers of times the character _
 *
 *
 * void
 */
void print_line(int n)
{
int i;

if (n > 0)
{
for (i = 1; i <= n; i++)
{
_putchar('_');
}
}
else
{
_putchar('\n');
}
_putchar('\n');
}
