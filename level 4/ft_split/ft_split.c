#include <stdlib.h>

int is_space(char c)
{
    if(c == ' ' || c == '\t')
        return(1);
    return(0);
}

int count_word(char *str)
{
    int count = 0;
    int i = 0;

    while(str[i] && is_space(str[i]))
        i++;
    while(str[i])
    {
        if(!is_space(str[i]) && (is_space(str[i + 1]) || str[i + 1] == '\0'))
            count++;
        i++;
    }
    return(count);
}

char *fill_word(char *str)
{
    int i = 0;
    char *res;

    while(str[i] && !is_space(str[i]))
        i++;
    res = malloc((i + 1) * sizeof(char));
    if(!res)
        return(NULL);
    i = 0;
    while(str[i])
    {
        res[i] = str[i];
        i++;
    }
    res[i] = '\0';
    return(res);
}

char **ft_split(char *str)
{
    char **res;
    int i = 0;
    int c_w = 0;

    c_w = count_word(str);
    res = malloc((c_w + 1) * sizeof(char *));
    if(!res)
        return(NULL);
    while(*str)
    {
        while(*str && is_space(*str))
            str++;
        if(*str && !is_space(*str))
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
    return(res);
}