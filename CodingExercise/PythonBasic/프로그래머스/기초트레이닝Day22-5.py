# Solution 1
def solution(my_string, target):
    for i in range(len(my_string)):
        if target == my_string[i:i+len(target)]:
            return 1
    return 0

# Solution 2
def solution(my_string, target):
    return int(target in my_string)
