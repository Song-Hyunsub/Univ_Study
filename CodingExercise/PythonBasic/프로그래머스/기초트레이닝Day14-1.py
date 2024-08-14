# Solution 1
def solution(num_list):
    a,b=0,0
    for i in range(len(num_list)):
        if i%2:a+=num_list[i]
        else: b+=num_list[i]
    return max(a,b)

# Solution 2
def solution(num_list):
    a = sum(num_list[0::2])
    b = sum(num_list[1::2])
    if a > b:
        return a
    else:
        return b