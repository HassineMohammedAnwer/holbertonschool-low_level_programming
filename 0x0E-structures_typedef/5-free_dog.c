#include "dog.h"
/**
 * free_dog - a function that frees dogs.
 * @d: type dog_t struct
 * Return: none
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
