'''
1. 무작위로 숫자를 추출하여 저장

2. 사용자로부터 숫자 입력

3. 사용자가 입력한 숫자와 무작위로 추출한 숫자가 같은지 비교

4. 만약 같으면 시도횟수 출력 후 프로그램 종료

5. 만약 다르면 게임을 계속 반복한다.
'''


import random

tries = 0		# 게임 시도 횟수를 저장합니다.
guess = 0		# 사용자가 입력한 수를 저장합니다.
answer = random.randint(1, 100)	# 1~100 사이의 임의의 수를 저장합니다.


print("1부터 100 사이의 숫자를 맞추시오")
guess = int(input("숫자를 입력하시오: "))

while guess != answer:
    tries = tries + 1
    if guess < answer:
        print("낮음!")
    elif guess > answer:
        print("높음!")
    guess = int(input("숫자를 입력하시오: "))
    
if guess == answer:
    print("축하합니다. 시도횟수=", tries)
else:
    print("정답은 ", answer)
