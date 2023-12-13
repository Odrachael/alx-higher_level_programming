-- listing all records excluding NULL values

SELECT score, name
FROM second_table
WHERE name IS NOT NULL
ORDER BY score DESC;
