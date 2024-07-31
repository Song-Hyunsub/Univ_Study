from travel import *
trip_to = thailand.ThailandPackage()
trip_to.detail()

import inspect
import random
print(inspect.getfile(random))
print(inspect.getfile(thailand))

# Thailand 외부에서 모듈 호출
# [태국 패키지 3박 5일] 방콕, 파타야 여행 (야시장 투어) 50만원
# C:\Python312\Lib\random.py
# C:\Python312\Lib\travel\thailand.py