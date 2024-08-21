def solution(rank, attendance):
    answer = []
    for i in range(len(rank)):
        if attendance[i]:
            answer.append([rank[i], i])		# rank[i]는 등수, i는 몇 번째 학생인지
    answer.sort()

    return answer[0][1]*10000+answer[1][1]*100+answer[2][1]