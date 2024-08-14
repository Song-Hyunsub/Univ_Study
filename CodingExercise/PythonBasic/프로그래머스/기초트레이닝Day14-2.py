# Solution 1
def solution(names):
    return names[::5]

# Solution 2
def solution(names):
    answer = []
    for i in range(len(names)):
        if i % 5 == 0:
            answer.append(names[i])
    return answer
