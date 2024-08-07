/*
테이블 : (SKILLCODES AS S,) DEVELOPERS AS D
출력 컬럼 : ID, EMAIL, FIRST_NAME, LAST_NAME
조건) D테이블의 개발자 중 => Python(256) OR C#(1024) 인 사람
ORDER BY ID DESC;
KEY => & 연산자의 쓰임이 중요!
*/

SELECT ID, EMAIL, FIRST_NAME, LAST_NAME
FROM DEVELOPERS
WHERE SKILL_CODE & (SELECT CODE FROM SKILLCODES WHERE NAME = 'Python')
OR SKILL_CODE & (SELECT CODE FROM SKILLCODES WHERE NAME = 'C#')
ORDER BY ID;
