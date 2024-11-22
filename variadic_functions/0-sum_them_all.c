#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Calcule la somme de tous les arguments entiers donnés
 * @n: Le nombre d'entiers passés à la fonction
 *
 * Return: La somme de tous les arguments, ou 0 si n est 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
