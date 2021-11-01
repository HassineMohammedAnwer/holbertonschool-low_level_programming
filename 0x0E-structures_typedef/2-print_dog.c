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
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		 printf("age: %f\n", d->age);
		if (d->owner == NULL)
			printf("owner: (nil)\n");
		else
			printf("owner: %s\n", d->owner);
	}
}
