
##################################################################
##파일에서 한 번에 하나의 줄만 읽어 오기

infile = open("phones.txt","r") #open()은 이름이 "phones.txt"인 파일을 열고, 파일과 연관된 객체를 생성한 후에 객체를 반환합니다.

for line in infile:
    line = line.rstrip()
    print(line)

infile.close()    
    
     

infile.close( ) #close()함수는 다른 프로그램이 파일을 사용할 수 있기 때문에 사용이 끝날 파일 닫습니다.



