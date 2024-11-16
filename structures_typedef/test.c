dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *new_dog;
        char *new_name, new_owner;
        new_name = malloc(sizeof(dog_t));
        if (new_name == NULL)
                return;
        if(name == NULL)
                return;
        while (name)
        {
                nl++;
        }
        for (i = 0; i <= nl; i++)
        {
                new_name[i] = name[i];
        }
        if (owner == NULL)
                return;
        while (owner)
        {
                ol++
        }
        for (j = 0; j <= ol; j++)
        {
                new_owner[j] = owner[j];
        }
        new_dog->name = new_name;
        new_dog->age = age;
        new_dog->owner = owner;
return (new_dog);
}
