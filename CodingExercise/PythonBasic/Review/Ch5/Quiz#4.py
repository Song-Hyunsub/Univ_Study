from random import *
users = range(1, 21) # 1부터 20까지 수 생성, type이 range
users = list(users)  # type을 range에서 list로 변경

print(users)
shuffle(users)
print(users)

winners = sample(users, 4)  # 4명 중 한 명은 치킨, 3명은 커피

print(" -- 당첨자 발표 -- ")
print("치킨 당첨자 : {0}".format(winners[0]))
print("커피 당첨자 : {0}".format(winners[1:]))
print(" -- 축하합니다 -- ")