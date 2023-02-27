#include"main.h"
/**
 * print_rev - Prints a string in reverse order
 *
 * @s: Pointer to the string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
    int index = strlen(s) - 1;

    while (index >= 0)
    {
        printf("%c", s[index]);
        index--;
    }
}

