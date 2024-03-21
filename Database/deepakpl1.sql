-- drop procedure if exists pro1;

-- delimiter $
-- create procedure pro1()
-- BEGIN
--     select 'hello world';
-- end $
-- delimiter ;


-- drop procedure if exists pro2;

-- delimiter $
-- create procedure pro2()
-- BEGIN
--    declare x int default 100;
--    declare y int ;
--    set y:= 200;
--    select x+y;
-- end $
-- delimiter ;


-- drop procedure pro3 if exists;
-- delimiter $
-- create procedure pro3(x int, in y int)
-- BEGIN
-- select x+y;
-- end $
-- delimiter ;

-- drop procedure pro4 if exists;
-- delimiter $
-- create procedure pro4(x int , in y int, out z int )
-- BEGIN
-- set z := x+y;

-- end $
-- delimiter ;


-- drop procedure pro5 if exists;
-- delimiter $
-- create procedure pro5(x int , in y int, out z int, out z1 int)
-- BEGIN
-- set z := x+y;
-- set z1:= x*y;
-- end $
-- delimiter ;


-- drop procedure pro6 if exists;
-- delimiter $
-- create procedure pro6(inout x int )
-- BEGIN
-- set x := x*x;

-- end $
-- delimiter ;

-- drop procedure pro7 if exists;
-- delimiter $
-- create procedure pro7(inout x int )
-- BEGIN
-- set x := x*x;

-- end $
-- delimiter ;


-- drop procedure display  if exists;
-- delimiter $
-- create procedure display(in x varchar (4000))
-- begin 
-- select x as MessageBox;
-- end $
-- delimiter;

-- drop procedure if exists pro11;

-- delimiter $
-- create procedure pro11()
-- BEGIN
--     call display("Hello world");
-- end $
-- delimiter ;








-- drop procedure if exists pro6;
-- delimiter $
-- create procedure pro6(in x int)
-- BEGIN
-- 	declare y int;
-- 	select deptno into y from dept where deptno=x;
	
-- 	if y is not null THEN
-- 		select * from dept where deptno=x;
		
-- 	ELSE
-- 		CALL display('Record not found...');
-- 	end if;
	 
-- end $
-- delimiter ;

-- drop procedure if exists pro6;
-- delimiter $
-- create procedure pro6()
-- BEGIN
-- select * from dept;
-- end $
-- delimiter ; 



-- drop procedure if exists pro6;
-- delimiter $
-- create procedure pro6(in x int)
-- BEGIN
-- declare y int;
-- select deptno into y from dept where deptno =x;



-- if y is not null then
-- select * from dept where deptno=x;
-- else
-- call display('Record not found');
-- end if;

-- end $
-- delimiter ;

-- drop procedure if exists pro7;
-- delimiter $
-- create procedure pro7(in p1 int, p2 varchar(20) ,p3 varchar(20), p4 varchar(20), p5 varchar(20))

-- BEGIN

-- 	if  binary p3 = 'PUNE' THEN
-- 		insert into dept values(p1, p2, p3, p4,p5);
-- 		call display('Record Inserted...');
-- 	ELSE
-- 		call display('Other than pune');
-- 	end if;
-- end $
-- delimiter ;



-- drop procedure if exists pro10;
-- delimiter $
-- create procedure pro10(in p1 int, in p2 int)

-- begin

-- lbl1:loop
-- 	if p1>p2 then
-- 		leave lbl1;
-- 	end if;

-- 	select p1;
-- 	set p1 := p1+1;
-- end loop lbl1;

-- end $
-- delimiter ;

-- drop procedure if exists pro12;
-- delimiter $
-- create procedure pro11 (int p1 varchar(6000), in  p2 varchar(64))

-- begin
-- set @x = concat ("select", p1, "from", p2);
-- prepare y from @x;
-- execute y;
-- delimiter y;

