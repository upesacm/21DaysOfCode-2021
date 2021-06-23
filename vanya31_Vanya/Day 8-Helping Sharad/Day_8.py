def rem_vow(a):
    vowels = ['A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u']
    res = [i for i in a if i not in vowels]
    str=" "
    fin=str.join(res)
    return fin

t = int(input())
for x in range(t):
 str = input()
 a = list(str)

b=rem_vow(a).lower()
print('.'+b)