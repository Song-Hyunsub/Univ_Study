/*
테이블 : FISH_INFO
출력 컬럼 : ID, LENGTH
조건)
LENGTH IS NOT NULL
ORDER BY LENGTH DESC, ID LIMIT 10
*/

SELECT ID, LENGTH
FROM FISH_INFO
# WHERE LENGTH IS NOT NULL    => 어차피 내림차순이라 필요 없는 구문
ORDER BY LENGTH DESC, ID LIMIT 10;