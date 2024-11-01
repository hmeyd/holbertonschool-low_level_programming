#include "main.h"
/**
 * *_strncpy - prints n elements
 *
 * @dest: char le chain de charactere
 * @src: l'element
 * @n: le nombre d'octet
 * Return: la copie du chaine de caractere
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return dest;
}
