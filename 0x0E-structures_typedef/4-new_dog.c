#include "dog.h"
/**
 * new_dog - Initialize struct dog in header file
 * @name: name of dog element 1
 * @age: age of dog element 2
 * @owner: owner of dog element 3
 * Return: Null
 **/
void *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
