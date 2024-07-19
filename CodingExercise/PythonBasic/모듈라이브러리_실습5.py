##################################################################
##버튼을 클릭하여 섭씨의 엔트리에 ‘100’이 보여지는 이벤트 처리
from tkinter import *
#1번을 해보세요!
def process():
    e2.insert(0, "100")

window  = Tk( )

l1 = Label(window , text="화씨")  #윈도우에 텍스트를 표시하려면 Label 위젯이 필요합니다.
l2 = Label(window, text="섭씨")
l1.grid(row=0, column=0)
l2.grid(row=1, column=0)

e1 = Entry(window)      #윈도우에서 사용자로부터 텍스트를 입력받기 위해서는 Entry 위젯이 필요합니다.
e2 = Entry(window)
e1.grid(row=0, column=1)
e2.grid(row=1, column=1)

b1 = Button(window, text="화씨->섭씨", command=process)# 2번을 해보세요!
b2 = Button(window, text="섭씨->화씨")
b1.grid(row=2, column=0)
b2.grid(row=2, column=1)

window.mainloop( )
