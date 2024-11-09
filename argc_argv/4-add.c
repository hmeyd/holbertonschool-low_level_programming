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
int sum = 0, i;
if (argc < 2)
{
printf ("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
	if (isdigit(atoi(argv[i])))
	sum = sum + atoi(argv[i]);
	else
	{
	printf ("Er\n");
	return (1);
	}
}
printf ("%d\n",sum);
}
return (0);
}
