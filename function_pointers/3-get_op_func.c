#include <stdio.h>
#include "calc.h"
/*
 *
 *
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
	while(op_t *ops[i][0] != s)
	{
		i++;
	}
	if (i <= 5)
	{
	return (op_t *ops[i][1]);
	}
	return (NULL);
}
