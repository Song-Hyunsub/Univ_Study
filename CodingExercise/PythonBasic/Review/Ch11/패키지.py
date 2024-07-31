import travel.thailand  # import 뒤는 모듈이나 패키지만 가능!!
trip_to = travel.thailand.ThailandPackage()
trip_to.detail()
# [태국 패키지 3박 5일] 방콕, 파타야 여행 (야시장 투어) 50만원

from travel.thailand import ThailandPackage
trip_to = ThailandPackage()
trip_to.detail()
# [태국 패키지 3박 5일] 방콕, 파타야 여행 (야시장 투어) 50만원

from travel import vietnam
trip_to = vietnam.VietnamPackage()
trip_to.detail()
# [베트남 패키지 3박 5일] 다낭 효도 여행 60만원

# Thailand 외부에서 모듈 호출

