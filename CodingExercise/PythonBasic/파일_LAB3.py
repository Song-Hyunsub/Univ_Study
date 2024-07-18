#CH10-Lab03 평균 강수량 통계

import csv

# 입력 파일 출력 파일 열기
infile = open("weather_input.csv", "r")
data = csv.reader(infile)
#1번을 해보세요!
count = 0
sum = 0
#2번을 해보세요!
for line in data:
    count += 1
    sum += float(line[2])


print("강원도 2009년 01월 부터 2019년 12월까지의 총 강수량: ", sum)
print("강원도 2009년 01월 부터 2019년 12월까지의 평균 강수량: ", sum / count)
infile.close( )
