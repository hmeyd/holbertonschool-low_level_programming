#include <stdio.h>
#include "dog.h"

/**
 * print_dog - affiche les information du rechercher
 * @d: Pointeur vers une structure de type dog à initialiser
 * Description: Cette fonction initialise les membres de la structure dog
 * pointée par d avec les valeurs spécifiées pour name, age et owner
 * Elle ne fait rien si le pointeur d est NULL.
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
		printf("Name: (nil)");
	else
	{
		printf("Name: %s\n", d->name);
	}
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);
}
