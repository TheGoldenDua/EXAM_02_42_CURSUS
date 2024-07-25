#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int is_space(char c)
{
    if(c == ' ' || c =='\t')
        return (1);
    return(0);
}

int count_word(char *str)
{
    int i = 0;
    int count = 0;

    while(str[i])
    {
        if(!is_space(str[i]) &&(is_space(str[i]) || str[i] == '\0'))
        {
            count++;
        }
            i++;
    }
    return (i);
}

char *fill_word(char *str)
{
    int i = 0;
    char *res;

    while(str[i] && !is_space(str[i]))
        i++;
    res = malloc((i + 1) * sizeof(char));
    i = 0;
    while(str[i] && !is_space(str[i]))
    {
        res[i] = str[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}

char **ft_split(char *str)
{
    char **res;
    int i = 0;
    int wc = 0;

    wc = count_word(str);
    res = malloc((wc + 1) * sizeof(char *));
    while(*str)
    {
        while(*str && is_space(*str))
            str++;
        while(*str && !is_space(*str))
        {
            res[i] = fill_word(str);
            i++;
            while(*str && is_space(*str))
                str++;
            while(*str && !is_space(*str))
                str++;
        }
    }
    res[i] = NULL;
    return (res);
}

void ft_putstr(char *str)
{
    int i = 0;

    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i = 1;
    char **split;

    if(argc >= 2)
    {
        split = ft_split(argv[1]);
        while(split[i])
        {
            ft_putstr(split[i]);
            write(1, " ", 1);
            i++;
        }
        ft_putstr(split[0]);
    }
    write(1, "\n", 1);
    return (0);
}