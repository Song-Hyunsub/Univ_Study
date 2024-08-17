def solution(myString, pat):
    # pat이 myString에서 마지막으로 등장하는 위치를 찾습니다.
    last_index = myString.rfind(pat)
    
    # 그 위치까지의 문자열을 자릅니다.
    result = myString[:last_index + len(pat)]
    
    return result