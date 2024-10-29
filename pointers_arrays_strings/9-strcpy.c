#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - prints n elements
 *
 * @dest: char le chain de charactere
 * @src: l'element
 * Return: 
 */
char *_strcpy(char *dest, char *src)
{
int i = 0, j = 0;
while (src[i] != '\0')
{
i++;
}
for (j = 0; j <= (i + 1); j++)
{
dest[j] = src[i];
}
return (dest);
}
