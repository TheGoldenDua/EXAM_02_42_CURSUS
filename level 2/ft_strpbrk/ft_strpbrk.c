#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j = 0;
    char *res;

    while(s1[i])
    {
        j = 0;
        while(s2[j])
        {
            if(s1[i] == s2[j])
            {
                res = (char *)&s1[i];
                return (res);
            }
                
            j++;
        }
        i++;
    }
    return (NULL);
}
#include <string.h>

int main()
{
    char *s1 = "hello word";
    char *s2 = "o";
    char *res = ft_strpbrk(s1, s2);
    
    printf("%s\n", res);
    printf("%s\n", strpbrk(s1, s2));
}