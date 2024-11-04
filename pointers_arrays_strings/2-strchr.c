#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: le charcteur à localiser
 * 
 * Returns: first occurrence of the character c in the string s, or NULL
 */
char *_strchr(char *s, char c)
{

while (!s && *s != c)
{
s++;
}
if (*s != c)
return (s);
else
return (0);
}
