#CH11-09. [tkinter]윈도우 창 메뉴 만들기

##################################################################
##윈도우 창의 메뉴를 생성

from tkinter import *

def open( ):		#파일 메뉴에서 "열기"를 선택하였을 때 호출되는 함수입니다.
    pass

def quit( ):		#파일 메뉴에서 "종료"를 선택하였을 때 호출되는 함수입니다.
    window.quit( )

window = Tk( ) 	# 윈도우를 생성합니다.
#1번을 해보세요!
menubar = Menu(window)
#2번을 해보세요!
filemenu = Menu(menubar)
#3번을 해보세요!
filemenu.add_command(label="열기", command=open)
#4번을 해보세요!
filemenu.add_command(label="종료", command=quit)
#5번을 해보세요!
menubar.add_cascade(label="파일", menu=filemenu)
window.config(menu=menubar) # 윈도우 창의 메뉴로 menubar를 지정합니다.
window.mainloop( )
