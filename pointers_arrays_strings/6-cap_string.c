#include "main.h"
/**
 * cap_string - prints a string in reverse
 *
 * @str: l'array à afficher en sens inverse
 * Return:le string
 */
char *cap_string(char *str)
{
char separators[] = " \t\n,;.!?\"(){}";
int i = 0, j;
while (str[i] != '\0')
{
if (str[0] <= 'z' && str[0] >= 'a')
{
str[0] = str[0] - 32;
}
for (j = 0; j <= 12)
{
if (separators[j] == str[i])
{
if (str[i + 1] <= 'z' && str[i + 1] >= 'a')
{
str[i + 1] = str[i + 1] - 32;
}
}
}
i++;
}
return (str);
}
