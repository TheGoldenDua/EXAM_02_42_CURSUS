#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int is_prime(int nbr)
{
    int i = 2;

    if(nbr <= 1)
        return(0);
    while(i * i <= nbr)
    {
        if(nbr % i == 0)
            return(0);
        i++;
    }
    return (1);
}

void ft_putnbr(int nbr)
{
    long n;

    n = nbr;
    if(nbr >= 10)
        ft_putnbr(nbr / 10);
    char c = nbr % 10 + '0';
    write(1, &c, 1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;

    while(str[i])
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return(res);
}
int main(int argc, char **argv)
{
    int i = 2;
    int som = 0;

    if(argc == 2)
    {
        int nbr = ft_atoi(argv[1]);
        while(i <= nbr)
        {
            if(is_prime(i))
                som += i;
            i++;
        }
    }
    ft_putnbr(som);
    write(1, "\n", 1);
    return (0);
}


