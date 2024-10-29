#include "main.h"
/**
 * puts2 - prints all number divisble of 2
 *
 * @str: une chaine de charactere
 * void
 */
void puts2(char *str)
{
int i = 0, len = 0;
while (str[len] != '\0')
{
len++;
}
while (i != len + 1)
{
if (str[i] % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
