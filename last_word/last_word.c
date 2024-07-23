#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if(argc == 2)
    {
        while(argv[1][i])
            i++;
        while(argv[1][i] == '\0' || argv[1][i] == 9 || argv[1][i] == 32)
            i--;
        j = i;
        while(argv[1][i] && argv[1][i] != 9 && argv[1][i] != 32)
            i--;
        i++;
        while (i<=j)
        {
            write(1, &argv[1][i], 1);
            i++;
        }
        argv[1][i] == '\0';
    }
    write(1, "\n", 1);
    return (0);
}