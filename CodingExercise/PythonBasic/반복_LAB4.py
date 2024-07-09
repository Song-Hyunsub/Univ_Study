#CH06-Lab04 랜덤 워크 시뮬레이션

import turtle
import random
t = turtle.Turtle( )
t.shape("turtle")

#1번을 해보세요!
for i in range(30):
    #2번을 해보세요!
    length = random.randint(1, 100)
    t.forward(length)
    angle = random.randint(-180, 180)
    t.right(angle)
