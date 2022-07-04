#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog details
 * @name: First member
 * @age: Second member
 * @owner: Third memeber
 * Description: List all dogs details in one struct
 **/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void *new_dog(char *name, float age, char *owner);

#endif
