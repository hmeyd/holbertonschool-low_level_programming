#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Affiche le nom du programme
 * @argc: Nombre d'arguments de la ligne de commande
 * @argv: Tableau des arguments de la ligne de commande
 *
 * Return: Toujours 0 (succès)
 */
int main(int argc, char *argv[])
{
int somme = 0, i, j;

if (argc < 3)
{
	printf("0\n");
}
else
{
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Erreur\n");
				return (1);
			}
		}
		somme += atoi(argv[i]);
	}
	printf("%d\n", somme);
}
return (0);
}
