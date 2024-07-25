#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>



int     *ft_range(int start, int end)
{
    int i;
    int len;
    int *res;
    int j;

    i = start;
    
    if(end >= start)
        len = end - start + 1;
    if(end < start)
        len = start - end + 1;
    res = malloc(len * sizeof(int));
    if(start == 0 && end == 0)
    {
        res[0] = 0;
        return (res);
    }
    j = 0;
    if(i <= end)
    {   
       while(i <= end)
       {
            // printf("i=%d \t j=%d\n", i, j);
            res[j] = i;
            i++;
            j++;
       }
    }
    else
    {
         while(i >= end)
        {
            res[j] = i;
            i--;
            j++;
            // printf("%d \t %d\n", i, j);
        }
    }
    return (res);
}