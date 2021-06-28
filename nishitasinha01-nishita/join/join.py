def split_and_join(s):
    result= s.split()
    result = "-".join(result)
    return  result
sentence= input()
a= split_and_join(sentence)
print(a)