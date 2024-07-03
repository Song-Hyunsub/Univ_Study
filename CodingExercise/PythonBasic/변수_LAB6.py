# 1번을 해보세요!
money = int(input("투입한 돈: "))
price = int(input("물건 가격: "))

# 2번을 해보세요!
change = money - price

# 3번을 해보세요!
print("거스름돈:", change)
count500 = change // 500
count100 = (change % 500) // 100

# 4번을 해보세요!
print("500원 동전의 개수:", count500)
print("100원 동전의 개수:", count100)
