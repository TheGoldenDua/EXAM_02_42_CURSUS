
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int n;
    int nb1;
    int nb2;

    if(ac == 3)
    {
        nb1 = atoi(av[1]);
        nb2 = atoi(av[2]);

        if(nb1 > nb2)
            n = nb2;
        else
            n = nb1;
        while(n >= 1)
        {
            if(nb1 % n == 0 && nb2 % n == 0)
            {
                printf("%d", n);
                break;
            }
            n--;
        }
    }
    write(1, "\n", 1);
    return (0);
}