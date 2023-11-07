#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: a dog name
 * @age: a dog age
 * @owner: a dog owner
 *
 * Description: a long dong struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif