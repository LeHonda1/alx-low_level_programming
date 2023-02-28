#include "main.h"

/**
 * rev_string - Reverses a string.
 * @str: Pointer to string to reverse.
 */
void rev_string(char *s)
{
    int length = 0;

    while (s[length] != '\0')
    {
        length++;
    }

    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
}

