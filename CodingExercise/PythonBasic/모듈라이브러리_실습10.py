#CH11-10 [tkinter]MyPaint 프로그램

##################################################################
##MyPaint 프로그램

from tkinter import *

def paint(event):                               #이벤트 핸들러는 event라는 하나의 파라미터를 갖습니다.
        x1, y1 = ( event.x-1 ), ( event.y+1 )
        x2, y2 = ( event.x-1 ), ( event.y+1 )
        canvas.create_oval( x1, y1, x2, y2)     # 캔버스 위젯에서 타원이 그려져 점처럼 모여 선이 됩니다.

window = Tk( )
#1번을 해보세요!
canvas = Canvas(window)
#2번을 해보세요!
canvas.pack()
#3번을 해보세요!
canvas.bind("<B1-Motion>", paint)
window.mainloop( )
