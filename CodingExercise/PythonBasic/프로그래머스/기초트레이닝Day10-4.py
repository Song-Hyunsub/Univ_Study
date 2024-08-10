# Solution 1
def solution(my_string, m, c):
    result = ""
    n = len(my_string) // m  # 행의 수

    for i in range(n):
        result += my_string[i * m + (c - 1)]  # c번째 열의 문자 선택
    
    return result

# Solution 2
def solution(my_string, m, c):
    result = ""
    for i in range(0, len(my_string), m):
        result += my_string[i + c - 1]
    return result
