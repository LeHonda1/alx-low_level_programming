#include <stdio.h>
#include <string.h>

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 8* @src: Source string
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = strlen(dest);
    int src_len = strlen(src);
    char *ptr = dest + dest_len;
    int i;

    for (i = 0; i < src_len&&i < n ; i++)
    { 
         *ptr++ = *src++;
    }
    *ptr = '\0';
    return dest;
}
