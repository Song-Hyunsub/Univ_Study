def solution(myString, pat):
    # myString에서 A를 B로, B를 A로 바꿉니다.
    swapped = myString.replace('A', 'X').replace('B', 'A').replace('X', 'B')
    
    # pat이 바뀐 문자열에 포함되어 있는지 확인합니다.
    if pat in swapped:
        return 1
    else:
        return 0
