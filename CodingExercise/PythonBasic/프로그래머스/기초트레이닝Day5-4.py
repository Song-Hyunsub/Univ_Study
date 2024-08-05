def solution(num_list):
    product = 1
    for i in num_list:
        product *= i
    sum_num = sum(num_list)
    sum_sq = sum_num**2
    if product < sum_sq:
        return 1
    else:
        return 0
