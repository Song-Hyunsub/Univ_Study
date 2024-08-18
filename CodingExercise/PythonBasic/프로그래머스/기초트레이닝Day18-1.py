def solution(myString):
    # "x"를 기준으로 문자열을 나눕니다.
    parts = myString.split('x')
    
    # 나눠진 문자열 각각의 길이를 구합니다.
    result = [len(part) for part in parts]
    
    return result
