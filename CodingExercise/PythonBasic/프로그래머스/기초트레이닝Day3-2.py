# Solution 1
def solution(arr):
    result = ''
    for char in arr:
        result += char
    return result

# Solution 2
def solution(arr):
    result = []
    for char in arr:
        result.append(char)
    return ''.join(result)

# Solution 3
def solution(arr):
    return ''.join(arr)
