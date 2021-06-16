### Loop
### Question: 
Task
The provided code stub reads and integer,n , from STDIN. For all non-negative integers i<n , print i2. 
### Example
The list of non-negative integers that are less than is. Print the square of each number on a separate line.

0
1
4
nput Format

The first and only line contains the integer,

.

Constraints

Output Format

Print lines, one corresponding to each.

Sample Input 0

5

Sample Output 0

0
1
4
9
16

### Solution
For loop is used to print the i*i
	
		if __name__ == '__main__':
   		 n = int(input())
    		for i in range (n):
        		if i >=0 :
            print (i**2)
        
