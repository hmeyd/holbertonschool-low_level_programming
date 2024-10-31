#include "main.h"
#include <stdio.h>
/**
 * *_atoi - reconait les entier
 *
 * @s: char le chain de charactere
 * Return: la copie du chaine de caractere
 */
int _atoi(char *s)
{
int i = 0, si = 1, r = 0, f = 0;

while (s[i] != '\0')
{
if (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-' && (s[i + 1] == '-' || s[i + 1] == '+' || (s[i + 1] >= '0' && s[i + 1] <= '9')))
si *= -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
f = 1;
r = (s[i] - '0') + 10 * r;
}
else if (f)
break;
i++;
}
return (r * si);
