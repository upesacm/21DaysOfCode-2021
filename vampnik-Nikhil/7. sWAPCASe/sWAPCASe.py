def swap_case(s):
    swapped = s.swapcase()
    return swapped

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)