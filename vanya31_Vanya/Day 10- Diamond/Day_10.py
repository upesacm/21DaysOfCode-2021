def Diamond1(rows):
#Upper Half
 for i in range(0, rows + 1):
     for j in range(i, rows + 1):
         print(" ", end =" ")
     for j in range(0, i + 1):
          print(j, end=" ")
     for j in range(i - 1, 0, -1):
            print(j, end=" ")
     print("0")

def Diamond2(rows):
 #Lower half
 for i in range(0, rows + 1):
     for j in range(i, rows + 1):
         print(" ", end =" ")
     for j in range(i-1,0):
         print(j, end=" ")
     for j in range(i - 1, 0, -1):
         print(j, end=" ")
     print(" ")




rows=5
Diamond1(rows)
Diamond2(rows)