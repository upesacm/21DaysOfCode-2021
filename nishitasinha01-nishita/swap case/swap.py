def swap_case(s):
    a=""
    for char in s:
        if(char.isupper()==True):
            a +=(char.lower())
        elif(char.islower()==True):
            a +=(char.upper())
        else:
            a +=char
    return a
str = input()
b = swap_case(str)
print(b)