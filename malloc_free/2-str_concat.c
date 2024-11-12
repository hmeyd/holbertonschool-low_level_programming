#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - fonction qui diplique
 * @str: le chaine de caractaire à dipliquer
 * Return: le chaine de caractaire
 */
char *str_concat(char *s1,char *s2)
{
int size = 0, size1 = 0, i, j;
char *arr;
if (s1 == NULL || s2 == NULL)
{
        return (NULL);
}
while (s1[size] != '\0')
{
        size = size + 1;
}
while (s1[size1] != '\0')
{
        size1 = size1 + 1;
}
arr = (char *)malloc((size + size1) * sizeof(char));
for (i = 0; i < size; i++)
{
        arr[i] = s1[i];
}
for (j = 0; j <= size1; j++)
{
        arr[j + size] = s2[j];
}
arr[size  + size1 + 1] = '\0';
return (arr);
}
