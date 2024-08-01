
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
        i++;
    return(i);
}

char    *ft_strdup(char *src)
{
    int i = 0;
    int len = 0;
    char *res;

    len = ft_strlen(src);
    res = malloc ((len + 1) * sizeof(char));
    if(!res)
        return (NULL);
    while(src[i])
    {
        res[i] = src[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}