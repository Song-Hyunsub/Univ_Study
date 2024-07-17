/*
테이블 : FISH_INFO
컬럼: MAX(LENGTH) AS MAX_LENGTH
조건: 컬럼 값 뒤에 cm
*/

SELECT CONCAT(MAX(LENGTH), 'cm') AS MAX_LENGTH  # MAX(LENGTH) + 'cm' 는 숫자 + 문자이므로 불가능!
FROM FISH_INFO;
