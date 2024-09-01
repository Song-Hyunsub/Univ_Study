def solution(n, k):
    return n * 12000 + (k - n//10) * 2000 if k >=1 else n * 12000
