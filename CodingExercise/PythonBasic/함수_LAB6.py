#CH08-Lab06 이차함수 그래프 그리기

import turtle 
t = turtle.Turtle()
t.shape("turtle")

#1번을 해보세요!
def f(x):
    return x**2+1


t.goto(200, 0)		#x축 그리기
t.goto(0, 0)
t.goto(0, 200)		#y축 그리기
t.goto(0, 0)

for x in range(150):
    t.goto(x, int(0.01*f(x)))
