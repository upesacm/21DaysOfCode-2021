n = int(input())
s =input()

l = list(s)
arr= []
arr.append(l[0])
for i in range(1,len(l)):
    arr.append(l[i])
    try:
        if arr[-1] and arr[-2]:
            if arr[-1]==arr[-2]:
                arr.pop()
                arr.pop()
    except:
        pass
print(len(arr))

print(''.join(arr))
