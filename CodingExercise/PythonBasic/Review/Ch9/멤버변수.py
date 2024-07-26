class Unit:
    def __init__(self, name, hp, damage):
        self.name = name
        self.hp = hp
        self.damage = damage
        print("{0} 유닛이 생성되었습니다.".format(self.name))
        print("체력 {0}, 공격력 {1}".format(self.hp, self.damage))

# 레이스 : 공중 유닛, 비행기. 클로킹 (상대방에게 보이지 않음)
wraith1 = Unit("레이스", 80, 5)
print("유닛 이름 : {0}, 공격력 : {1}".format(wraith1.name, wraith1.damage))
# 레이스 유닛이 생성되었습니다.
# 체력 80, 공격력 5
# 유닛 이름 : 레이스, 공격력 : 5


# 마인드 컨트롤 : 상대방 유닛을 내 것으로 만드는 것 (빼앗음)
wraith2 = Unit("레이스", 80, 5)
wraith2.clocking = True
if wraith2.clocking == True:
    print("{0} 는 현재 클로킹 상태입니다.".format(wraith2.name))
# 클로킹 : 어떤 객체에 추가로 변수를 외부에서 만들어서 쓸 수 있음
# 레이스 유닛이 생성되었습니다.
# 체력 80, 공격력 5
# 레이스 는 현재 클로킹 상태입니다.