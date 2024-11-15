#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialise une structure dog avec des valeurs spécifiques
 * @d: Pointeur vers une structure de type dog à initialiser
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Nom du propriétaire du chien
 *
 * Description: Cette fonction initialise les membres de la structure dog
 * pointée par d avec les valeurs spécifiées pour name, age et owner.
 * Elle ne fait rien si le pointeur d est NULL.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
