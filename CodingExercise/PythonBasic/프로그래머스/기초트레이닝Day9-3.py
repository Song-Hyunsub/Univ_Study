# Solution 1
def solution(my_string, n):
    result = ''
    ltr = len(my_string)
    for i in range(ltr-n ,ltr):
        result += my_string[i]
    return result

# Solution 2
def solution(my_string, n):
    return my_string[-n:]
