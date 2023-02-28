#include "main.h"

/**
 * print_array - Prints an array of integers
 *
 * @a: Pointer to the array of integers
 * @n: Number of elements in the array
 */

void print_array(int *a, int n)
{
    int i;
    if(n>0){
    for (i = 0; i < n - 1; i++)
    {
        printf("%d, ", *(a + i));
    }

    printf("%d", *(a + i));
    printf("\n");
    }
    printf(" ")
}
