# Solution 1
def solution(arr):
    for i in range(len(arr)):
        if arr[i]%2==0 and arr[i]>=50:
            arr[i] /= 2
        elif arr[i]%2==1 and arr[i]<50:
            arr[i] *= 2
    return arr

# Solution 2
def solution(arr):
    answer = []

    for item in arr:
        if item >= 50 and not item % 2:
            answer.append(item // 2)
        elif item < 50 and item % 2:
            answer.append(item * 2)
        else:
            answer.append(item)

    return answer
