temp_list = [0, 10, 20, 30] # 기온 리스트
vapor_list = [4.8, 9.4, 17.3, 30.4] # 포화수증기량 리스트
# 위 리스트는 입력받은 온도에 해당하는 temp_list의 인덱스 번호를 찾아 포화수증기량을 찾는데 사용합니다.

# 1번을 해보세요!
vapor = float(input("현재 수증기량 입력: "))
# 2번을 해보세요!
temp = int(input("현재 온도 입력: "))
# 3번을 해보세요!
if temp in temp_list :
    humidity = (vapor / vapor_list[temp_list.index(temp)]) * 100
    print("현재 습도는", humidity, "% 입니다.")

print("프로그램을 종료합니다.")
