#include "main.h"
#include <string.h>
/**
 * _strlen - calculer la longeur d'un mot
 *
 * @s: length pointer
 * Return: la longeur de string
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i = i + 1;
}
return (i);
}
