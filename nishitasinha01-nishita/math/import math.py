import math
ab = int(input())
bc = int(input())
ac= math.sqrt(ab**2 + bc**2)
c= ac/2.0
d= bc/2.0
e=(math.acos(d/c))
f=int(math.degrees(e))
print(f)