#ifndef DOG_H
#define DOG_H
/**
 * struct dog - une structure représentant un chien
 * @name: Le nom du chien, une chaîne de caractères
 * @age: L'âge du chien en années, un nombre à virgule flottante
 * @owner: Le nom du propriétaire du chien, une chaîne de caractères
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void	init_dog(struct dog *d, char *name, float age, char *owner);
void	print_dog(struct dog *d);
#endif
