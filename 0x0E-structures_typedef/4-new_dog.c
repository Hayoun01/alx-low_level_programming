#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - a function that creates a new dog.
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer of dog_t otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || !owner)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = malloc(sizeof(char) * strlen(name));
	if (!d->name)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = malloc(sizeof(char) * strlen(owner));
	if (!d->owner)
		return (NULL);
	d->owner = owner;
	return (d);
}
