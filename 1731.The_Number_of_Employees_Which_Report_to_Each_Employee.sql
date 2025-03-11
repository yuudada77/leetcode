SELECT merge.employee_id, merge.name, COUNT(emp.employee_id) AS reports_count, ROUND(AVG(emp.age)) AS average_age
FROM Employees emp
JOIN Employees merge ON emp.reports_to = merge.employee_id
GROUP BY merge.employee_id
ORDER BY merge.employee_id ASC;