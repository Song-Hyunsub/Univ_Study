def solution(arr):
    first_idx = -1
    last_idx = -1
    # 배열을 순회하면서 첫 번째와 마지막 2의 위치를 찾음
    for i in range(len(arr)):
        if arr[i] == 2:
            if first_idx == -1:
                first_idx = i
            last_idx = i
    # 만약 2가 없으면 [-1] 반환
    if first_idx == -1:
        return [-1]
    return arr[first_idx:last_idx+1]
