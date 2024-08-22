# Solution 1
def solution(arr, delete_list):
    result = []
    for i in arr:
        if i not in delete_list:
            result.append(i)
    return result

# Solution 2
def solution(arr, delete_list):
    return [x for x in arr if x not in delete_list]
