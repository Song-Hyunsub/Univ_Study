gun = 10 # 전역 변수

def checkpoint(soldiers): # 경계근무
    # gun = 20  => 지역변수
    global gun # 전역 공간에 있는 gun 사용
    gun = gun - soldiers
    print("[함수 내] 남은 총 : {0}".format(gun))

def checkpoint_ret(gun, soldiers):
    gun = gun - soldiers
    print("[함수 내] 남은 총 : {0}".format(gun))
    return gun  # 전역변수를 사용하게 해줌

print("전체 총 : {0}".format(gun))
# checkpoint(2) # 2명이 경계 근무 나감
gun = checkpoint_ret(gun, 2)
print("남은 총 : {0}".format(gun))

# 전체 총 : 10
# [함수 내] 남은 총 : 8
# 남은 총 : 8