#include "main.h"
/**
 * _memcpy - fills memory with a constant byte
 * @dset: pointeur à remplir
 * @src:c'est un string
 * @n: le nombre d'element
 * Returns: pointer to the memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
