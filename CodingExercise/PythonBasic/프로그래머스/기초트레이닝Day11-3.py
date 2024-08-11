def solution(my_string, indices):
    # indices를 내림차순으로 정렬
    indices.sort(reverse=True)
    
    # indices에 해당하는 문자들을 제거
    for index in indices:
        my_string = my_string[:index] + my_string[index + 1:]
    
    return my_string
