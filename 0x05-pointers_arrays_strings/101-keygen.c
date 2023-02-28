#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 64

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    int i;

    srand(time(NULL)); // Seed the random number generator with the current time

    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = ' ' + (rand() % 95); // Generate a random printable ASCII character
    }
    password[PASSWORD_LENGTH] = '\0'; // Null-terminate the string

    printf("%s", password);

    return 0;
}

