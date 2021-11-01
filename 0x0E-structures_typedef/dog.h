#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - Define a new type struct dog with the following elements
 * @name: type = char *
 * @age: type = float
 * @owner: type = char *
 *
 * Description: betty
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * my_dog - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
