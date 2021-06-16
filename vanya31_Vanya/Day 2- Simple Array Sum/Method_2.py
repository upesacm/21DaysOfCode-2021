#using built-in function sum
arr=[]
n=int(input("Enter number of elements:"))
for x in range(n):
    ele=int(input("Enter element:"))
    arr.append(ele)
add=sum(arr)
print(add)