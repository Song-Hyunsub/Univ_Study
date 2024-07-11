#CH06-Lab06 몬드리안 터틀

import turtle, random   #터틀 그래픽과 랜덤 모듈을 사용하기 위해 import를 한 번에 해 줄 수 있음.

t = turtle.Turtle( )
t.pensize(3)

#1번을 해보세요!
for i in range(20):
    #2번을 해보세요!
    r = random.random() # 0.0에서 1.0 사이의 난수 값 생성
    g = random.random()
    b = random.random()

    #3번을 해보세요!
    x = random.randint(-300, 300)  # -300에서 300 사이의 난수 값 생성
    y = random.randint(-300, 300)
    length = random.randint(10, 300)
        
    #4번을 해보세요!
    t.penup()
    t.goto(x, y)
    t.pendown()
    t.color(r, g, b)
         
    #5번을 해보세요!
    t.begin_fill()
    # 사각형 그리기
    for j in range(4):
        t.forward(length)
        t.right(90)
    t.end_fill()
