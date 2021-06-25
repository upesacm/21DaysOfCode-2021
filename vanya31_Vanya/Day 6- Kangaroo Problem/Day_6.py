#Kangaroo Problem
import math
import os
import random
import re
import sys

#
# Complete the 'kangaroo' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. INTEGER x1
#  2. INTEGER v1
#  3. INTEGER x2
#  4. INTEGER v2
#

def kangaroo(x1, v1, x2, v2):
    # Write your code here
    # My Solution
    for x in range(1000):
     if ((x1+v1)==(x2+v2)):
        print("YES")
     x1=x1+v1
     x2=x2+v2
    print("NO")

#Driver Code
first_multiple_input = input().rstrip().split()
x1 = int(first_multiple_input[0])
v1 = int(first_multiple_input[1])
x2 = int(first_multiple_input[2])
v2 = int(first_multiple_input[3])

kangaroo(x1, v1, x2, v2)