#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure defining a dog
 * @name: Pointer to the dog's name
 * @age: Age of the dog
 * @owner: Pointer to the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

#endif /* DOG_H */
