#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements
 *
 * @a: char le chain de charactere
 * @n: l'element
 * void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d;\n", a[i]);
}
}
