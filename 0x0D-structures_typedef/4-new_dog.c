#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Get the length of a string
 * @s: string to get the length of
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i++;
	return (i);
}
/**
 * _strdup - copy string to new memory location
 * @s: string to copy
 *
 * Return - ptr to new location
 */
char *_strdup(char *s)
{
	char *ptr;
	int length;
	int i;

	length = _strlen(s);
	ptr = malloc(sizeof(s) * length);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		ptr[i] = s[i];

	return (ptr);
}
/**
 * new_dog - Create a new structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: ptr to new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_new_dog;
	char *ptr_name;
	char *ptr_owner;

	ptr_new_dog = malloc(sizeof(dog_t));
	if (ptr_new_dog == NULL)
		return (NULL);
	/*name memory check and allocation*/
	if (name == NULL)
		ptr_new_dog->name = NULL;
	else
	{
		ptr_name = _strdup(name);
		if (ptr_name == NULL)
		{
			free(ptr_new_dog);
			return (NULL);
		}
		ptr_new_dog->name = ptr_name;
	}
	/*owner memory check and allocation */
	if (owner == NULL)
		ptr_new_dog->owner = NULL;
	else
	{
		ptr_owner = _strdup(owner);
		if (ptr_owner == NULL)
		{
			free(ptr_new_dog->name);
			free(ptr_new_dog);
			return (NULL);
		}
		ptr_new_dog->owner = ptr_owner;
	}
	/*Setting age to new location*/
	ptr_new_dog->age = age;
	return (ptr_new_dog);
}
