# WARNING!) 이 파일명을 pickle.py로 지정하지 말 것!

import pickle
profile_file = open("profile.pickle", "wb") # 인코딩 설정 필요 X
profile = {"이름":"박명수", "나이":30, "취미":["축구", "골프", "코딩"]}
print(profile)
pickle.dump(profile, profile_file)  # profile에 있는 정보를 file에 저장
profile_file.close()

# {'이름': '박명수', '나이': 30, '취미': ['축구', '골프', '코딩']}

profile_file = open("profile.pickle", "rb") # b는 바이너리를 의미
profile = pickle.load(profile_file) # file에 있는 정보를 profile에 불러오기
print(profile)
profile_file.close()

# {'이름': '박명수', '나이': 30, '취미': ['축구', '골프', '코딩']}

