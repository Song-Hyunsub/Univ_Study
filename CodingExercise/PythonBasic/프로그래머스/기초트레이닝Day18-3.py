def solution(binomial):
    # 문자열을 공백을 기준으로 나눕니다.
    a, op, b = binomial.split()
    
    # a와 b를 정수로 변환합니다.
    a = int(a)
    b = int(b)
    
    # 연산자를 확인하고 해당 연산을 수행합니다.
    if op == '+':
        return a + b
    elif op == '-':
        return a - b
    elif op == '*':
        return a * b
