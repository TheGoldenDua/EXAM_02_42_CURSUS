#include <unistd.h>

void to_lower(char *str)
{
    int i = 0;

    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
}

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;
    int k = 0;

    if(ac >= 2)
    {
        while(av[i])
        {
            j = 0;
            k = 0;
            to_lower(av[i]);
            if(av[i][j] >= 'a' && av[i][j] <= 'z')
                av[i][j] -= 32;
            while(av[i][j])
            {
                if((av[i][j] >= 'a' && av[i][j] <= 'z') && (av[i][j - 1] == ' ' || av[i][j - 1] == '\t'))
                    av[i][j] -= 32;
                j++;
            }
            while(av[i][k])
            {
                write(1, &av[i][k], 1);
                k++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return(0);
}