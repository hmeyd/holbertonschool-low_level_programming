#include "main.h"
#include <stddef.h>
/**
 * _strspn - locates a character in a string
 * @s: the string
 * @c: le charcteur à localiser
 *
 * Return: first occurrence of the character c in the string s, or NULL
 */
unsigned int _strspn(char *s, char *accept)
{
int i =0, j = 0, k, h, s1 = 0, s2 = 1; 
        while (accept[i] != '\0')
        {
		i++;
	}
	while (s[j] != '\0')
	{
		j++;
	}
	for (k = 0; k < i; k++)
	{
		for (h = 0; h < j; h++)
		{
			if (accept[k] == s[h])
			{
				s1 = 1;
				break;
			}
			else
				s1 = 0;
		}
		s2 = s2 + s1;
	}
	return (s2);
}
