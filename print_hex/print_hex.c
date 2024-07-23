#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    while(str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    if(str[i] && (str[i] == '-' || str[i] == '+'))
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res * sign);
}

void print_hex(int nbr)
{
    char base[] = "0123456789abcdef";

    if(nbr >= 16)
        print_hex(nbr / 16);
    write(1, &base[nbr % 16], 1);
}

int main(int argc, char **argv)
{
    int i = 0;

    if(argc == 2)
        print_hex(ft_atoi(argv[1]));
    write(1, "\n", 1);
    return (0);
}