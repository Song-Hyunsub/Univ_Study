# Solution 1
def solution(n_str):
    # 처음 0이 아닌 문자가 등장하는 위치를 찾는다
    index = 0
    while index < len(n_str) and n_str[index] == '0':
        index += 1
    
    # 그 위치부터 문자열을 반환한다
    return n_str[index:]

# Solution 2
def solution(n_str):
    return n_str.lstrip('0')
