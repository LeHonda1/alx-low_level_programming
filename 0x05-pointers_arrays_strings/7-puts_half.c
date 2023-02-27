#include"main.h"

void puts_half(char *str)
{
    int length_of_string = 0;
    while (*str != '\0') {
        str++;
        length_of_string++;
    }
    int x = length_of_string;
    int i;
    if (x % 2 == 0) {
        i = length_of_string / 2;
    } else {
        i = (length_of_string - 1) / 2;
    }
    while (str[i] != '\0') {
        _putchar(str[i]);
        i++;
    }
    _putchar('\n');
}
