''' [Solution 1]
while True:
    r1, r2, r3 = map(int, input().split())
    if r1 > r2 and r1 > r3 and r3*r3 + r2*r2 == r1*r1:
        print("right")
    elif r2 > r1 and r2 > r3 and r1*r1 + r3*r3 == r2*r2:
        print("right")
    elif r3 > r1 and r3 > r2 and r1*r1 + r2*r2 == r3*r3:
        print("right")
    elif r1==r2==r3==0:
        break
    else:
        print("wrong")
'''

# [Solution 2]
while True:
    numbers = list(map(int, input().split()))
    if sum(numbers)==0:
        break
    MaxN = max(numbers)
    numbers.remove(MaxN)    # 가장 큰 수를 리스트에서 삭제
    if numbers[0]**2 + numbers[1]**2 == MaxN**2:
        print("right")
    else:
        print("wrong")
