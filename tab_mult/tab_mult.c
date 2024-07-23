#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    long long nbr;

    nbr = nb;
    if(nbr < 0)
    {
        ft_putchar('-');
        nbr *= -1;
    }
    else if(nbr >= 10)
    {
        ft_putnbr(nbr / 10);
        ft_putchar(nbr % 10 + '0');
    }
    else if(nbr <= 9)
        ft_putchar(nbr + '0');
}

int ft_atoi(char *str)
{
    int i;
    int res;
    int signe ;

    i = 0;
    res = 0;
    signe = 1;
    while(str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
        i++;
    while(str[i] && (str[i] == '-' || str[i] == '+'))
    {
        if(str[i] == '-')
            signe *= -1;
        i++;
    }
    while(str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res * signe);
}

int main(int argc, char **argv)
{
    int i;
    int nb;
    int res;

    i = 1;
    nb = 0;
    res = 0;
    if(argc == 2)
    {
        nb = ft_atoi(argv[1]);
        while(i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(nb);
            write(1, " = ", 3);
            res = i * nb;
            ft_putnbr(res);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}