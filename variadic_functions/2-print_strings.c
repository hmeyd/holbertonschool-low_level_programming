#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Calcule la somme de tous les arguments entiers donnés
 * @n: Le nombre d'entiers passés à la fonction
 * @separator: c'est un separateur entre le argument
 * Return: La somme de tous les arguments, ou 0 si n est 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char* str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
