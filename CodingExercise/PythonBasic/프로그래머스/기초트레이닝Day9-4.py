def solution(my_string):
    answerArr = []
    for i in range(len(my_string)):
        answer = my_string[i:]
        answerArr.append(answer)
    answerArr.sort()
    return answerArr
