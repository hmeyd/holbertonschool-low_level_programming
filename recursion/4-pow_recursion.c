#include "main.h"

/**
 * _pow_recursion - print the power
 * @x: the first nombre
 * @y: second number
 * Return: le nombre
*/
int _pow_recursion(int x, int y)
{

if (y < 0)
{
	return (-1);
}
else if (y == 0)
{
	return (1);
}
return (x * _pow_recursion(x, (y - 1)));
}
