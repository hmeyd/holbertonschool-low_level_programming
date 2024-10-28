#include "main.h"
/**
 * print_triangle - draws a triangle whith #
 * @size: le nombre de caractere #
 *
 * void
 */
void print_triangle(int size)
{
int i, j;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if (j <= -i + size)
{
_putchar(' ');
}
else
_putchar('#');
}
_putchar('\n');
}
}
else if (size <= 0)
_putchar('\n');
}
