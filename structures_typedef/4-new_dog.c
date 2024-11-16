#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - affiche les information du rechercher
 * @name: Pointeur vers une structure de type dog à initialiser
 * @age: l'age du nouveau chein
 * @owner: le nouvau properietaire
 * Return: la nouvelle structure
 * Description: Cette fonction initialise les membres de la structure dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	if (name != NULL)
	{
		new_name = malloc((strlen(name) + 1) * sizeof(char));
		if (new_name == NULL)
		{
			free(new_dog);
			return (NULL);
		}
		strcpy(new_name, name);
	}
	else
		new_name = NULL;
	if (owner != NULL)
	{
		new_owner = malloc((strlen(owner) + 1) * sizeof(char));
		if (new_owner == NULL)
		{
			free(new_dog);
			free(new_name);
			return (NULL);
		}
		strcpy(new_owner, owner);
	}
	else
		new_owner = NULL;
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
