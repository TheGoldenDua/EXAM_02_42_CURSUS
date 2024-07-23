
int		max(int* tab, unsigned int len)
{
    int i;
    int max;

    i = 0;
    max = 0;
    if(!tab)
        return (0);
    while(tab[i] && i <= len)
    {
        if(tab[i] > max)
            max = tab[i];
        i++;
    }
    return (max);
}