# Solution 1
def solution(str_list):
    # "l"과 "r"의 인덱스를 각각 찾기
    l_index = str_list.index("l") if "l" in str_list else None
    r_index = str_list.index("r") if "r" in str_list else None

    # "l"과 "r"이 모두 없는 경우 빈 리스트 반환
    if l_index is None and r_index is None:
        return []

    # "l"이 "r"보다 먼저 나오는 경우
    # "l"이 리스트에 존재하고, "r"이 없거나, "l"이 "r"보다 먼저 등장하는 경우
    if l_index is not None and (r_index is None or l_index < r_index):
        return str_list[:l_index]

    # "r"이 "l"보다 먼저 나오는 경우
    if r_index is not None and (l_index is None or r_index < l_index):
        return str_list[r_index + 1:]

    return []


# Solution 2
def solution(str_list):
    for i in range(len(str_list)):
        if str_list[i]=='l': return str_list[:i]
        elif str_list[i]=='r': return str_list[i+1:]
    return []
