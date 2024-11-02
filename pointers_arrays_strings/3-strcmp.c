#include "main.h"
/**
 * *_strcmp - prints n elements
 *
 * @s1: char le chain de charactere
 * @s2: l'element
 *
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
