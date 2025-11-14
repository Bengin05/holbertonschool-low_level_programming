#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure representing a dog
 * @name: type char *
 * @age: type float
 * @owner: type char *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
