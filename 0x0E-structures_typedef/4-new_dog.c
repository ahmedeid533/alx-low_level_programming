#include "dog.h"
#include "9-strcpy.c"
#include "2-strlen.c"
/**
 * new_dog - You have to store a copy of name and owner
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(sizeof(char) * (len1 + 1));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (my_dog->owner == NULL)
	{
		free(my_dog);
		free(my_dog->name);
		return (NULL);
	}
	_strcpy(my_dog->name, name);
	_strcpy(my_dog->owner, owner);
	my_dog->age = age;

	return (my_dog);
}
