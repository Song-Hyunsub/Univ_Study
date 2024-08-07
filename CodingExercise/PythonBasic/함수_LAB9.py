#CH08-Lab09 프렉탈 나무 그리기

import turtle

#1번을 해보세요!
def tree(length):
    if length > 5:                		# length가 5보다 크면 순환호출을 한다. 
        t.forward(length)               # 거북이가 length 만큼 선을 그린다. 
        t.right(20)                		# 오른쪽으로 20도 회전한다. 
        tree(length-15)                 # (length-15)를 인수로 tree()를 순환 호출한다. 
        t.left(40)            			# 왼쪽으로 40도 회전한다. 
        tree(length-15)                	# (length-15)를 인수로 tree()를 순환 호출한다. 
        t.right(20)            			# 오른쪽으로 20도 회전한다. 
        t.backward(length)              # length만큼 뒤로 간다. 제자리로 돌아온다. 

t = turtle.Turtle()
t.left(90)				# 거북이가 위쪽을 향하게 한다. 

t.color("green")			# 선의 색을 녹색으로 한다. 
t.speed(1)				# 속도를 제일 느리게 한다.
t.goto(0,-100)          #트리 시작 위치 조절
tree(90)


'''
ex) tree(30) 실행 이해하기

tree(30)
    forward(30)
    right(20)
    tree(15)
        forward(15)
        right(20)
        tree(0) #
        left(40)
        tree(0) #
        right(20)
        backward(15)
    left(40)
    tree(15)
        forward(15)
        right(20)
        tree(0) #
        left(40)
        tree(0) #
        right(20)
        backward(15)
    right(20)
    backward(30)
        
'''
