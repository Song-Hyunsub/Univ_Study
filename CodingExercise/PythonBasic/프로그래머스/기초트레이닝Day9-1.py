def solution(intStrs, k, s, l):
    result = []
    for num_str in intStrs:
        substring = num_str[s:s+l]  # 잘라내기
        value = int(substring)  # 정수로 변환
        if value > k:
            result.append(value)
    return result
