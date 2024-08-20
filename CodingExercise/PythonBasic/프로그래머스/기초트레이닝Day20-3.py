def solution(strArr):
    length_count = {}
    
    for s in strArr:
        length = len(s)
        if length in length_count:
            length_count[length] += 1
        else:
            length_count[length] = 1
    
    # 가장 큰 그룹의 크기를 반환
    return max(length_count.values())
