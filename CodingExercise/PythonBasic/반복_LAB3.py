#CH06-Lab03 n각형 그리기

import turtle
t = turtle.Turtle()
t.shape("turtle")
#1번을 해보세요!
s = turtle.textinput("", "몇 각형을 원하시나요?")
n = int(s)

#2번을 해보세요!
for i in range(n):
    t.forward(100)
    t.left(360/n)
