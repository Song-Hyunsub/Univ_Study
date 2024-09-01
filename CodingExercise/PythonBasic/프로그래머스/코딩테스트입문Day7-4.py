def solution(n):
    result = 0
    for i in range(1, n//2+1):
        result += i * 2
    return result

def solution(n):
    return sum([i for i in range(2, n + 1, 2)])
