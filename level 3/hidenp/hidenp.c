#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if(argc == 3)
    {
        while(argv[1][i] && argv[2][j])
        {
            while(argv[2][j] != argv[1][i])
            {
                j++;
                if(argv[2][j] == '\0')
                {
                    write(1, "0\n", 2);
                    return (0);
                }
            }
            j++;
            i++;
        }
        write(1, "1", 1);
    }
    else
    {
            write(1, "\n", 1);
            return (0);
    }
    write(1, "\n", 1);
    return (0);
}