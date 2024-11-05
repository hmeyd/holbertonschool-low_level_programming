#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a character in a string
 * @haystack: the string
 * @needle: le charcteur à localiser
 *
 * Return: first occurrence of the character c in the string s, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, a = 1, len = 0;
while (needle[len] != '\0')
{
	len++;
}
for (i = 0; haystack[i] != '\0'; i++)
{
	a = 1;
	for (j = 0; j < len; j++)
	{
		if (haystack[i + j] != needle[j])
		{
			a = 0;
			break;
		}
	}
	if (a == 1)
	{
	return (&haystack[i]);
	}
}
return (0);
}
