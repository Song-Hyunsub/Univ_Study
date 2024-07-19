##################################################################
##tkinter를 사용하여 간단히 빈 윈도우 창 띄우기

from tkinter import *

window=Tk( )

#1번을 해보세요!
button = Button(window, text = "클릭하세요!")
button.pack() #위젯을 최대한 압축하여 윈도우에 표시하라는 의미입니다.

window.mainloop( )
