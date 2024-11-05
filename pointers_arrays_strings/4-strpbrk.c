#include "main.h"
#include <stddef.h>
/**
 * _strspn - locates a character in a string
 * @s: the string
 * @c: le charcteur à localiser
 *
 * Return: first occurrence of the character c in the string s, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
                	if (s[i] == accept[j])
			{
                	return (&s[i]);
			}
		}
	}
return (0);
}
