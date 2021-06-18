### Question

You are given the firstname and lastname of a person on two different lines. Your task is to read them and print the following:

    Hello firstname lastname! You just delved into python.

**Function Description**

Complete the print_full_name function in the editor below.

print_full_name has the following parameters:

    string first: the first name
    string last: the last name
**Input Format**

The first line contains the first name, and the second line contains the last name. 

**Sample Input :
**
	Ross
	Taylor

**Sample Output :
**
	Hello Ross Taylor! You just delved into python.

**Explanation :**

The input read by the program is stored as a string data type. A string is a collection of characters.

# Solution

Used the format function from the in-built python function .

	"Hello {} {}! You just delved into python.".format(first, last)