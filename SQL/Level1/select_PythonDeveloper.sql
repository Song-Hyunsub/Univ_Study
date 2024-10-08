/*
테이블 : DEVELOPER_INFOS
출력 컬럼 : ID, EMAIL, FIRST_NAME, LAST_NAME
조건) SKILL_1 = 'Python' OR SKILL_2 = 'Python' OR SKILL_3 = 'Python'
정렬) ID ASC
*/

/* [Solution 1]
SELECT ID, EMAIL, FIRST_NAME, LAST_NAME
FROM DEVELOPER_INFOS
WHERE SKILL_1 = 'Python' OR SKILL_2 = 'Python' OR SKILL_3 = 'Python'
ORDER BY ID;

[Solution 2]
SELECT ID, EMAIL, FIRST_NAME, LAST_NAME
FROM DEVELOPER_INFOS
WHERE SKILL_1 LIKE 'Python' 
OR SKILL_2 LIKE 'Python' 
OR SKILL_3 LIKE 'Python'
ORDER BY ID;
*/

# [Solution 3]
SELECT ID, EMAIL, FIRST_NAME, LAST_NAME
FROM DEVELOPER_INFOS
WHERE 'Python' IN (SKILL_1, SKILL_2, SKILL_3)
ORDER BY ID;
