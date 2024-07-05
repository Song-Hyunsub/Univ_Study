
#1번을 해보세요!
a = input("1번 전지가 있습니까? (Y/N) ")

#2번을 해보세요!
b = input("2번 전지가 있습니까? (Y/N) ")

#3번을 해보세요!
if a.upper()=='Y' and b.upper()=='Y':
    print("직렬연결 : 전구에 불이 켜집니다.")
else :
    print("직렬연결 : 전구에 불이 꺼집니다.")

if a.upper()=='Y' or b.upper()=='Y':
    print("병렬연결 : 전구에 불이 켜집니다.")
else :
    print("병렬연결 : 전구에 불이 꺼집니다.")
