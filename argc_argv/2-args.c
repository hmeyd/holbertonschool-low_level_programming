#include <stdio.h>

/**
 * main - Affiche le nom du programme
 * @argc: Nombre d'arguments de la ligne de commande
 * @argv: Tableau des arguments de la ligne de commande
 *
 * Return: Toujours 0 (succès)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
