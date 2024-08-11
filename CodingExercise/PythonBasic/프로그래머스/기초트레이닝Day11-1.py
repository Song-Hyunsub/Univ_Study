def solution(my_string):
    result = [0] * 52  # 알파벳 대소문자 총 52개를 리스트로 저장
    for char in my_string:
        if 'A' <= char <= 'Z':
            index = ord(char) - ord('A')
            result[index] += 1
        elif 'a'<= char <= 'z':
            index = ord(char) - ord('a') + 26
            result[index] += 1
    return result
