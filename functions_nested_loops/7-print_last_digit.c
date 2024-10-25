#include "main.h"
#include <stdlib.h>
/**
 * _abs - camculer le valeur abs
 * @n: Le nombre
 *
 * Return:retun la valeur absoulue du nombre et 0 s'il est nulle
 */
int print_last_digit(int n)
{

	int a; int p;
	if (n < -10 || n > 10)
	{
	p = abs(n);
	a = p % 10;
	return (a);
	}
	else if (-10 < n || n < 10)
	{
	a = abs(n);
        return (a);
	}
	else
	{
	return(n);
	}

}
