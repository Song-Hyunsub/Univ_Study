#CH10-05. 파일에 데이터 쓰기
from elice_utils import EliceUtils
elice_utils = EliceUtils()
##################################################################
##파일에 데이터를 쓰려면

outfile = open("phones.txt", "w")
#1번을 해보세요!
outfile.write("전우치 010-1234-5678\n")
outfile.write("홍길동 010-1234-5679\n")
outfile.write("김서방 010-1234-5680\n")
#2번을 해보세요!
outfile = open("phones.txt", "a")
#3번을 해보세요!
outfile.write("강감찬 010-1234-5681\n")
outfile.write("김유신 010-1234-5682\n")
outfile.write("정약용 010-1234-5683\n")

outfile.close( ) 

#아래 코드는 결과를 확인하기 위한 코드이므로, 수정하지 마세요!
elice_utils.send_file('phones.txt')
