#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure representing a dog
 * @name: Pointer to dog's name
 * @age: Age of the dog
 * @owner: Pointer to dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
