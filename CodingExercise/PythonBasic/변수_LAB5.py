import time

# time.time()을 사용하여 변수 fseconds에 저장
fseconds = time.time()
# 전체 초를 계산하여 변수 total_sec에 정수형으로 저장
total_sec = int(fseconds)
# 전체 분을 계산하여 변수 total_min에 저장
total_min = total_sec // 60
# 현재 분을 계산하여 변수 minute에 저장
minute = total_min % 60
# 전체 시를 계산하여 변수 total_hour에 저장
total_hour = total_min // 60
# 현재 시를 계산하여 한국 시간을 계산한 후 변수 hour에 저장하고 출력
hour = (total_hour + 9) % 24    # 현재 시를 계산한 후 한국 시간을 더함
print("현재 한국 시간:", str(hour)+"시"+str(minute)+"분", "#시간은 항상 바뀜")
