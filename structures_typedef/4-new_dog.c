#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - affiche les information du rechercher
 * @name: Pointeur vers une structure de type dog à initialiser
 * @age: l'age du nouveau chein
 * @owner: le nouvau properietaire
 * Return: la nouvelle structure
 * Description: Cette fonction initialise les membres de la structure dog
 * pointée par d avec les valeurs spécifiées poiur name, age et owner
 * Elle ne fait rien si le pointeur d est NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (0);
	if (name == NULL)
		return;
	if (owner == NULL)
		return;
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
return (new_dog);
}
