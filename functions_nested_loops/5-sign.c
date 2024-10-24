#include "main.h"

/**
 * main - reconaitre la signe du chiffre
 *
 * Return: return 1 si n>0, -1 si n<0 et 0 si n= 0
 * @n:le chiffre à definir
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	printf("+");
	else if (n < 0)
		return (-1);
	printf("-");
	else
		return (0);
	printf(%d,0);
}
