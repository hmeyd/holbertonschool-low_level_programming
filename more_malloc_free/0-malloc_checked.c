#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - checker les alloucation
 * @b: la dimenssion
 *
 * Void
 */
void *malloc_checked(unsigned int b)
{
	int *arr;
	arr = malloc(b * sizeof(int));
	if (arr == NULL)
	{
		exit (98);
	}
	return (arr);
}   
