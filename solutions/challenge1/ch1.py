def check_if_odd(n):
    """Check if an integer is odd.

    Args:
        n (int)

    Return:
        1 if n is odd,
        0 otherwise"""

    return n & 1


if __name__ == '__main__':
    for i in range(-2 << 19, 2 << 19):
        assert(check_if_odd(i) == i % 2)
