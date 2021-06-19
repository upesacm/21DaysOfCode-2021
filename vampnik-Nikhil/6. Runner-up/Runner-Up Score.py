if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    list = list(set(arr))
    sort = sorted(list)
    print(sort[-2])
