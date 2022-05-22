#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - about dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * struct dog - info about dog
 *
 * dog_t: another type of dog
 */

typedef struct dog dog_t;

#endif /* _DOG_H_ */
