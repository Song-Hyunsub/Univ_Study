'''
while 반복:
    (1) 범인 배치(랜덤)
    (2) 방 번호 입력받기
    (3) 범인 유무 확인(방 번호)
        - 없다
            10점 감점
            (1), (2), (3)
        - 있다(일치)
            100점 추가
            반복 끝(게임 종료)

게임
(1) 점수 저장 : score
(2) 방번호  - 범인이 숨는 방 : room
            - 사용자가 입력한 방 : n
'''

#CH06-Lab05 범인 찾기 게임

import random
score = 0

while True :
    room = random.randint(1, 3)
    n = int(input("방 번호를 입력하세요: "))
    if n == room :
        print("범인 체포!")
        score += 100
        break
    elif n > 3 :
        print(n, "번 방은 없습니다.")
    else :
        print("범인이 없습니다.")
        score -= 10
    
print("게임 종료")
print("점수: ", score, "점")
