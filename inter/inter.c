#include <unistd.h>

int search(char *str, char c, int index)
{
    int i = 0;

    while(i < index)
    {
        if(str[i] == c)
            return(1);
        i++;
    }
    return (0);
}

int ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
        i++;
    return (i);
}

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;

    j = ft_strlen(argv[2]);
    if(argc == 3)
    {
        while(argv[1][i])
        {
            if(!search(argv[1], argv[1][i], i))
                if(search(argv[2], argv[1][i], j))
                    write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}