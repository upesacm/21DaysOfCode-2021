#Reversing an array
arr=[]
n=int(input("Enter length of array:"))
for x in range(n):
    ele=int(input("Enter array element:"))
    arr.append(ele)
print("Original Array:",arr)
arr.sort(reverse=True)
print("Reversed Array:",arr)