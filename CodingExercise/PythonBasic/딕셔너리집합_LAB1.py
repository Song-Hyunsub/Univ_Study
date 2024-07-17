#CH09-Lab01 가위, 바위, 보 게임

import random

def match(c, m):
    if c == m :
        return '비겼습니다.'
    elif match_table[c] == m:
        return '졌습니다.'
    else:
        return '이겼습니다.'
#1번을 해보세요!
rps_dic = {1:'가위', 2:'바위', 3:'보'}
#2번을 해보세요!
match_table = {'가위':'보', '바위':'가위', '보':'바위'}

computer = rps_dic[random.randint(1,3)] 
mine = input('가위, 바위, 보 입력: ')
result = match(computer, mine)
print(result)
