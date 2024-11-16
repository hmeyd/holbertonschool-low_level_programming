#ifndef DOG_H
#define DOG_H
/**
 * struct dog_t - une structure représentant un chien
 * @name: Le nom du chien, une chaîne de caractères
 * @age: L'âge du chien en années, un nombre à virgule flottante
 * @owner: Le nom du propriétaire du chien, une chaîne de caractères
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
void	init_dog(struct dog_t *d, char *name, float age, char *owner);
void	print_dog(struct dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void	free_dog(dog_t *d);
#endif
