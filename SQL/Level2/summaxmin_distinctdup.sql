/*
테이블 : ANIMAL_INS
출력 컬럼 : COUNT(*) AS COUNT
조건) 동물 보호소에 들어온 동물의 이름 개수 세기
COUNT에서 DISTINCT 하기
*/

SELECT COUNT(DISTINCT(NAME)) AS COUNT
FROM ANIMAL_INS
WHERE NAME IS NOT NULL;