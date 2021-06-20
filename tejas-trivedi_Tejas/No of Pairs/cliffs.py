import sys

t = int(input())

for _ in range(t):

    n = int(input())
    arr = list(map(int,input().split()))
    arr.sort()

    mi = arr[1]-arr[0]
    ind = 0
    for i in range(n-1):
        if arr[i+1]-arr[i]<mi:
            ind = i
            mi = arr[i+1]-arr[i]

    brr = [arr[ind]]

    for i in range(ind+2,n):
        brr.append(arr[i])

    for j in range(ind):
        brr.append(arr[j])

    brr.append(arr[ind+1])
    print(*brr)
