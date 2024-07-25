#include <unistd.h>
#include <stdio.h>
#include <string.h>


size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0; 
    size_t j = 0; 

    
    while(s[i])
    {
        if(s[i] == reject[j])
            return(i);
        i++;
    }
    return(i);
}
