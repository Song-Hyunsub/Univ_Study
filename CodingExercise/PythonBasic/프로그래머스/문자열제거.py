# Solve[1] 
def solution(my_string):
    vowels = "aeiou"
    # 문자열을 리스트로 변환
    char_list = list(my_string)
    
    # 모음만 찾아서 실제로 리스트에서 제거
    for vowel in vowels:
        while vowel in char_list:
            char_list.remove(vowel)
    
    # 리스트를 다시 문자열로 합쳐서 반환
    return "".join(char_list)

# Solve[2]
def solution(my_string):
    vowels = "aeiou"
    return ''.join(char for char in my_string if char not in vowels)
