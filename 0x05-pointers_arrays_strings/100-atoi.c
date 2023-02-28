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
            if (num > 2147483647/10 || (num == 2147483647/10 && digit 2147483647%10))
            {
                num = 2147483647;
                break;
            }
            else if (num < -2147483647/10 || (num == -2147483647/10 && digit > -(-2147483647%10)))
            {
                num = INT_MIN;
                break;
            }
            else
            {
                num = num * 10 + sign * digit;
            }
        }
        else if (num != 0)
        {
            break;
        }
        i++;
    }

    return num;
}

