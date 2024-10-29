#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - prints n elements
 *
 * @dest: char le chain de charactere
 * @src: l'element
 * Return: la copie du chaine de caractere
 */
char *_strcpy(char *dest, char *src)
{
int i = 0, j;

while (src[i] != '\0')
{
i++;
}
for (j = 0; j <= i; j++)
{
dest[j] = src[j];
}
return (dest);
}
