# glob : 경로 내의 폴더 / 파일 목록 조회 (윈도우 dir)
import glob
print(glob.glob("*.py")) # 확장자가 py인 모든 파일

# os : 운영체제에서 제공하는 기본 기능
import os
print(os.getcwd())  # 현재 디렉토리
folder = "sample_dir"

if os.path.exists(folder):
    print("이미 존재하는 폴더입니다.")
    os.rmdir(folder)
    print(folder, "폴더를 삭제하였습니다.")
else:
    os.makedirs(folder)  # 폴더 생성
    print(folder, "폴더를 생성하였습니다.")

# ['pip_install.py', 'theater_module.py', '__all__.py', '내장함수.py', '모듈.py', '외장함수.py', '패키지&모듈위치.py', '패키지.py']
# C:\Users\s...\OneDrive\바탕 화면\OOO\파이썬\ch11
# sample_dir 폴더를 생성하였습니다.

# time : 시간 관련 함수
import time
print(time.localtime())
print(time.strftime("%Y-%m-%d %H:%M:%S"))
# time.struct_time(tm_year=2024, tm_mon=7, tm_mday=31, tm_hour=20, tm_min=59, tm_sec=21, tm_wday=2, tm_yday=213, tm_isdst=0)
# 2024-07-31 20:59:21

import datetime
print("오늘 날짜는", datetime.date.today())
# 오늘 날짜는 2024-07-31

# timedelta : 두 날짜 사이의 간격
today = datetime.date.today() # 오늘 날짜 저장
td = datetime.date.today() # 오늘 날짜 저장
td = datetime.timedelta(days=100) # 100일 저장
print("우리가 만난지 100일은", today + td) # 오늘부터 100일 후
# 우리가 만난지 100일은 2024-11-08