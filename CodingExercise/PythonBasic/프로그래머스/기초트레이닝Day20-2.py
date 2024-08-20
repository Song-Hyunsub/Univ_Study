def solution(arr1, arr2):
    # 배열의 길이 비교
    if len(arr1) > len(arr2):
        return 1
    elif len(arr1) < len(arr2):
        return -1
    
    # 배열의 길이가 같을 경우, 원소의 합 비교
    sum1 = sum(arr1)
    sum2 = sum(arr2)
    
    if sum1 > sum2:
        return 1
    elif sum1 < sum2:
        return -1
    else:
        return 0
