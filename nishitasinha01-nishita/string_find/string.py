def count(str,sub):
    c=0
    for i in range(0,len(str)):
        if(str[i:i+len(sub)]==sub):
            c=c+1
    return c
string=input().strip()
substring=input().strip()
d=count(string,substring)
print(d)

