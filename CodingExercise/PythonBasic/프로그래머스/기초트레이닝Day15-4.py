# Solution 1
def solution(num_list):
    sum_num = 0
    mul_num = 1
    if len(num_list) >= 11:
        for i in range(len(num_list)):
            sum_num += num_list[i]
        return sum_num
    else:
        for i in range(len(num_list)):
            mul_num *= num_list[i]
        return mul_num
    
# Solution 2
from math import prod
def solution(num_list):
    return sum(num_list) if len(num_list)>=11 else prod(num_list)
