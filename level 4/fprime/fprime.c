#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i = 2;

    if(argc == 2)
    {
        int nbr = atoi(argv[1]);
        if(nbr == 1)
            printf("1");
        while(i <= nbr)
        {
            while(nbr % i == 0)
            {
                printf("%d", i);
                if(nbr / i > 1)
                    printf("*");
                nbr = nbr / i;
            }
            i++;
        }

    }
    printf("\n");
    return (0);
}