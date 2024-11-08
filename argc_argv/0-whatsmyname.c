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

if (argc > 0)
printf("%s\n", argv[0]);
return (0);
}
