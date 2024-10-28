#include "main.h"
/**
 * print_diagonal - draws a diagonal line\ diagonal
 * @n: le nombre de caractere \
 *
 * void
 */
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j == i)
{
_putchar('\\');
}
else if (j < i)
{
_putchar(' ');
}
}
_putchar('\n');
}
}
else if (n <= 0)
_putchar('\n');
}
