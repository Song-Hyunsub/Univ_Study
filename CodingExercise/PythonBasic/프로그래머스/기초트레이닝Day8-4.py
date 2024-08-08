def solution(number):
    answer = str(number)
    result = 0
    for i in answer:
        result += int(i)
    return result%9