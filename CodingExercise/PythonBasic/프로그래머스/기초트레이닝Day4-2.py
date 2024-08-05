def solution(number, n, m):
    if number % n == 0 and number % m == 0:
        return 1
    else:
        return 0

# 예시 테스트
print(solution(60, 2, 3))  # 1
print(solution(55, 10, 5))  # 0
