# Solution 1

def generate_zeros_and_fives(n):
    if n == 0:
        return ['']
    
    smaller_numbers = generate_zeros_and_fives(n - 1)
    result = []
    for num in smaller_numbers:
        result.append(num + '0')
        result.append(num + '5')
    
    return result

def solution(l, r):
    result = []
    n = len(str(r))  # r의 자리수
    candidates = generate_zeros_and_fives(n)
    
    for num_str in candidates:
        if num_str:  # 빈 문자열 거르기
            num = int(num_str)
            if l <= num <= r:
                result.append(num)
    
    if not result:
        return [-1]
    
    result.sort()
    return result

# Solution 2

def solution(l, r):
    answer = []
    i = 1
    n = 5

    while True:
        if n > r:
            break
        n = 5 * int(bin(i)[2:])
        if l <= n <= r:
            answer.append(n)
        i += 1

    return [-1] if len(answer) == 0 else answer
