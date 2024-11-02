#include "main.h"
/**
 * *_strncpy - prints n elements
 *
 * @dest: char le chain de charactere
 * @src: l'element
 * @n: le nombre d'octet
 * Return: la copie du chaine de caractere
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	i++;
}


return (s1[i] != s2[i]);
}
