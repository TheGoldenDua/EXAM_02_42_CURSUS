#include <unistd.h>
#include <stdlib.h>


int count_digit(long nbr)
{
    int count = 0;

    if(nbr < 0)
    {
        count++;
        nbr *= -1;
    }
    while(nbr > 0)
    {
        nbr = nbr / 10;
        count++;
    }
    return(count);
}

char	*ft_itoa(int nbr)
{
    char *res;
    int c_d;
    long nb;

    nb = nbr;
    if(nb == 0)
    {
        res = malloc(2 * sizeof(char));
        res[0] = '0';
        res[1] = '\0';
        return (res);
    }
    c_d = count_digit(nb);
    res = malloc((c_d + 1) * sizeof(char));
    res[c_d] = '\0';
    c_d--;
    if(nb < 0)
    {
        res[0] = '-';
        nb *= -1;
    }
    while(nb > 0)
    {
        res[c_d] = nb % 10 + '0';
        nb /= 10;
        c_d--;
    }
    return (res);
}