/*
테이블 : ECOLI_DATA
출력 컬럼 : YEAR(DIFFERENTIATION_DATE) AS YEAR
, MAX(SIZE_OF_COLONY) - SIZE_OF_COLONY AS YEAR_DEV, ID
조건) YEAR, YEAR_DEV 기준 오름차순

*/

SELECT YEAR(DIFFERENTIATION_DATE) AS YEAR
, MAX(SIZE_OF_COLONY) OVER(PARTITION BY YEAR(DIFFERENTIATION_DATE))-SIZE_OF_COLONY AS YEAR_DEV
, ID
FROM ECOLI_DATA
ORDER BY YEAR, YEAR_DEV;
