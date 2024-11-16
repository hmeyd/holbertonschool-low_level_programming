#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
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
	char *new_name, *new_owner;
	int i;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	if (name == NULL)
	{
		free(name);
		return (NULL);
	}
	new_name = malloc((strlen(name) + 1) * sizeof(char));
	if (new_name == NULL)
	{
		free(new_name);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
	{
		new_name[i] = name[i];
	}
	new_name[i] = '\0';
	if (owner == NULL)
	{
		free(owner);
		return (NULL);
	}
	new_owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (new_owner == NULL)
		return (0);
	for (i = 0; owner[i]; i++)
	{
		new_owner[i] = owner[i];
	}
	new_owner[i] = '\0';
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
