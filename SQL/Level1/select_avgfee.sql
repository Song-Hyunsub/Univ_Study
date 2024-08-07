/*
테이블명 : CAR_RENTAL_COMPANY_CAR
출력할 컬럼 : AVERAGE_FEE => CAR_TYPE이 'SUV'인 CAR_ID의 평균 DAILY_FEE
*/

SELECT ROUND(AVG(DAILY_FEE), 0) AS AVERAGE_FEE
FROM CAR_RENTAL_COMPANY_CAR
WHERE CAR_TYPE = 'SUV';
