def solution(array, height):
    result=0
    for item in array:
        if item > height:
            result+=1
    return result

def solution(array, height):
    return sum(1 for item in array if item > height)
