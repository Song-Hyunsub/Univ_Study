def solution(my_string, is_suffix):
    answerArr = []
    for i in range(len(my_string)):
        answer = my_string[i:]
        answerArr.append(answer)
    answerArr.sort()
    if is_suffix in answerArr:
        return 1
    else:
        return 0
