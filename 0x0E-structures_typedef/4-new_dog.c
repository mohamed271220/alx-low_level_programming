#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
*/

int _strlen(char *s)
{
int len = 0;
while (*s++)
len++;
return (len);
}

/**
 * _strcpy - copies a string
 * @dest: destination string
 * @src: source string
 * Return: pointer to destination string
*/

char *_strcpy(char *dest, char *src)
{
char *temp = dest;
while (*src)
*dest++ = *src++;
*dest = '\0';
return (temp);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len_name, len_owner;
if (!name || !owner)
return (NULL);
dog = malloc(sizeof(dog_t));
if (!dog)
return (NULL);
len_name = _strlen(name);
len_owner = _strlen(owner);
dog->name = malloc(sizeof(char) * (len_name + 1));
if (!dog->name)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len_owner + 1));
if (!dog->owner)
{
free(dog->name);
free(dog);
return (NULL);
}
dog->name = _strcpy(dog->name, name);
dog->age = age;
dog->owner = _strcpy(dog->owner, owner);
return (dog);
}
