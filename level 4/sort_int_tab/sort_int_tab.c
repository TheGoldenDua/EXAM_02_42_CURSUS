
void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i;
    int tmp;

    i = 0;
    while(tab[i] )
    {
        if(tab[i] > tab[i+1])
        {
            tmp = tab[i];
            tab[i] = tab[i+1];
            tab[i+1] = tmp;
            i = 0;
        }
        else
            i++;
    }
}