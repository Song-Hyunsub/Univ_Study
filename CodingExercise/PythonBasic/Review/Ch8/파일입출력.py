score_file = open("score.txt", "w", encoding="utf8")
print("수학 : 0", file=score_file)
print("영어 : 50", file=score_file)
score_file.close()
# 출력은 X
# 디렉토리에 score.txt 생성, 파일 내용은 아래와 같음
# 수학 : 0
# 영어 : 50

score_file = open("score.txt", "a", encoding="utf8")
score_file.write("과학 : 80")
score_file.write("\n코딩 : 100")
# 디렉토리에 score.txt 생성, 파일 내용은 아래와 같음
# 수학 : 0
# 영어 : 50
# 과학 : 80
# 코딩 : 100

score_file = open("score.txt", "r", encoding="utf8")
print(score_file.read())
score_file.close()
# score.txt에 있는 모든 내용을 출력함!
# 수학 : 0
# 영어 : 50
# 과학 : 80
# 코딩 : 100

score_file = open("score.txt", "r", encoding="utf8")
while True:
    line = score_file.readline()
    if not line:
        break
    print(line, end="")
score_file.close()
# 수학 : 0
# 영어 : 50
# 과학 : 80
# 코딩 : 100

score_file = open("score.txt", "r", encoding="utf8")
lines = score_file.readlines() # list 형태로 저장
for line in lines:
    print(line, end="")
score_file.close()
# 수학 : 0
# 영어 : 50
# 과학 : 80
# 코딩 : 100