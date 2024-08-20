def solution(num_list):
    # 리스트를 오름차순으로 정렬
    sorted_list = sorted(num_list)
    
    # 앞에서 5개의 요소를 반환
    return sorted_list[:5]
