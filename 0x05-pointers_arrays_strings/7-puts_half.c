#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string parameter input
 *
 * Return: Nothing
*/
void puts_half(char *str)
{
    int l, i;

    for (l = 0; str[l] != '\0'; ++l)
        ;

    if (l % 2 == 0)
        i = l / 2;
    else
        i = ((l - 1) / 2) + 1;

    while (str[i] != '\0')
    {
        putchar(str[i]);
        i++;
    }

    putchar('\n');
}
