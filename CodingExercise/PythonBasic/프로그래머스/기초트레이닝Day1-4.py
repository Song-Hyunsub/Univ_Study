# Solution 1
def swap_case(s):
    result = []
    for char in s:
        if char.isupper():
            result.append(char.lower())
        elif char.islower():
            result.append(char.upper())
        else:
            result.append(char)
    return ''.join(result)  # join() 메서드를 사용하여 문자열로 변환하여 반환

str = input()
newtext = swap_case(str)

print(newtext)


# Solution 2
str = input()
a = ''

for s in str :
    if(s.isupper()) :
        a = a + s.lower()
    else : 
        a = a + s.upper()

print(a)


# Solution 3
str = input()
for i in str:
    if i.islower():
        print(i.upper(),end='')
    else:
        print(i.lower(),end='')
