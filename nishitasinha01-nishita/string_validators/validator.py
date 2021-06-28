def alphanum(s):
    for i in range(len(s)):
        if(s[i].isalnum()):
            return True
def alpha(s):
    for i in range(len(s)):
        if(s[i].isalpha()):
            return True
def num(s):
    for i in range(len(s)):
        if(s[i].isdigit()):
            return True
def lower(s):
    for i in range(len(s)):
        if(s[i].islower()):
            return True
def upper(s):
    for i in range(len(s)):
        if(s[i].isupper()):
            return True
s = input()
a= alphanum(s)
b= alpha(s)
c= num(s)
d= lower(s)
e= upper(s)
print(a)
print(b)
print(c)
print(d)
print(e)