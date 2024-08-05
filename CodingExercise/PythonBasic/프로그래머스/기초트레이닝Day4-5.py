def solution(a, b, flag):
    if flag:
        return a + b
    else:
        return a - b

# 예시 테스트
print(solution(-4, 7, True))  # 3
print(solution(-4, 7, False))  # -11
