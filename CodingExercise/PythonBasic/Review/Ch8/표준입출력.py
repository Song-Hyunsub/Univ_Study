print("Python", "Java", "JavaScript", sep=" vs ")
# Python vs Java vs JavaScript

print("Python", "Java", sep=",", end="?")
print("무엇이 더 재밌을까요?")
# Python,Java?무엇이 더 재밌을까요?

import sys
print("Python", "Java", file=sys.stdout)
# Python Java
print("Python", "Java", file=sys.stderr)
# Python Java

scores = {"수학":0, "영어":50, "코딩":100}
for subject, score in scores.items():
    print(subject.ljust(8), str(score).rjust(4), sep=":") 
    # .ljust(8) 총 8칸 확보하여 왼쪽 정렬
    # .rjust(4) 총 4칸 확보하여 오른쪽 정렬
# 수학      :   0
# 영어      :  50
# 코딩      : 100

# 은행 대기순번표
# 001, 002, 003, ...
for num in range(1, 21):
    print("대기번호 : " + str(num).zfill(3))
    # .zfill(3) => 총 3칸을 확보하여 오른쪽 정렬을 함 (빈 공간은 0으로)
# 대기번호 : 001
# 대기번호 : 002
# ...
# 대기번호 : 020

answer = input("아무 값이나 입력하세요 : ")
print("입력하신 값은 " + answer + "입니다.")
# 아무 값이나 입력하세요 : 10
# 아무 값이나 입력하세요 : abc
print(type(answer)) # 숫자로 입력해도 문자열 형식을 저장됨
