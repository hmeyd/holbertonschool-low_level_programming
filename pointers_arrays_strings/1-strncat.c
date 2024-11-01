#include "main.h"
/**
 * *_strncat - fusionner deux string
 * @dest:la phrase a fusionner
 * @src: à utiliser n bite
 * n: le nombre d'octet à utiliser
 * Return: fusionner deux ²chaine de caractere
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
for (j = 0; j < n; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
