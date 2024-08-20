def solution(arr):
    length = len(arr)
    # 목표 길이 구하기
    target_length = 1
    while target_length < length:
        target_length *= 2
    
    # 필요한 0의 개수 추가
    zeros_to_add = target_length - length
    arr.extend([0] * zeros_to_add)
    
    return arr
