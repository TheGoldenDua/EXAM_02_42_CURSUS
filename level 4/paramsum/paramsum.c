#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
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
    else
        ft_putchar(nbr + '0');

}

int main(int ac, char **av)
{
    if(ac >= 2)
    {
        ft_putnbr(ac - 1);
    }
    else
        ft_putnbr(0);
    write(1, "\n", 1);
    return(0);
}