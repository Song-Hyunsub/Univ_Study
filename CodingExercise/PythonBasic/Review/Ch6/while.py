customer = "토르"
index = 5
while index >= 1:
    print("{0}, 커피가 준비되었습니다. {1} 번 남았어요.".format(customer, index))
    index -= 1
    if index == 0:
        print("커피는 폐기처분되었습니다.")
'''
토르, 커피가 준비되었습니다. 5 번 남았어요.
토르, 커피가 준비되었습니다. 4 번 남았어요.
토르, 커피가 준비되었습니다. 3 번 남았어요.
토르, 커피가 준비되었습니다. 2 번 남았어요.
토르, 커피가 준비되었습니다. 1 번 남았어요.
커피는 폐기처분되었습니다.
'''

customer = "토르"
person = "Unknown"

while person != customer :
    print("{0}, 커피가 준비 되었습니다.".format(customer))
    person = input("이름이 어떻게 되세요? ")

'''
토르, 커피가 준비 되었습니다.
이름이 어떻게 되세요? [아이언맨]
토르, 커피가 준비 되었습니다.
이름이 어떻게 되세요? [아이엠 그루트]
토르, 커피가 준비 되었습니다.
이름이 어떻게 되세요? [토르]
'''