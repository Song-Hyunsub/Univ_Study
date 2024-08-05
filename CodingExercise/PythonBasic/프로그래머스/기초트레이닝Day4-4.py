def solution(ineq, eq, n, m):
    if ineq == "<" and eq == "=":
        return 1 if n <= m else 0
    elif ineq == ">" and eq == "=":
        return 1 if n >= m else 0
    elif ineq == "<" and eq == "!":
        return 1 if n < m else 0
    elif ineq == ">" and eq == "!":
        return 1 if n > m else 0
    else:
        return 0  # This should never be reached with the given constraints

# 예시 테스트
print(solution("<", "=", 20, 50))  # 1
print(solution(">", "!", 41, 78))  # 0
