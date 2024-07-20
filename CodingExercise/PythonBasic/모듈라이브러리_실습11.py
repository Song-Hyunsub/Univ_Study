#CH11-13. [Pillow]윈도우에 이미지 표시하기

##################################################################
##이미지 파일을 윈도우에 보이도록

from PIL import Image, ImageTk #모듈에서 몇 개의 클래스를 포함시킵니다.

import tkinter as tk

window = tk.Tk( )
#1번을 해보세요!
canvas = tk.Canvas(window, width=500, height=500)
canvas.pack( )
#2번을 해보세요!
img = Image.open('lenna.png')

tk_img = ImageTk.PhotoImage(img)    #tk형식으로 이미지를 변환합니다.

canvas.create_image(250, 250, image=tk_img) #thinter의 캔버스에 이미지를 표시합니다.

window.mainloop( )
