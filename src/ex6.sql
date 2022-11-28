SELECT CASE 
	WHEN Notes.Grade < 8 THEN 'NULL' 
	ELSE Students.Name 
	END 
, Notes.Grade, Students.Value 
FROM Students, Notes 
WHERE Students.Value >= Notes.Min_Value AND Students.Value <= Notes.Max_Value 
ORDER BY Notes.Grade DESC, Students.Name;