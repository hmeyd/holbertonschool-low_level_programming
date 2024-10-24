#include "main.h"
#include <stdlib.h>
/**
 * _abs - camculer le valeur abs
 * @n: Le nombre
 *
 * Return:retun la valeur absoulue du nombre et 0 s'il est nulle
 */
int _abs(int n)
{

	int a;

	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		a = abs(n);
		return (a);
	}
		else
		{
		return (0);
		}
		_putchar('\n');
return (0);
}



