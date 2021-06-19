### Question

You have a record of *N* students. Each record contains the student's name, and their percent marks inMaths, Physics and Chemistry. The marks can be floating values. The user enters some integer *N* followed by the names and marks for *N* students. You are required to save the record in a dictionary data type.The user then enters a student's name. Output the average percentage marks obtained by that student,correct to two decimal places.

**Input Format**
The first line contains the integer , the number of students. The next  lines contains the name andmarks obtained by that student separated by a space. The final line contains the name of a particularstudent previously listed.

**Output Format**
Print one line: The average of the marks obtained by the particular student correct to 2 decimal places.

**Sample Input :**

	3
	Krishna 67 68 69
	Arjun 70 98 63
	Malika 52 56 60
	Malika

**Sample Output :**

	56.00



# Solution

Used the format function from the in-built python function along with the type conversion and length function to calculate the percentage from the array of marks of inserted student name. Also used the for loop to get the input of student name and marks. 

	for _ in range(n):
			line = raw_input().split()
			name, scores = line[0], line[1:]
			scores = map(float, scores)
			student_marks[name] = scores
		query_name = raw_input()
		query_marks = float(sum(student_marks[query_name]))
		query_total = len(student_marks[query_name])
		percentage = (query_marks / query_total)
		print("{:.2f}".format(percentage))

