#include <unistd.h>

int check(char *str, char c, int index)
{
    int i;

    i = 0;
    while(i < index)
    {
        if(str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i;
    int len;

    i = 0;
    len = 0;
    if(argc == 3)
    {
        while(argv[1][i])
        {
            if(!check(argv[1], argv[1][i], i))
                    write(1, &argv[1][i], 1);
            i++;
        }
        while(argv[2][len])
        {
            if(!check(argv[2], argv[2][len], len))
            {
                if(!check(argv[1], argv[2][len], i))
                    write(1, &argv[2][len], 1);
            }
            len++;
        }
    }
    write(1, "\n", 1);
    return(0);
}