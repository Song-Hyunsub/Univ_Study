class Unit:
    def __init__(self):
        print("Unit 생성자")
    
class Flyable:
    def __init__(self):
        print("Flyable 생성자")

class FlyableUnit(Flyable, Unit):
    def __init__(self):
        # super().__init__()
        Unit.__init__(self)
        Flyable.__init__(self)

# 드랍쉽
dropship = FlyableUnit()

# 두 개 이상의 부모 클래스를 다중 상속받을 때 super는 하나만 실행된다.
# super로 적용 => "Flyable 생성자" (Flyable 함수 부분만 실행됨!)
# Unit, Flyable 직접 적용 => "Unit 생성자 \nFlyable 생성자"



