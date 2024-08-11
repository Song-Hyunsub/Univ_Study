def solution(n, k):
    answer = []
    for i in range(n//k):
        answer.append((i+1) * k)
    return answer
