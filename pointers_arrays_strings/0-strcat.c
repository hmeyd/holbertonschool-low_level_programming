#include "main.h"
/**
 * *_strcat - fusionner deux string
 * @dest:la phrase a fusionner
 * @src: à utiliser
 * Return: fusionner deux ²chaine de caractere
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
