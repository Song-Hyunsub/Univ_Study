#1번을 해보세요!
a = float(input("a값 입력: "))
#2번을 해보세요!
b = float(input("b값 입력: "))
#3번을 해보세요!
c = float(input("c값 입력: "))
#4번을 해보세요!
D = b**2 - 4 * a * c
#5번을 해보세요!
if D>0 :
    print("방정식은 서로 다른 두 실근입니다.")
elif D==0 :
    print("방정식은 서로 같은 두 실근(중근)입니다.")
else :
    print("방정식은 서로 다른 두 허근입니다.")
