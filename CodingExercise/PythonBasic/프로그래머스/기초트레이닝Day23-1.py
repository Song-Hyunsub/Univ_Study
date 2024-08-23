# Solution 1
def solution(str1, str2):
    return 1 if str1 in str2 else 0

# Solution 2
def solution(str1, str2):
    answer = 0

    str2 = list(str2)
    for i in range(len(str2)):
        if list(str1) == str2[:len(str1)]:
            return 1
        else:
            str2.pop(0)

    return answer