#CH11-08. [tkinter]위젯의 색상과 폰트 변경하기

##################################################################
##우리가 작성한 온도 변환기의 색상과 폰트를 약간 변경해서 좀 더 알록달록 꾸며보겠습니다.


from tkinter import *

def process( ):
    temperature = float(e1.get( )) 
    mytemp = (temperature-32)*5/9 
    e2.insert(0, str(mytemp))

window = Tk( )

l1 = Label(window , text="화씨", font='helvetica 16 italic')
l2 = Label(window, text="섭씨", font='helvetica 16 italic')
l1.grid(row=0, column=0)
l2.grid(row=1, column=0)
#2번을 해보세요!


e1 = Entry(window, bg="green", fg="yellow")
e2 = Entry(window, bg="green", fg="yellow")
e1.grid(row=0, column=1)
e2.grid(row=1, column=1)

b1 = Button(window, text="화씨->섭씨", command=process)
b2 = Button(window, text="섭씨->화씨" , font='helvetica 12')
b1.grid(row=2, column=0)
b2.grid(row=2, column=1)

window.mainloop( )
