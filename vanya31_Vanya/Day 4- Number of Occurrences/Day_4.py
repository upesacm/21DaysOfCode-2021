arr=[]
def array_occur():
    n=int(input("Enter number of elements in array:"))
    print("Enter array element:")
    for i in range(n):
     ele=int(input())
     arr.append(ele)

    search = int(input("Enter the element to search:"))
    occur = arr.count(search)
    print("Number of times the element occurred is: ",occur)


array_occur()




