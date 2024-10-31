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
if (s[i] == '-' && f != 1)
si *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
f = 1;
r = r * 10 + (s[i] - '0');
}
else if (f == 1)
break;
i++;
}
if (f == 1)
return (r *si);
else
return (0);
}
