#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointeur à remplir
 * @b:c'est un string
 * @n: le nombre d'element
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
