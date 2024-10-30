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
int i = 0, j, a = 1, k = 1, b = 0, f = 0;

while (s[i] != '0')
{
i++;
}
for (j = 0; j <= i; j++)
{
if (s[j] > 0 && s[j] < 9)
{
f = 1;
if (s[j - 1] == '-')
{
a = -1;
}
b = a * k * s[j] + b;
k = 10 * k;
}
}
if (f == 1)
{
return (b);
}
else
{
return (0);
}
return ('\n');
}

