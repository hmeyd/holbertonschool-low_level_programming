#include "main.h"

/**
 * factorial - print the factorial
 * @n: the nombre
 * Return: le nombre
*/
int factorial(int n)
{

if (n == 0 || n == 1)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
