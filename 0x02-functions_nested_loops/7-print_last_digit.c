#include <stdio.h>

int print_last_digit(int num) {
    int last_digit = num % 10;  // Get the remainder of num divided by 10
    return last_digit;  // Return the value of the last digit
}

int main() {
    int num = 12345;
    int last_digit = print_last_digit(num);
    printf("The value of the last digit is %d\n", last_digit);
    return 0;
}
