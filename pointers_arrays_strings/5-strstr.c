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
int i, j, a = 1, len = 0, b, k;
while (needle[len] != '\0')
{
	len++;
}
for (i = 0; haystack[i] != '\0'; i++)
{
	a = 1;
	for (k = i, j = 0; k <= (len + i) && j <= len; k++, j++)
	{
		if (haystack[k] != needle[j])
		{
			a = 0;
			break;
		}
	}
	if (a == 1)
	{
		b = i;
		break;
	}
}
for (i = b; i <= len + b; i++)
{
	return (&haystack[i]);
}
return (0);
}
