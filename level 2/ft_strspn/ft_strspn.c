#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    size_t j = 0;

    while(s[i])
    {
        j = 0;
        while(accept[j])
        {
            if(s[i] == accept[j])
                break;
            j++;
        }
        if(accept[j] == '\0')
            break;
        i++;
    }
    return 
);
}


int main()
{
    char *s = "hello word";
    char *ac = "hello fg mm";

    printf("%ld\n", ft_strspn(s, ac));
    printf("%ld\n", strspn(s, ac));

}