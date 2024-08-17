def solution(myString, pat):
    count = 0
    start = 0
    
    while True:
        # pat이 myString에서 나타나는 위치를 찾습니다.
        start = myString.find(pat, start)
        
        # pat이 더 이상 나타나지 않으면 종료합니다.
        if start == -1:
            break
        
        # pat을 찾은 경우 카운트를 증가시킵니다.
        count += 1
        
        # 다음 검색을 위해 시작 위치를 한 칸 이동시킵니다.
        start += 1
    
    return count