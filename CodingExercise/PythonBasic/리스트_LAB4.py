import turtle
t = turtle.Turtle( )
#1번을 해보세요!
positions = [[0,0,"green"], [-120,0,"yellow"], [60, 60, "red"], [-60,60,"black"], [-180, 60, "blue"]]

t.pensize(5)

#2번을 해보세요!
for x, y, c in positions :
    t.penup()
    t.goto(x, y)
    t.pendown()
    t.color(c)
    t.circle(60)
