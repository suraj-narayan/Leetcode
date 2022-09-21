# Write your MySQL query statement below

UPDATE salary SET sex=CASE sex when 'm' THEN 'f' ELSE 'm' END;