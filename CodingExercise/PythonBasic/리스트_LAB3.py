#CH07-Lab03 스파이럴(spiral) 그리기

import turtle

t = turtle.Turtle()

#1번을 해보세요!
t.speed(0)
#2번을 해보세요!
t.width(3)

length = 10	    # 초기 선의 길이는 10으로 합니다.

#3번을 해보세요!
colors = ["red", "purple", "blue", "green", "yellow", "orange"]
#4번을 해보세요!
while length < 500:
    t.forward(length)              # length만큼 전진합니다. 
    t.pencolor(colors[length%6])   # 선의 색상을 변경합니다.
    t.right(89)                    # 89도 오른쪽으로 회전합니다.
    length += 5                    # 선의 길이를 5만큼 증가합니다.
