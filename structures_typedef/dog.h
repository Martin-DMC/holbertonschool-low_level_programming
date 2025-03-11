#ifndef DOG_H
#define DOG_H
/**
 * struct dog - estructura para guardar info de un perro
 * @name: nombre
 * @age: edad
 * @owner: dueño
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

#endif
