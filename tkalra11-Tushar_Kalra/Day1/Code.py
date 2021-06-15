import math


def f(x, b, c):
    return (((x*x) + (b*x) + c)/math.sin(x))


test_cases = int(input())
for _ in range(test_cases):
    numbers = list(map(float, input().split()))
    b = numbers[0]
    c = numbers[1]
    low = 0
    high = math.pi/2
    #high = 3.14159//2
    tries = 25
    while(tries > 0):
        stretch = (high - low) / 3.00
        v1 = low + stretch
        v2 = high - stretch
        f1 = f(v1, b, c)
        f2 = f(v2, b, c)
        if(f1 >= f2):
            low = v1
        if(f1 <= f2):
            high = v2
        if(low == high):
            break
        tries -= 1
    print(f((low + high)*0.5, b, c))
