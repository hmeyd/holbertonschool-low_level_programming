#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>
/**
 * function_pointers - une structure représentant un chien
 * @name: Le nom du chien, une chaîne de caractères
 * @age: L'âge du chien en années, un nombre à virgule flottante
 * @owner: Le nom du propriétaire du chien, une chaîne de caractères */
void	_putchar(char );
void	print_name(char *name, void (*f)(char *));
void	array_iterator(int *array, size_t size, void (*action)(int));
int	int_index(int *array, int size, int (*cmp)(int));
#endif
