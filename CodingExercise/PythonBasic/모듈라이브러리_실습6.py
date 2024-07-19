##################################################################
##버튼을 클릭하면 화씨 엔트리에 입력된 화씨온도가 섭씨온도로 계산
from tkinter import *

def process( ):
    temperature = float(e1.get( )) #화씨 엔트리인 e1에서 입력된 값을 가져오려면 get()을 사용하면 됩니다.
    mytemp = (temperature-32)*5/9   #화씨 온도를 섭씨온도로 변환하여 mytemp에 저장합니다.
    #1번을 해보세요!
    e2.insert(0, str(mytemp))
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
