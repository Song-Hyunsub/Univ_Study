def solution(a, d, included):
    sum_result = 0
    for i in range(len(included)):
        term = a + i * d # 등차수열의 i+1번째 항
        if included[i]:
            sum_result += term    
    return sum_result
