#include "main.h"
/**
 * _isupper - reconait le majuscule et le minuscule
 *@c: majuscule ou miniscule
 *
 * Return: return 1 if c is upper and return 0 if is not
 */
int _isupper(int c)
{

if (c <= 'Z' && c >= 'A')
return (1);
else
return (0);
}

