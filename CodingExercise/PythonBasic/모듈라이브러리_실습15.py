from elice_utils import EliceUtils
#1번을 해보세요!
from matplotlib import pyplot as plt

elice_utils = EliceUtils()

#이미 입력되어 있는 코드의 다양한 속성값들을 변경해 봅시다.
x = [1, 2, 3] 
y = [1, 2, 3] 

plt.plot(x, y, marker='o', linestyle="--", color='r') 
#2번을 해보세요!
plt.title("My Plot")
plt.xlabel("X") 
plt.ylabel("Y")
#3번을 해보세요!
plt.legend(['test'])
plt.show()

plt.savefig("plot.png")
elice_utils.send_image("plot.png")
