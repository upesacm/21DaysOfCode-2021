### Question

Given the participants' score sheet for your University Sports Day, you are required to find the runner-up score. You are given **n** scores. Store them in a list and find the score of the runner-up.

**Input Format**

The first line contains **n** . The second line contains an array **A[]** of **n** integers each separated by a space

**Output Format**

Print the runner-up score.

**Sample Input :**

	5
	2 3 6 6 5

**Sample Output:**

	5



# Solution

Used list constructor , sort function along split and map function.

	arr = map(int, input().split())
		list = list(set(arr))
		sort = sorted(list)