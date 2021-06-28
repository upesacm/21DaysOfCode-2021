Example:
>>> a = "this is a string"
>>> a = a.split(" ") # a is converted to a list of strings. 
>>> print a
['this', 'is', 'a', 'string']

Joining a string is simple:
>>> a = "-".join(a)
>>> print a
this-is-a-string 

Task:
You are given a string. Split the string on a " " (space) delimiter and join using a - hyphen.

Input Format:
The one line contains a string consisting of space separated words.

Function Description:
Complete the split_and_join function in the editor below.
split_and_join has the following parameters:
string line: a string of space-separated words

Returns:
string: the resulting string