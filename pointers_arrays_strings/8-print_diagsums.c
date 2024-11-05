#include "main.h"
#include <stddef.h>
/**
 * print_diagsums - locates a character in a string
 * @a: the matrix
 * size: dimenssion
 *
 * Void
 */
void print_diagsums(int *a,int size)
{
int i, j;

for (i = 0; i <= size; i++)
{
        for (j = 0; j <= size; j++)
        {
                if (i == j)
		sum1 = sum1 + a[i][j];
		else if (j == size - i)
		sum2 = sum2 +  a[i][j];
        }
}
_putchar(sum1);
_putchar(sum2);
}
