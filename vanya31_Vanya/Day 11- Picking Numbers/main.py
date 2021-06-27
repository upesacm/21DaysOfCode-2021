def pickingNumbers(arr):
    result = 0
    checked = set()
    for i in range(len(arr)):
        if i not in checked:
            maxcount = max(arr.count(arr[i]) + arr.count(arr[i] + 1), arr.count(arr[i]) + arr.count(arr[i] - 1))
            if maxcount > result:
                result = maxcount
            checked.add(i)
    return result


n = int(input().strip())
arr = list(map(int, input().strip().split(' ')))
result = pickingNumbers(arr)
print(result)