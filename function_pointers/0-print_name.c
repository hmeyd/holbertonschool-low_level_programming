#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Imprime un nom en utilisant une fonction de rappel
 * @name: Nom de la personne à imprimer
 * @f: Pointeur vers une fonction qui prend une chaîne en argument
 *
 * Description: Si `name` et `f` ne sont pas NULL, cette fonction appelle
 *              la fonction pointée par `f` avec `name` comme argument.
 *
 * Return: Rien.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
