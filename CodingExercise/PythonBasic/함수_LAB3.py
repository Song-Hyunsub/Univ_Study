#CH08-Lab03 n각형을 그리는 함수 작성하기
'''
n_polygon() :
(1) 전진
(2) 회전: 외각 (360/n)
(3) (1), (2)를 n번 반복
'''


import turtle
t = turtle.Turtle()

#1번을 해보세요!
def n_polygon(n, length):
    for i in range(n):
        t.forward(length)
        t.left(360/n)

#2번을 해보세요!
for i in range(10):
    t.left(20)
    n_polygon(6, 100)
