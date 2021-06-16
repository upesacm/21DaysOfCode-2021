## Question :
 
 Print a pattern of numbers from  to  as shown below. Each of the numbers is separated by a single space.

  4 4 4 4 4 4 4  
  4 3 3 3 3 3 4   
  4 3 2 2 2 3 4   
  4 3 2 1 2 3 4   
  4 3 2 2 2 3 4   
  4 3 3 3 3 3 4   
  4 4 4 4 4 4 4   
Input Format

The input will contain a single integer .

Constraints


Sample Input 0

2
Sample Output 0

2 2 2
2 1 2
2 2 2
Sample Input 1

5
Sample Output 1

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
Sample Input 2

7
Sample Output 2

7 7 7 7 7 7 7 7 7 7 7 7 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 2 1 2 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 7 7 7 7 7 7 7 7 7 7 7 7 

## solution : 
first i founded out that every patter for input n will have n*2-1 number of rows and coloumns
then i devided pattern into 6 sub patterns such that the execution of several sub patterns together will complete 1 row of the main pattern and applied conditions for their execution.
I solved this problem by only using if-else and for loop and with the help of some operators.
pattern is devided into two parts (1st part is from row 1 to row n & 2nd part is from row n+1 to row n*2-1) with each part having 3 sub patterns.