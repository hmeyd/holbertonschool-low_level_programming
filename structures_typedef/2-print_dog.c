#include <stdio.h>
#include "dog.h"

/**
 * print_dog - affiche les information du rechercher
 * @d: Pointeur vers une structure de type dog à initialiser
 * Description: Cette fonction initialise les membres de la structure dog
 * pointée par d avec les valeurs spécifiées pour name, age et owner.
 * Elle ne fait rien si le pointeur d est NULL.
 */
void print_dog(struct dog *d)
{
	char *name, *owner;
	float age;

	if (d == NULL)
		printf("nil");
	else
	{
	name = d->name;
	if (name == NULL)
		printf("Name: (nil)");
	age = d->age;
	owner = d->owner;
	printf("Name: %s\nAge: %.1f\nOwner: %s\n", name, age, owner);
	}
}
