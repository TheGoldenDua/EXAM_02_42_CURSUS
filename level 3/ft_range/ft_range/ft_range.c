#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int i = 0;
    int len = 0;
    int *res;

    if(start > end)
        len = start - end + 1;
    else
        len = end - start + 1;
    res = malloc(len * sizeof(int));
    if(!res)
        return (NULL);
    while(i <= len - 1)
    {
        if(start > end)
        {
            res[i] = start;
            start--;
        }
        else
        {
            res[i] = start;
            start++;
        }
        i++;
    }
    return (res);
}

// #include <stdio.h>

// int main()
// {
//     int *res = ft_range(0, -3);
//     int i = 0;

//     while(i <= 3)
//     {
//         printf("%d\n", res[i]);
//         i++;
//     }
//     return (0);
// }