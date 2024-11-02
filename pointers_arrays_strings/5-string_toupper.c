#include "main.h"
/**
 * reverse_array - prints a string in reverse
 *
 * @a: l'array à afficher en sens inverse
 * @n: nmbre d'element
 * void
 */
char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] <='z' && str[i] >= 'a')
{
	str[i] = str[i] - 32;
}
i++;
}
return (str);
}
