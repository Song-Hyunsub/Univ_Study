/*
생성할 컬럼 : FLAVOR
테이블 정보 : FIRST_HALF, ICECREAM_INFO
FIRST_HALF => SHIPMENT_ID, FLAVOR(PK), TOTAL_ORDER
ICECREAM_INFO => FLAVOR(FK), INGREDIENT_TYPE
Q) TOTAL_ORDER>3000 AND INGREDIENT_TYPE='fruit_based'
ORDER => TOTAL_ORDER DESC
*/

SELECT B.FLAVOR
FROM FIRST_HALF A INNER JOIN ICECREAM_INFO B ON A.FLAVOR = B.FLAVOR
WHERE TOTAL_ORDER>3000 AND INGREDIENT_TYPE='fruit_based'
ORDER BY A.TOTAL_ORDER DESC;