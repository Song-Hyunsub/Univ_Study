/*
테이블 : ANIMAL_INS
출력 컬럼 : ANIMAL_ID, NAME
조건 :
NAME LIKE '%el%'
ORDER BY NAME
*/

SELECT ANIMAL_ID, NAME
FROM ANIMAL_INS
WHERE ANIMAL_TYPE = 'Dog' AND NAME LIKE '%el%'
ORDER BY NAME;