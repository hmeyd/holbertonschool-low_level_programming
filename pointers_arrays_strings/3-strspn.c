#include "main.h"
#include <stddef.h>
/**
 * _strspn - locates a character in a string
 * @s: the string
 * @accept: le charcteur à localiser
 *
 * Return: first occurrence of the character c in the string s, or NULL
 */
unsigned int _strspn(char *s, char *accept)
{
int k, h, r = 0;

	for (k = 0; s[k] != '\0' && s[k] != ' '; k++)
	{
		for (h = 0; accept[h] != '\0'; h++)
		{
			if (accept[h] == s[k])
			{
				r++;
				break;
			}
		}
	}
	return (r);
}
