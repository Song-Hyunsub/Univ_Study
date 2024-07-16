#CH08-Lab04 클릭하는 곳에 사각형 그리기

'''
(1) 준비
(2) 감지 (이벤트)
(3) 사각형 그리기 : square()
(1) 좌표
(2) Window
S = turtle.Screen()
(3) click 이벤트
S.onscreenclick(함수)
=> 이때 함수 = 현재 좌표(x, y) 매개변수
'''

import turtle				
t = turtle.Turtle()

#1번을 해보세요!
def square(length):
    for i in range(4):
        t.forward(length)
        t.left(90)


#2번을 해보세요!
def drawit(x, y):
    t.penup()
    t.goto(x, y)
    t.pendown()
    t.begin_fill()
    t.color("green")
    square(50)
    t.end_fill()

    
s = turtle.Screen()		 
s.onscreenclick(drawit)	
