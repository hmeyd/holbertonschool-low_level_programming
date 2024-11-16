#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_dog - affiche les information du rechercher
 * @d: c'set le nouveau chein
 * Description: Cette fonction initialise les membres de la structure dog
 * pointée par d avec les valeurs spécifiées poiur name, age et owner
 * Elle ne fait rien si le pointeur d est NULL.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
	}
}
