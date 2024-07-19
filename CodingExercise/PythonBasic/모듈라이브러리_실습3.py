#CH11-05 [tkinter]윈도우 배치 관리자

##################################################################
##절대 위치 배치 관리자

from tkinter import *
window = Tk( )

w = Label(window, text="박스 #1", bg="red", fg="white")
#1번을 해보세요!
w.place(x=0, y=0)
w = Label(window, text="박스 #2", bg="green", fg="black")
#2번을 해보세요!
w.place(x=20, y=20)
w = Label(window, text="박스 #3", bg="blue", fg="white")
#3번을 해보세요!
w.place(x=40, y=40)

window.mainloop( )
