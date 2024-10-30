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
for (j = i + 1; j >= 0; j--)
{
if (s[j] >= 48 && s[j] <= 57)
{
f = 1;
/*if (s[j - 1] == '-')
{
a = -1;
}*/
b = a * k * (s[j] - 48) + b;
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

