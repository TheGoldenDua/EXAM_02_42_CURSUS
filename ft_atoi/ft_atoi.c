int	ft_atoi(const char *str)
{
    int res = 0;
    int sign = 1;
    int i = 0;

    while(str[i] && (str[i] == ' '|| str[i] == '\t'))
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign = -sign;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res * sign);
}