# Finding Sum of Array
# Method 2
n=int(input("Enter number of elements in Array:"))
arr=[]
for x in range(n):
    num=int(input("Enter array element:"))
    arr.append(num)

add=sum(arr,0)
print(add)
print(arr)
