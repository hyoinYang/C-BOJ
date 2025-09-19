-- 코드를 입력하세요
SELECT animal_type, COALESCE(name, 'No name') 'name', sex_upon_intake
FROM animal_ins
ORDER BY animal_id