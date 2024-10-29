#include "main.h"
/**
 * puts_half - prints all number divisble of 2
 *
 * @str: une chaine de charactere
 * void
 */
void puts_half(char *str)
{
int i = 0, len = 0;
while (str[len] != '\0')
{
len++;
}
for (i = (1 + (len - 1) / 2); i <= len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
