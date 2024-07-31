import theater_module
theater_module.price(3)  # 3명이서 영화보러 갔을 때 가격
theater_module.price_morning(4)  # 4명이서 조조할인 영화보러 갔을 때 가격
theater_module.price_soldier(5)  # 5명의 군인이 영화보러 갔을 때 가격
# 3명 가격은 30000원 입니다.
# 4명 조조 할인 가격은 24000원 입니다.
# 5명 군인 할인 가격은 20000원 입니다.

import theater_module as mv
mv.price(3)
mv.price_morning(4)
mv.price_soldier(5)
# 3명 가격은 30000원 입니다.
# 4명 조조 할인 가격은 24000원 입니다.
# 5명 군인 할인 가격은 20000원 입니다.

from theater_module import *
price(3)
price_morning(4)
price_soldier(5)
# 3명 가격은 30000원 입니다.
# 4명 조조 할인 가격은 24000원 입니다.
# 5명 군인 할인 가격은 20000원 입니다.

from theater_module import price, price_morning
price(5)
price_morning(6)
# price_soldier(7)

# 5명 가격은 50000원 입니다.
# 6명 조조 할인 가격은 36000원 입니다.

from theater_module import price_soldier as price
price(5)
# 5명 군인 할인 가격은 20000원 입니다.
