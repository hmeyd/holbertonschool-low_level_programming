#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - locates a character in a string
 * @a: the matrix
 * @size: dimenssion
 *
 * Void
 */
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
	sum1 += a[size * i + i];
	sum2 += a[size * i + (size - i - 1)];
}
printf("%d, %d\n", sum1, sum2);
}
