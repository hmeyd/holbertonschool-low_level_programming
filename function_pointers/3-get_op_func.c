#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
 * get_op_func - Sélectionne l'opérateur
 * @s: L'opérateur fourni sous forme de chaîne
 *
 * Return: Un pointeur vers la fonction correspondante, ou NULL si non valide
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*ops[i].op == s[0] && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
