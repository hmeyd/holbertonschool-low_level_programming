#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: fuction that prints a mane
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
