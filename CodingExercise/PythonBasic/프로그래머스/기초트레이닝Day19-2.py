def solution(arr):
    result = []
    for i in range(len(arr)):
        for j in range(arr[i]):
            result.append(arr[i])
    return result
