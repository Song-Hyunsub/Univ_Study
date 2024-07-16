#CH08-Lab07 테세우스 터틀 미로 탈출 게임

'''
(1) 터틀 준비
(2) 미로 그리기
(3) 키보드 이벤트
(4) 키에 대응되는 함수 처리
'''

import turtle

#1번을 해보세요!
def draw_maze(x, y):

    for i in range(2):
        t.penup()

        if i==1:
            t.goto(x+100, y+100)
        else :
            t.goto(x, y)
        t.pendown()
        t.forward(300)
        t.right(90)
        t.forward(300)
        t.left(90)
        t.forward(300)


def turn_left(): #왼쪽으로 전진하는 함수
    t.left(10)
    t.forward(10)

def turn_right(): #오른쪽으로 전진하는 함수
    t.right(10)
    t.forward(10)

t = turtle.Turtle()

t.shape("turtle")
t.speed(0)

draw_maze(-300, 200)
screen = turtle.Screen()
screen.onkey(turn_left, "Left")
screen.onkey(turn_right, "Right")

t.penup();
t.goto(-300, 250)
t.pendown();
screen.listen()
screen.mainloop() # 사용자가 터틀 그래픽 창을 종료할 때까지 프로그램을 실행하면서 마우스나 키보드 입력을 계속 처리하도록 하는 함수입니다.
