def solution(arr, idx):
    answer = 0
    for i in range(idx, len(arr)):
        if arr[i]: # arr[i]가 0이 아닌 경우
            answer = i
            break
        else:
            answer = -1
    return answer
