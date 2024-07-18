# 입력 파일 출력 파일 열기
infile = open("input.txt", "r")

word_dic = {}
total_count = 0

for line in infile: #리스트 형태로 저장하여 단어별로 분리하는 for문
    line = line.rstrip( )
    word_list = line.split( )
	#1번을 해보세요!
    for word in word_list:
        word = word.lower()                 #소문자로 변경
        word = word.strip(',')              #콤마 삭제
        word = word.strip('.')              #마침표 삭제
        #2번을 해보세요!
        if word in word_dic:
            word_dic[word] += 1
            total_count += 1
        else:
            word_dic[word] = 1
            total_count += 1

#for문을 이용해 출력하고 총 단어수를 화면에 출력
for key in sorted(word_dic.keys( )) :
    print (key,word_dic[key]) 


print("총 단어 수 = ", total_count)

# 입력 파일 출력 파일 닫기
infile.close( )
