def solution(a, b):
    answer = 0
    r1 = int(str(a)+str(b))
    r2 = 2 * a * b
    return max(r1, r2)
