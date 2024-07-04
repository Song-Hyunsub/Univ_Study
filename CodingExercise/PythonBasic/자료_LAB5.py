#1번을 해보세요!
import time
now = time.time()  # 1970.1.1 ~ 현재(초)
thisYear = int(1970 + now//(365 * 24 * 3600))  # 1970 + now 동안 지난 연도 수

print("올해는 " + str(thisYear)+"년입니다.")

#2번을 해보세요!
age = int(input("당신의 나이를 입력하세요: "))

#3번을 해보세요!
print("2050년에는 %s살이군요" %str(age + 2050-thisYear))
