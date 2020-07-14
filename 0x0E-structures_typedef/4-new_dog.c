#include "dog.h"
#include <stdlib.h>
#include "strlen.h"

/**
 * new_dog - function that creates a new dog
 * @name: To create a new struct
 * @age: To create a new struct
 * @owner: To create a new struct
 *
 * Return: dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog =  malloc(sizeof(dog_t));
	if (newdog)
	{
		newdog->name = malloc((_strlen(name) + 1) * sizeof(char));
		if (newdog->name)
		{
			newdog->owner = malloc((_strlen(owner) + 1) * sizeof(char));
			if (newdog->owner)
			{
				_strcpy(newdog->name, name);
				_strcpy(newdog->owner, owner);
				newdog->age = age;
				return (newdog);
			}
			else
				free(newdog->name);
				free(newdog);
		}
		else
			free(newdog);
	}
	return (NULL);
}
