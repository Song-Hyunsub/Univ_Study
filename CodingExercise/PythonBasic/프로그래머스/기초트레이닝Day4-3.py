def solution(n):
    if n % 2 == 1:  # n이 홀수인 경우
        odd_sum = sum(i for i in range(1, n+1, 2))
        return odd_sum
    else:  # n이 짝수인 경우
        even_squared_sum = sum(i**2 for i in range(2, n+1, 2))
        return even_squared_sum

# 예시 테스트
print(solution(7))  # 16
print(solution(10))  # 220
