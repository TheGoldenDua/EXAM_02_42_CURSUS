#include <unistd.h>


void ft_putchar(char c)
{
    write(1, &c, 1);
}

void str_capitalizer(char *str)
{
    int i = 1;

    if(str[0] >= 'a' || str[0] <= 'z')
        str[0] -= 32;
    ft_putchar(str[0]);
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if(str[i] >= 'a' && str[i] <= 'z' && (str[i - 1] == ' ' || str[i-1] == '\t'))
            str[i] -= 32;
        ft_putchar(str[i]);
        i++;
    }
}

int main(int argc , char **argv)
{
    int i = 0;
    int j = 1;

    if(argc < 2)
        ft_putchar('\n');
    else
    {
        while(j < argc)
        {
            str_capitalizer(argv[j]);
            ft_putchar('\n');
            j++;
        }
    }
    return(0);
}