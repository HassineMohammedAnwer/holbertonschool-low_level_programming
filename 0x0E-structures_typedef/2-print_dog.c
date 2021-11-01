#include "dog.h"
#include <stdio.h>
/**
 * print_dog - initialize a variable of type struct dog
 * @d: struct
 * Return: none
 * Description: betty
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("nothing");
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->owner == NULL)
		printf("owner: (nil)");
	printf("Name: %s\n", d->name);
	printf("age: %f\n", d->age);
	printf("owner: %s\n", d->owner);
}
