/*
테이블 : FIRST_HALF, ICECREAM_INFO
출력 컬럼 : INGREDIENT_TYPE, SUM(TOTAL_ORDER) AS TOTAL_ORDER
조건) GROUP BY INGREDIENT_TYPE
ORDER BY TOTAL_ORDER
ON A.FLAVOR = B.FLAVOR
*/

SELECT INGREDIENT_TYPE, SUM(TOTAL_ORDER) AS TOTAL_ORDER
FROM FIRST_HALF A INNER JOIN ICECREAM_INFO B
ON A.FLAVOR = B.FLAVOR
GROUP BY INGREDIENT_TYPE
ORDER BY TOTAL_ORDER;