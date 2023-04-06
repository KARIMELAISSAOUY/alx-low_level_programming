#include <stdio.h>

void print_binary(unsigned long int n)
{
    int i;

    /* - Find the position of the most significant bit */
    for (i = 63; i >= 0; i--)
    {
        if ((n >> i) & 1)
            break;
    }

    /* - Print the binary digits in reverse order */
    for (; i >= 0; i--)
    {
        putchar((n >> i) & 1 ? '1' : '0');
    }
}






