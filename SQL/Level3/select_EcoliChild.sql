/*
테이블 : ECOLI_DATA
출력 컬럼 : ID, IFNULL(COUNT(ID), 0) CHILD_COUNT
조건) ORDER BY ID

FROM ECOLI_DATA e1: 기본 테이블로 ECOLI_DATA 테이블을 선택하고 이를 e1이라는 별칭으로 참조합니다.

LEFT JOIN ECOLI_DATA e2 ON e1.ID = e2.PARENT_ID: 동일한 테이블을 e2라는 별칭으로 다시 조인합니다. 여기서 e1.ID를 e2.PARENT_ID와 매칭시켜, 각 부모 개체(e1.ID)에 대한 자식 개체들을 가져옵니다. LEFT JOIN을 사용하여 자식이 없는 경우에도 부모 개체가 모두 결과에 포함되도록 합니다.

COUNT(e2.ID) AS CHILD_COUNT: 조인된 결과에서 자식 개체의 수를 계산합니다. 자식이 없는 경우 NULL이 되므로 COUNT 함수가 0을 반환하게 됩니다.

GROUP BY e1.ID: 각 개체의 ID별로 그룹핑하여 자식 수를 계산합니다.

ORDER BY e1.ID: 결과를 개체의 ID 순서로 오름차순 정렬합니다.
*/

SELECT A.ID, COUNT(B.ID) AS CHILD_COUNT
FROM ECOLI_DATA A LEFT OUTER JOIN ECOLI_DATA B
ON A.ID = B.PARENT_ID
GROUP BY A.ID
ORDER BY A.ID;

