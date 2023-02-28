#include"main.h"
#include<limits.h>
int _atoi(char *s)
{
    int sign = 1;
    int num = 0;
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '-')
            sign = -sign;
        if (s[i] >= '0' && s[i] <= '9')
        {
            int digit = s[i] - '0';
            if (num > INT_MAX/10 || (num == INT_MAX/10 && digit > INT_MAX%10))
            {
                num = INT_MAX;
                break;
            }
            else if (num < INT_MIN/10 || (num == INT_MIN/10 && digit > -(INT_MIN%10)))
            {
                num = INT_MIN;
                break;
            }
            else
            {
                num = num * 10 + sign * digit;
            }
        }2
        else if (num != 0)
        {
            break;
        }
        i++;
    }

    return num;
}
