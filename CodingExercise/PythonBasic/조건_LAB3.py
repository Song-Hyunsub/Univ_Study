import random				# 난수 모듈을 불러옴

print("주민등록번호의 성별 정보 번호를 생성합니다.")
#1번을 해보세요!
gender = random.randrange(4) # 0~3

print("생성번호: " + str(gender))	   	# 문자와 숫자 연결하여 출력할 때를 주의

#2번을 해보세요!
if gender==1 or gender==3 :
    print("남성입니다.")
else :
    print("여성입니다.")

print("프로그램을 종료합니다.")
