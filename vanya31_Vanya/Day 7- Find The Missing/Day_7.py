def findint(arr):
    return [i for i in range(n) if i not in arr]

n=int(input())
arr = list(map(int, input().split()))

arr=[int(i) for i in arr ]
res=(findint(arr))
if n==1:
    print(1)
else:
 print(res[1])