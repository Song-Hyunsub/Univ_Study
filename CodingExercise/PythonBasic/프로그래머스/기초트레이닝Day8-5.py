# Solution 1
def solution(my_string, queries):
    answer = my_string
    for start, end in queries:
        my_string = my_string[:start] + my_string[start:end+1][::-1] + my_string[end+1:]
    return my_string

# Solution 2
def solution(my_string, queries):
    for start, end in queries:
        # 부분 문자열 추출
        substring = my_string[start:end+1]
        
        # 추출한 부분 문자열 뒤집기
        reversed_substring = ""
        for char in substring:
            reversed_substring = char + reversed_substring
        
        # 원래 문자열에서 부분 문자열을 뒤집은 것으로 대체
        my_string = my_string[:start] + reversed_substring + my_string[end+1:]
    
    return my_string