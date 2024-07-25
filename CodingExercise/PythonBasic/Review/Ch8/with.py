import pickle
with open("profile.pickle", "rb") as profile_file:
    print(pickle.load(profile_file))
# with문을 탈출하면 자동으로 파일이 종료됨

# {'이름': '박명수', '나이': 30, '취미': ['축구', '골프', '코딩']}

with open("study.txt", "w", encoding="utf8") as study_file:
     study_file.write("파이썬을 열심히 공부하고 있어요")
print(study_file.read())

#with open("study.txt", "r", encoding="utf8") as study_file:
#    print(study_file.read())

# 파이썬을 열심히 공부하고 있어요