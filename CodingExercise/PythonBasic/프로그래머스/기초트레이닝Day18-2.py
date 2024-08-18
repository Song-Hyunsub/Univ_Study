def solution(myString):
    # "x"를 기준으로 문자열을 나눕니다.
    parts = myString.split('x')
    
    # 빈 문자열을 제거하고 사전순으로 정렬합니다.
    result = sorted([part for part in parts if part])
    
    return result
