def minion_game(str):
  vowels = 'AEIOU'
  p1 = 0
  p2 = 0
  for i in range(len(str)):
    if s[i] in vowels:
        p1 += (len(str)-i)
    else:
        p2 += (len(str)-i)
  if p1>p2:
    print("Kevin", p1)
  elif p2>p1:
    print("Stuart", p2)
  else:
    print("Draw")
s = input()
minion_game(s)