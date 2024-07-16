#1번을 해보세요!
def fact(n):
    if n==1:
        return 1    #입력받은 값이 1이라면 1을 반환한다.
    else :
        return n * fact(n-1)    #그렇지 않다면 입력받은 값 * 함수(입력받은값 - 1)을 반환한다.
    

n = int(input("정수를 입력하시오: "))
f = fact(n)
print(n, "!은", f, "이다.")
