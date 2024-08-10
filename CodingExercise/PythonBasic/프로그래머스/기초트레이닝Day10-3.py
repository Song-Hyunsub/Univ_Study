def solution(my_string, s, e):
    part_to_reverse = my_string[s:e+1]
    reversed_part = ''
    for char in part_to_reverse:
        reversed_part = char + reversed_part  # 순서를 뒤집는 역할을 해줌
    return my_string[:s] + reversed_part + my_string[e+1:]
