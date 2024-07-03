def my_input(prompt=""):
    sys.stdout.write(prompt)
    sys.stdout.flush()
    return sys.stdin.readline().rstrip()

# 1번을 해보세요!
sec = int(input("측정 시간(초) 입력: "))
# 2번을 해보세요!
distance = 340 * sec
# 3번을 해보세요!
print("자신의 위치에서 번개가 친 장소까지의 거리=", distance, "m")
