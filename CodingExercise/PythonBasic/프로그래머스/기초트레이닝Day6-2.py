# Solution 1
def solution(n, control):
    for i in range(0, len(control)):
        if control[i]=='w':
            n+=1
        elif control[i]=='s':
            n-=1
        elif control[i]=='d':
            n+=10
        elif control[i]=='a':
            n-=10
    return n

# Solution 2
def solution(n, control):
    for char in control:
        if char=='w':
            n+=1
        elif char=='s':
            n-=1
        elif char=='d':
            n+=10
        elif char=='a':
            n-=10
    return n
