#1번을 해보세요!
import turtle
t = turtle.Turtle()
t.shape("turtle")

#2번을 해보세요!
t.penup()
t.goto(100, 100)
t.write("입력된 정수는 양의 정수입니다.")
t.goto(100, 0)
t.write("입력된 정수는 0입니다.")
t.goto(100, -100)
t.write("입력된 정수는 음의 정수입니다.")

#3번을 해보세요!
t.goto(0, 0)
t.pendown()
s = turtle.textinput("","숫자를 입력하시오: ")
n = int(s)

#4번을 해보세요!
if n>0 :
    t.goto(100, 100)
elif n==0 :
    t.goto(100, 0)
else :
    t.goto(100, -100)
