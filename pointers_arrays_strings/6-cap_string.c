#include "main.h"
/**
 * cap_string - prints a string in reverse
 *
 * @str: l'array à afficher en sens inverse
 * Return:le string
 */
char *cap_string(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[0] <= 'z' && str[0] >= 'a')
{
str[0] = str[0] - 32;
}
if (str[i] == ' '|| str[i] == ',' || str[i] == ';' || str[i] =='.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] ==')' || str[i] =='{' || str[i] == '}')
{
if (str[i + 1] <= 'z' && str[i + 1] >= 'a')
{
str[i + 1] = str[i + 1] - 32;
}
}
i++;
}
return (str);
}
