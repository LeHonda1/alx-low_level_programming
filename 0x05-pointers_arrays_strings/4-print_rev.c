#include"main.h"
/**
 * print_rev - Prints a string in reverse order
 *
 * @s: Pointer to the string to be printed
 *
 * Return: void
 */
void print_rev(char *s){
    int i = 0;
    while(*s!="\0"){
        i++;
        s++;
    while(i>0,i--){
      printf("%c",s[i]);
    }
}
}
