def solution(num_list):
    
    odd_numbers = []
    for num in num_list:
        if num % 2 != 0:  # 홀수인지 확인
            odd_numbers.append(str(num))  # 문자열로 변환하여 리스트에 추가
    
    even_numbers = []
    for num in num_list:
        if num % 2 == 0:  # 짝수인지 확인
            even_numbers.append(str(num))  # 문자열로 변환하여 리스트에 추가
            
    odd_number_str = ''.join(odd_numbers)
    even_number_str = ''.join(even_numbers)

    odd_number = int(odd_number_str)
    even_number = int(even_number_str)

    return odd_number + even_number

