#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bits;

    while(i > 0)
    {
        bits = (octet >> 8 & 1) + '0';
        write(1, &bits, 1);
        i--;
    }
}