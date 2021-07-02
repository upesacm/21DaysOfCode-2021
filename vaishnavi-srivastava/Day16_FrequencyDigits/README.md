//Hackerrank question
//PROBLEM SOLVING-FREQUENCY OF DIGITS

Given a string, s , consisting of alphabets and digits, find the frequency of each digit in the given string.
For example:

Given string is : a11472o5t6
Here the output will be: 0 2 1 0 1 1 1 1 0 0

Explanation
In the given string:

1 occurs two times.
2, 4, 5, 6 and 7 occur one time each.
The remaining digits 0, 3, 8 and 9 don't occur at all.

Input Format

The first line contains a string, num which is the given number.

Constraints

1<=len(num)<=1000
All the elements of num are made of english alphabets and digits.

Output Format

Print ten space-separated integers in a single line denoting the frequency of each digit from 0 to 9.

Sample Input 0

a11472o5t6
Sample Output 0

0 2 1 0 1 1 1 1 0 0 
Sample Input 1

lw4n88j12n1
Sample Output 1

0 2 1 0 1 0 0 0 2 0 

//APPROACH
1. Input the size of the string
2. Input the string
3. COunt the occurence of numbers
4. Replace alphabets with 0
5. Replace the digits with their occurence