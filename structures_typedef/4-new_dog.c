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
	char *new_name, *new_owner;
	int i, nl = 0, ol = 0;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return(0);
	while (name[nl] != '\0')
	{
		nl++;
	}
	new_name = malloc(nl * (sizeof(char)) + 1);
	for (i = 0; i < nl; i++)
	{
		new_name[i] = name[i];
	}
	new_name[nl] = '\0';
	if (owner == NULL)
		return(0);
	while (owner[ol] != '\0')
	{
		ol++;
	}
	new_owner = malloc(ol * (sizeof(char)) + 1);
	if (new_owner == NULL)
		return (0);
	for (i = 0; i <= ol; i++)
	{
		new_owner[i] = owner[i];
	}
	new_owner[ol] = '\0';
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
