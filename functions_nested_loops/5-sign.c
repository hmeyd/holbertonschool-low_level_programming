#include "main.h"

/**
 * print_sign - Vérifie le singe du nombre
 * @n: Le nombre à vérifier le singe
 *
 * Return:1 si le nombre est positive -1 si c'est negative ou miniscule,0 sinon
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);

}
	_putchar('\n');
}