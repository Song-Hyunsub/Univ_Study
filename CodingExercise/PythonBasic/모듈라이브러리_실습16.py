#CH11-18. [Matplotlib]강수량 그래프 만들기

##################################################################
##강수량을 그래프


from elice_utils import EliceUtils
elice_utils = EliceUtils()


from matplotlib import pyplot as plt #맷플롯립을 사용하기 위해 matplotlib.pyplot을 import 합니다.
import csv # CSV 파일을 사용하기 위해 모듈을 import 합니다.
from matplotlib import font_manager, rc

font_name = font_manager.FontProperties(fname="NanumGothic.ttf").get_name( )
rc('font', family=font_name) #폰트를 한글 지원이 가능한 것으로 바꾸는 코드입니다. 글꼴은 '나눔고딕'체 입니다.

#1번을 해보세요!
infile = open('weather_input.csv')
#2번을 해보세요!
data = csv.reader(infile)
x = [ ]
y = [ ]

for line in data:
    #3번을 해보세요!
    x.append(line[0])
    y.append(float(line[2]))

#4번을 해보세요!
plt.plot(x, y, marker='o')

plt.title("2009년 대관령 월평균 강수량") 
plt.xlabel("월") 
plt.ylabel("강수량(mm)") 
plt.savefig("plot.png")
elice_utils.send_image("plot.png")
infile.close( )
