#include "main.h"

/**
 * _puts - prints a string to stdout, followed by a newline character
 *
 * @str: pointer to a string
 */
void _puts(char *str)
{
    while (*str != '\0') 
    {
        putchar(*str++);
        str++;
    }
    
    putchar('\n');
}
