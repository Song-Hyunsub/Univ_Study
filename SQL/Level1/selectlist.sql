SELECT BOOK_ID, date_format(PUBLISHED_DATE, '%Y-%m-%d') FROM BOOK
WHERE PUBLISHED_DATE LIKE '2021%'
AND CATEGORY = '인문'
ORDER BY PUBLISHED_DATE;