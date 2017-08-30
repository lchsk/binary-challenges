/* Compile with:

   gcc ch2.c -std=c99 -o ch2
*/

#include <stdlib.h>
#include <assert.h>

unsigned swap_nibbles(unsigned n)
{
    /* Get low nibble (low 4 bits) */
    unsigned lo = n & 0xF;

    /* Get high nibble (high 4 bits) */
    unsigned hi = (n >> 4) & 0xF;

    return (lo << 4) | hi;
}

int main()
{
    for (int i = 0; i < 16; i++)
        for (int j = 0; j < 16; j++)
            assert(swap_nibbles(i * 16 + j) == (j << 4) | i);
}
