-- drop function if exists f1;
-- delimiter $
-- create function f1() returns int
-- DETERMINISTIC
-- begin
--     declare x int;
--     set x=10001;
--     return (x);
-- end $
-- delimiter ;


-- drop function if exists f2;
-- delimiter $
-- create function f2(para1 varchar (12)) returns int
-- DETERMINISTIC
-- begin
-- declare total int default 0;
-- select sum(sal) into total from emp where job=para1;
-- return (total);
-- end $
-- delimiter ;

-- DROP FUNCTION IF EXISTS functionname;
-- delimiter $$
-- CREATE FUNCTION functionname() RETURNS INT
-- DETERMINISTIC
-- begin
--  return (SELECT MAX(deptno) - 1 FROM dept);
-- end $$
-- delimiter ;

-- DROP FUNCTION IF EXISTS functionname;
-- delimiter $$
-- CREATE FUNCTION functionname() RETURNS varchar(1000)
-- DETERMINISTIC
-- begin
--  return CONCAT(UPPER(LEFT("Deepak",1)), SUBSTR(LOWER("DEEPAK"), 2,4 ));
-- end $$
-- delimiter ;

-- drop function if exists  sumSalary;
-- delimiter $
-- create function sumSalary(deptno int ) RETURNS int
-- DETERMINISTIC
-- begin
--     declare x int;
--      declare y int;
--     set x=deptno;
--     select sum(sal) into y from emp where deptno=x;
--     return y;
-- end $
-- delimiter ;


-- drop function if exists autoNumber;
-- delimiter $$
-- create function autoNumber() returns int
-- DETERMINISTIC
-- begin
-- 	declare newNumber int;
-- 	select max(id) + 1 into newNumber from student;
-- 	if newNumber is null then
-- 		set newNumber = 1;
-- 		return(newNumber);
-- 	else
-- 		return(newNumber);
-- 	end if;
-- end$$
-- delimiter ;

drop function if exists checkUser;
delimiter $$
create function checkUser(_email varchar(20)) returns varchar(1000)
begin
	declare _userName varchar(20);
declare _password varchar(20);
	select userName, password into _userName, _password from login where email = _email;
	if _userName is not null and _password is not null then
		return(concat(_userName, ' ', _password));
	else
		return("Employee not exists");
	end if;
end$$
delimiter ;

