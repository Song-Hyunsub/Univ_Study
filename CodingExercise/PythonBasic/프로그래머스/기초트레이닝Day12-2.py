def solution(num_list):
    answer = 0
    n = 0
    for i in num_list:
        if i < 0:
            return n
        else:
            n+=1
    return -1
