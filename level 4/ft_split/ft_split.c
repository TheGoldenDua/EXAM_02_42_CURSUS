#include <stdlib.h>

int is_space(char c)
{
    if(c == ' ' || c == '\t' || c == '\n')
        return (1);
    return (0);
}

int count_word(char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while(is_space(str[i]))
        i++;
    while(str[i])
    {
        if(!is_space(str[i]) && is_space(str[i + 1]))
            count++;
        i++;
    }
    return (count);
}

char *word_alloc(char *str)
{
    int i;
    char *word;

    i = 0;
    while(str[i] && !is_space(str[i]))
        i++;
    word = (char *) malloc((i + 1) * sizeof(char));
    i = 0;
    while(str[i] && !is_space(str[i]))
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
    
}

char    **ft_split(char *str)
{
    int i;
    char **res;
    int len;

    i = 0;
    len = count_word(str);
    res = (char **) malloc ((len + 1) *sizeof(char *));
    if(!res)
        return (NULL);
    while(*str)
    {
        while(*str && is_space(*str))
            str++;
        if(*str && !is_space(*str))
        {
            res[i] = word_alloc(str);
            i++;
            while(*str && !is_space(*str))
                str++;
        }
       
    }
     res[i] = 0;
    return (res);
}