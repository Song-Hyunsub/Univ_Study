/*
조건)
테이블 : USED_GOODS_BOARD, USED_GOODS_REPLY
작성 날짜 범위: 2022년 10월 (게시글 기준!!)
표시할 컬럼 : 제목, 게시글 ID, 댓글 ID, 댓글 작성자 ID, 댓글 내용, 댓글 작성일
=> 여기서 동일하게 공유되는 컬럼? : BOARD_ID
USED_GOODS_BOARD => TITLE, BOARD_ID
USED_GOODS_REPLY => REPLY_ID, WRITER_ID, CONTENTS, CREATED_DATE

CREATED_DATE를 기준으로 오름차순 정렬
댓글 작성일이 같다면 TITLE을 기준으로 오름차순 정렬
=> ORDER BY CREATED_DATE, TITLE;
*/

SELECT A.TITLE, B.BOARD_ID, B.REPLY_ID, B.WRITER_ID, B.CONTENTS, DATE_FORMAT(B.CREATED_DATE, '%Y-%m-%d') AS CREATED_DATE
FROM USED_GOODS_BOARD A INNER JOIN USED_GOODS_REPLY B
ON A.BOARD_ID = B.BOARD_ID
WHERE A.CREATED_DATE LIKE '2022-10%'
ORDER BY B.CREATED_DATE, A.TITLE;