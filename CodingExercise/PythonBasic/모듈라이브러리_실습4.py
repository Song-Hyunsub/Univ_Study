##################################################################
##격자 배치 관리자(grid geometry manager)

from tkinter import *

window  = Tk( )

l1 = Label(window , text="화씨")
l2 = Label(window, text="섭씨")
#1번을 해보세요!
l1.grid(row=0, column=0)
#2번을 해보세요!
l2.grid(row=1, column=0)

e1 = Entry(window)
e2 = Entry(window)
#3번을 해보세요!
e1.grid(row=0, column=1)
#4번을 해보세요!
e2.grid(row=1, column=1)

b1 = Button(window, text="화씨->섭씨")
b2 = Button(window, text="섭씨->화씨")
#5번을 해보세요!
b1.grid(row=2, column=0)
#6번을 해보세요!
b2.grid(row=2, column=1)

window.mainloop( )
