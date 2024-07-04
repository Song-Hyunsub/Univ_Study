# (1) turtle 그래픡 불러오기
# (2) '이름' 입력창
# (3) 입력값, 인사 메시지 출력
# (4) 사각형 그리기

# 1번을 해보세요!
import turtle
t = turtle.Turtle()
t.shape("turtle")
t.speed(1)

# 2번을 해보세요!
s = turtle.textinput("", "이름을 입력하시오: ")
# 3번을 해보세요!
t.write("안녕하세요? " + s + "씨, 터틀 인사드립니다.")
# 4번을 해보세요!
t.left(90)
t.forward(100)
t.left(90)
t.forward(100)
t.left(90)
t.forward(100)
t.left(90)
t.forward(100)
