#include "dog.h"
#include <stdlib.h>
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
	int s1, s2, i;
	dog_t *d;

	if (!name || !owner)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	i++;
	s1 = i;
	d->name = malloc(sizeof(char) * s1);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i < s1; i++)
		d->name[i] = name[i];
	d->age = age;
	for (i = 0; owner[i]; i++)
		;
	i++;
	s2 = i;
	d->owner = malloc(sizeof(char) * s2);
	if (!d->owner)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	for (i = 0; i < s2; i++)
		d->owner[i] = owner[i];
	return (d);
}
