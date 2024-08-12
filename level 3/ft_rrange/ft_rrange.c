#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int len = 0;
    int i = 0;
    int *res;

    if(start > end)
        len = start - end + 1;
    else
        len = end - start + 1;
    res = malloc(len *sizeof(int));
    if(!res)
        return (NULL);
    while(i < len)
    {
        if(start > end)
        {
            res[i] = end;
            end++;
        }
        else
        {
            res[i] = end;
            end--;
        }
        i++;
    }
    return (res);
}