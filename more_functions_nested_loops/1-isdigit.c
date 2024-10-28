#include "main.h"
/**
 * _isupper - reconait les chiffre de 0 à 9
 *@c: digit number
 *
 * Return: return 1 if c is digit and return 0 if is not
 */
int _isdigit(int c)
{

if (c <= '9' && c >= '0')
return (1);
else
return (0);
}
