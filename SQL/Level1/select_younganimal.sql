/*
테이블 : ANIMAL_INS
출력 컬럼 : ANIMAL_ID, NAME
조건) INTAKE_CONDITION != 'Aged'
ORDER BY ANIMAL_ID
*/

SELECT ANIMAL_ID, NAME
FROM ANIMAL_INS
WHERE INTAKE_CONDITION != 'Aged'
ORDER BY ANIMAL_ID;