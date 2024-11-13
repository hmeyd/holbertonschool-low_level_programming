#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - checker les alloucation
 * @b: la dimenssion
 *
 * Return: arr
 */
void *malloc_checked(unsigned int b)
{
	int *arr;

	arr = malloc(b);
	if (arr == NULL)
	{
		exit(98);
	}
	return (arr);
}
