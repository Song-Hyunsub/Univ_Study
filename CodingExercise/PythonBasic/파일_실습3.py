##################################################################
##split( ) 함수를 이용하여 문자열을 분리

import csv
f = open('input.csv','r',encoding='utf-8-sig')
#1번을 해보세요!
data = csv.reader(f)
#2번을 해보세요!
for line in data:
    print(line)

f.close( )
