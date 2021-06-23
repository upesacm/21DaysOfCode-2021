def mutate_string(str, a, ch):
    b = a+1
    d = str[:a]+ch+str[b:]
    return d
s = input()
i, c = input().split()
s_new = mutate_string(s, int(i), c)
print(s_new)