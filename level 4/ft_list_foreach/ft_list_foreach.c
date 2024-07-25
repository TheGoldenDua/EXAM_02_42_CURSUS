#include "ft_list_foreach.h"
void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    if(!*begin_list)
        return ;
    while(begin_list)
    {
            (*f)(begin_list->data);
            begin->list = begin_list->next;
    }
}