def solution(arr, n):
    length = len(arr)
    
    if length % 2 == 1:  # arr의 길이가 홀수인 경우
        for i in range(0, length, 2):  # 짝수 인덱스에 n 더하기
            arr[i] += n
    else:  # arr의 길이가 짝수인 경우
        for i in range(1, length, 2):  # 홀수 인덱스에 n 더하기
            arr[i] += n
    
    return arr
