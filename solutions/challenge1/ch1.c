/* Compile with:

   gcc ch1.c -std=c99 -o ch1
*/

#include <stdlib.h>
#include <assert.h>

/*
Check if an integer is odd.

Return:
    1 if n is odd,
    0 otherwise.
*/
int check_if_odd(int n)
{
    return n & 1;
}

int main()
{
    for (int i = -2 << 19; i < 2 << 19; ++i)
        assert(check_if_odd(i) == abs(i % 2));
}
