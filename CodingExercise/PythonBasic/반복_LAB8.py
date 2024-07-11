'''
(1) 입력: n, m
(2) 최대공약수
(3) 최대공약수 출력 or 서로소
(a, b) = (b, r) = (n, m)
a>b>r

if n<m:
    n, m = m, n
while m>0:
    r=n%m
    n, m = m, r
'''

n = int(input("정수1 입력: "))
m = int(input("정수2 입력: "))

#1번을 해보세요!
if n<m:
    n, m = m, n

#2번을 해보세요!
while m > 0:
    r = n % m
    n, m = m, r

#3번을 해보세요!       
if n!=1:
    print("두 수의 최대공약수: ", n)
else :
    print("두 수는 서로소이다.")

