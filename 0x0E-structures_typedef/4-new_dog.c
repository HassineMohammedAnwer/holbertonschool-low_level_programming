#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *new_dog -  a function that creates a new dog.
 * @name: string
 * @age: float
 * @owner: string
 * Return: new dog
 * Description: betty
 */
dog_t *new_dog(__attribute__((unused))char *name, __attribute__((unused))float age, __attribute__((unused))char *owner)
{
dog_t *dog;
dog = malloc(sizeof(char));
return (dog);
}
