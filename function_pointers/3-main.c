#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Point d'entrée du programme
 *
 * @argc: Nombre d'arguments passés au programme
 * @argv: Tableau contenant les arguments
 *
 * Return: 0 en cas de succès, ou un code d'erreur en cas d'échec
 */
int main(int argc, char *argv[])
{
	int Res;

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == 57 || *argv[2] == 45) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	Res = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", Res);
	return (0);
}
