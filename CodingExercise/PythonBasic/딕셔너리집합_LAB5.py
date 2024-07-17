import smtplib
from email.mime.text import MIMEText

#1번을 해보세요!
me = 'cba4321@gmail.com'    #보내는 사람 메일 주소
you = 'abc1234@naver.com'   #받는 사람 메일 주소

contents = '12월 20일에 동창회가 있으니 참석해주시기 바랍니다.' #4번을 해보세요!

msg = MIMEText(contents,_charset='euc-kr') #msg 딕셔너리 구현
#2번을 해보세요!
msg['Subject'] = '동창회 모임'                 #제목
#3번을 해보세요!
msg['From'] = me
#4번을 해보세요!
msg['To'] = you

naver_server = smtplib.SMTP_SSL('smtp.naver.com',465)   #네이버 메일 서버 연결

#5번을 해보세요!
naver_server.login('abc1234', 'abcdef123')  #자신의 네이버 계정을 이용
naver_server.sendmail(me, you, msg.as_string()) #메일 전송, 문자열로 변환하여 보냅니다.
naver_server.quit()
