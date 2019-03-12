#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Function to find the length of a string
 * @s: The string to get the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
/**
 * new_dog - create a new dog muwahahahahahaah!
 * @name: namer of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to a struct type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_new_dog;
	char *ptr_name;
	char *ptr_owner;
	int i = 0;
	int len_name = _strlen(name) + 1;
	int len_owner = _strlen(owner) + 1;

	/* Allocating memory to store struct,  name and owner strings */
	ptr_new_dog = malloc(sizeof(dog_t));
	if (ptr_new_dog == NULL)
		return (NULL);
	ptr_name = malloc(sizeof(name) * len_name);
	if (ptr_name == NULL)
		return (NULL);
	ptr_owner = malloc(sizeof(owner) * len_owner);
	if (ptr_owner == NULL)
		return (NULL);
	/* Copying the old strings to new mem location */
	while (i < len_name)
	{
		ptr_name[i] = name[i];
		i++;
	}
	ptr_name[i] = '\0';
	i = 0;
	while (i < len_owner)
	{
		ptr_owner[i] = owner[i];
		i++;
	}
	ptr_owner[i] = '\0';
	/* setting the values of new struct */
	ptr_new_dog->name = ptr_name;
	ptr_new_dog->age = age;
	ptr_new_dog->owner = ptr_owner;
	return (ptr_new_dog);
}
