#include "main.h"
/**
 * string_toupper - prints a string in reverse
 *
 * @str: l'array à afficher en sens inverse
 * Return:le string
 */
char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] <= 'z' && str[i] >= 'a')
{
	str[i] = str[i] - 32;
}
i++;
}
return (str);
}
