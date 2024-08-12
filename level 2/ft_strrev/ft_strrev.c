#include <stdlib.h>

char    *ft_strrev(char *str)
{
    int len = 0;
    int start = 0;
    int end = 0;
    char tmp;

    if(!str)
        return (NULL);
    while(str[len])
        len++;
    end = len - 1;
    while(start < end)
    {
        tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
    }
    return (str);
}


