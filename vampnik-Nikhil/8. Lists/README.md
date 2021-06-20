
# Question

https://www.hackerrank.com/challenges/python-lists/problem



Solution
-------------
Used different List function along with the for loop to run the code till N number of lines only. Also nested if-else is used to create a switch case.

	for i in range(0,N):
		arr = input().split();
		if arr[0] == "print":
			print(List)
		elif arr[0] == "insert":
			List.insert(int(arr[1]) , int(arr[2]))
		elif arr[0] == "remove":
			List.remove(int(arr[1]))
		elif arr[0] == "pop":
			List.pop();
		elif arr[0] == "append":
			List.append(int(arr[1]))
		elif arr[0] == "sort":
			List.sort();
		elif arr[0] == "reverse":
			List.reverse();
