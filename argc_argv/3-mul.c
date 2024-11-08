#include <stdio.h>
#include <stdlib.h>
/**
 * main - Affiche le nom du programme
 * @argc: Nombre d'arguments de la ligne de commande
 * @argv: Tableau des arguments de la ligne de commande
 *
 * Return: Toujours 0 (succès)
 */
int main(int argc, char *argv[])
{
int a, b;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
}
return (0);
}
