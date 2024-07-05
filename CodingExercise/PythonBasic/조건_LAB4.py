import turtle			# 터틀 그래픽 모듈을 불러옴
import random 			# 난수 모듈을 불러옴
screen = turtle.Screen()
image1 = "front.GIF"
image2 = "back.GIF"
screen.addshape(image1)     # 이미지를 추가
screen.addshape(image2)     # 이미지를 추가
t1 = turtle.Turtle()		# 터틀 생성
#1번을 해보세요!
coin = random.randint(0, 1)
#2번을 해보세요!
if coin == 0 :
    t1.shape(image1)
    t1.stamp()
else :
    t1.shape(image2)
    t1.stamp()
