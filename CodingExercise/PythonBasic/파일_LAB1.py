#CH10-Lab01 파일 복사하기
from elice_utils import EliceUtils
elice_utils = EliceUtils()
# 입력 파일 이름과 출력 파일 이름을 받습니다. 
infilename = input("입력 파일 이름: ");
outfilename = input("출력 파일 이름: ");

#1번을 해보세요!
infile = open(infilename, "r")
outfile = open(outfilename, "w")
# 전체 파일을 읽습니다.
s = infile.read( )

#2번을 해보세요!
outfile.write(s)

# 파일을 닫습니다.
infile.close( ) 
outfile.close( ) 

#아래 코드는 결과를 확인하기 위한 코드이므로, 수정하지 마세요!
elice_utils.send_file('phones1.txt')
