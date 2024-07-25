#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    while(str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res * sign);
}

int is_prime(int nbr)
{
    int i = 2;

    if(nbr <= 1)
        return (0);
    while(i * i <= nbr)
    {
        if(nbr % i == 0)
            return (0);
        i++;
    }
     return (1);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
    long long nb = nbr;

    if(nb < 0)
    {
        ft_putchar('-');
        nbr *= -1;
    }
    if(nbr >= 10)
    {
        ft_putnbr(nbr / 10);
        ft_putchar(nbr % 10 + '0');
    }
    else
        ft_putchar(nbr + '0');
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int nbr = ft_atoi(argv[1]);
        int som = 0;

        while(nbr > 0)
        {
            if(is_prime(nbr))
                som += nbr;
            nbr--;
        }
        ft_putnbr(som);
    }
    if(argc != 2)
        ft_putnbr(0);
    write(1, "\n", 1);
    return (0);
}

