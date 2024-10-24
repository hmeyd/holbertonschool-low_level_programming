#include "main.h"
#include <stdlib.h>
/**
 * print_sign - Vérifie le singe du nombre
 * @n: Le nombre à vérifier le singe
 *
 * Return:1 si le nombre est positive -1 si c'est negative ou miniscule,0 sinon
 */
int _abs(int n)
{
	int a;
	if (n > 0)
	{
		_putchar(n);
	}
	else if (n < 0)
	{
		a=abs(n);
		_putchar(a);
	}
		else
		{
			_putchar('0');
		}
		_putchar('\n');
return (0);
}



