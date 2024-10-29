#include "main.h"
/**
 * rev_string - prints a string in reverse
 *
 * @s: le sting à afficher en sens inverse
 * void
 */
void rev_string(char *s)
{
char sit;
int i = 0, len = 0;
while (s[len] != '\0')
{
len++;
}
while (i < len / 2)
{
sit = s[len - i - 1];
s[len - i - 1] = s[i];
s[i] = sit;
i++;
}
}
