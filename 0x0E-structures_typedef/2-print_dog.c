#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a dog structure
 * @d: pointer to the dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
    if (d != NULL) {
        char name[10];
        float age ;
        char owner[10];
        printf("Name: %s\n",(*d).name);
        printf("Age: %f\n ",(*d).age);
         printf("Owner: %s\n",(*d).owner);
    }
    
}
