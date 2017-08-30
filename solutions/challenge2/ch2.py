def swap_nibbles(n):
    """Swap nibbles of a byte.

    Args:
        n (int)

    Return:
        a byte with its halves swapped."""

    # Get low nibble (low 4 bits)
    lo = n & 0xF

    # Get high nibble (high 4 bits)
    hi = (n >> 4) & 0xF

    return (lo << 4) | hi


if __name__ == '__main__':
    for i in range(0, 16):
        for j in range(0, 16):
            assert(swap_nibbles(i * 16 + j) == (j << 4) | i)
