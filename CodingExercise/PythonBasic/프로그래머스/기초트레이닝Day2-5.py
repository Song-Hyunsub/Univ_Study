def solution(my_string, overwrite_string, s):
    # 문자열의 처음부터 s 위치까지 + 덮어쓸 문자열 + 나머지 문자열
    answer = my_string[:s] + overwrite_string + my_string[s+len(overwrite_string):]
    return answer
