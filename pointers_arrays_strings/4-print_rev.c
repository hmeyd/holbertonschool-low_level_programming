#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 *
 * @s: le sting à afficher en sens inverse
 * void
 */
void print_rev(char *s)
{
int i = 0, a = 0;
while (s[i] != '\0')
{
i = i + 1;
}
while ((i - a + 1) != 0)
{
_putchar(s[i - a - 1]);
a = a + 1;
}
_putchar('\n');
}
