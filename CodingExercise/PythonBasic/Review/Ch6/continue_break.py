absent = [2, 5] # 결석
no_book = [7]
for student in range(1, 11):  # 1,2,3,...,10
    if student in absent:
        continue    # 스킵하고 다음 번호로 감
    elif student in no_book:
        print("오늘 수업 여기까지. {0}는 교무실로 따라와".format(student))
        break
    print("{0}, 책을 읽어봐".format(student))

'''
1, 책을 읽어봐
3, 책을 읽어봐
4, 책을 읽어봐
6, 책을 읽어봐
오늘 수업 여기까지. 7는 교무실로 따라와
'''