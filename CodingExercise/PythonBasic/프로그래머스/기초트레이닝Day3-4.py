def solution(a, b):
    r1 = int(str(a) + str(b))
    r2 = int(str(b) + str(a))
    if r1 > r2:
        return r1
    else:
        return r2
