#include <stdio.h>
#include <string.h>

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = strlen(dest);
    int src_len = strlen(src);
    char *ptr = dest + dest_len;
    int i;

    for (i = 0; i < src_len; i++)
    {
        *ptr++ = *src++;
    }
    *ptr = '\0';
    return dest;
}
