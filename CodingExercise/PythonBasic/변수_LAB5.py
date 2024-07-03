import time

# 1번을 해보세요!
fseconds = time.time()
# 2번을 해보세요!
total_sec = int(fseconds)
# 3번을 해보세요!
total_min = total_sec // 60
# 4번을 해보세요!
minute = total_min % 60
# 5번을 해보세요!
total_hour = total_min // 60
# 6번을 해보세요!
hour = (total_hour + 9) % 24    # 현재 시를 계산한 후 한국 시간을 더함
print("현재 한국 시간:", str(hour)+"시"+str(minute)+"분", "#시간은 항상 바뀜")
