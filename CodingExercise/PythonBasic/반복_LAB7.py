#CH06-Lab07 모든 약수 구하기
'''
(1) 사용자 입력 : n
(2) 약수 구하고 출력
    n : 횟수
'''


n = int(input("자연수 입력: "))
#1번을 해보세요!
for m in range(1, n+1):
    if n % m == 0 :
        print(m, end=" ")
