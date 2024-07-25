#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
    long nb = nbr;
    if(nb <0)
    {
        nb = -nb;
        ft_putchar('-');
    }
    if(nb >= 10)
    {
        ft_putnbr(nb/10);
        ft_putchar(nb%10 + '0');
    }
    if(nb < 9)
        ft_putchar(nb + '0');
}

int main(int argc, char **argv)
{
    int d;
    (void)argv;

    d = 0;
    if(argc >= 2)
    {
        d = argc - 1;
        ft_putnbr(d);
    }
    else 
        ft_putnbr(0);
    write(1, "\n", 1);
    return (0);
}