#Function to add array elements
def add_arr(arr):
    sum = 0
    for i in arr:
        sum = sum + i
    return (sum)
#Driver Code
arr=[]
n=int(input("Enter number of array elements:"))
for x in range(n):
    ele=int(input("Enter element:"))
    arr.append(ele)

ans = add_arr(arr)
print(ans)