#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Calcule la somme de tous les arguments entiers donnés
 * @n: Le nombre d'entiers passés à la fonction
 * @separator: c'est un separateur entre le argument
 * Return: La somme de tous les arguments, ou 0 si n est 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			if (i < n - 1)
			{
				if (separator != NULL)
					printf("%d%s", va_arg(ap, int), separator);
				else
					printf("%d", va_arg(ap, int));
			}
			else
				printf("%d", va_arg(ap, int));
		}
		printf("\n");
		va_end(ap);
}
