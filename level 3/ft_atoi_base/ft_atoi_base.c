#include <stdio.h>

int ft_decimal(char c)
{
    if(c >= '0' && c <= '9')
        return (c - 48);
    else if(c >= 'a' && c <= 'f')
        return (c - 'a' + 10);
    else if(c >= 'A' && c <= 'F')
        return (c - 'A' + 10);
    else
        return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int i;
    int res;
    int signe;

    i = 0;
    res = 0;
    signe = 1;
    if(!(str_base >= 2 && str_base <= 16))
        return (0);
    while(str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
        i++;
    while(str[i] && str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            signe = -signe;
        i++;
    }
    while(str[i] && (ft_decimal(str[i]) != -1))
    { 
        res *= str_base;
        res += ft_decimal(str[i]);
        i++;
    }
    return(res * signe);
}
int main()
{
    printf("%d\n", ft_atoi_base("101010", 2));
}