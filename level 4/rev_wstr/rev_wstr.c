#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int is_space(char c)
{
    if(c == ' ' || c == '\t')
        return (1);
    return (0);
}

int count_word(char *str)
{
    int i = 0;
    int count = 0;


    while(str[i] && is_space(str[i]))
        i++;
    while(str[i])
    {
        if(!is_space(str[i]) && (is_space(str[i + 1]) || str[i + 1] == '\0'))
            count++;
        i++;
    }
    return (count);
}

char *fill_word(char *str)
{
    int i = 0;
    char *res;

    res = malloc((i + 1) * sizeof(char));
    if(!res)
        return (NULL);
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
    int i = 0;
    int wc = count_word(str);
    char **res;


    res = malloc ((wc + 1) * sizeof(char *));
    if(!res)
        return (NULL);
    while(*str && is_space(*str))
        str++;
    while(*str && !is_space(*str))
    {
        res[i] = fill_word(str);
        i++;
        while(*str && !is_space(*str))
            str++;
        while(*str && is_space(*str))
           str++;
    }
    res[i] = 0;
    return (res);
}

void ft_printstr(char *str)
{
    int i = 0;

    if (!str)
        return ;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    char **split;
    int i = 0;
    
    split = ft_split(argv[1]);
      
    if(argc == 2)
    {
        split = ft_split(argv[1]);
      
        while(split[i])
            i++;
        i--;
        while(i >= 0)
        {
            ft_printstr(split[i]);
            if(i != 0)
                write(1, " ", 1);
            i--;
        }
    }
    write(1, "\n", 1);
    return (0);
}