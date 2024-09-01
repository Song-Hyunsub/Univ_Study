/*
테이블 : REST_INFO
출력 컬럼 : FOOD_TYPE, REST_ID, REST_NAME, FAVORITES
조건)
FOOD_TYPE별로 FAVORITES가 가장 많은 식당의 위 컬럼을 출력하시오

SELECT food_type, max(favorites)
FROM REST_INFO
GROUP BY FOOD_TYPE;
위 쿼리 테이블을 원본 테이블에 매칭시켜줘야 함
*/

SELECT FOOD_TYPE, REST_ID, REST_NAME, FAVORITES
FROM REST_INFO
WHERE (FOOD_TYPE, FAVORITES) IN (SELECT FOOD_TYPE, MAX(FAVORITES)
                                FROM REST_INFO
                                GROUP BY FOOD_TYPE)
ORDER BY FOOD_TYPE DESC;
