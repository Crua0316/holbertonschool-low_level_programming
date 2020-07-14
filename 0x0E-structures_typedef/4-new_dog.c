#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length
 * @s: pointer
 * Return: Nothing
 */
unsigned int _strlen(char *s)
{
	unsigned int a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}

	return (a);
}

/**
 * _strcpy - Function that copies the string pointed to
 * @dest: Pointer to string entry
 * @src: Destiny
 * Return: Dest
 */

void *_strcpy(char *dest, char *src)
{
	int a = 0;

	if (src != '\0')
	{
		for (a = 0;  *(src + a) != '\0'; a++)
		{
			*(dest + a) = *(src + a);
		}
	}

	*(dest + a) = '\0';
	return (dest);
}

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
