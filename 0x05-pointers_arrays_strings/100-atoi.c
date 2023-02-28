/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if the string does not contain any integers
 */
int _atoi(char *s)
{
    int sign = 1;
    int num = 0;

    while (*s) {
        if (*s == '-') {
            sign *= -1;
        }
        else if (*s >= '0' && *s <= '9') {
            num = num * 10 + (*s - '0');
        }
        else if (num > 0) {
            // Stop parsing the string if we encounter a non-numeric character
            break;
        }
        s++;
    }

    return sign * num;
}
