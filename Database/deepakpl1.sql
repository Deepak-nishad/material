-- drop procedure if exists pro1;
-- delimiter $
-- create procedure pro1()
-- BEGIN
--     select 'hello world' as hello;
-- end $
-- delimiter ;



-- drop procedure if exists pro2;
-- delimiter $
-- create procedure pro2()
-- BEGIN
--    declare x int default 100;
--    declare y int ;
--    set y:= 200;
--    select x+y as addition;
-- end $
-- delimiter ;

-- drop procedure pro3 if exists;
-- delimiter $
-- create procedure pro3( x int,  y int)
-- BEGIN
-- select x+y as addition;
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
-- drop procedure if exists pro11;
-- delimiter $
-- create procedure pro11(in p1 varchar(6000), in p2 varchar(64))
-- BEGIN
-- 		set @x := concat("select ", p1,  " from ", p2);
-- 		prepare y from @x;
-- 		execute y;
-- end $
-- delimiter ;

-- drop procedure if exists pro12;
-- delimiter $
-- create procedure pro12(in p1 int)

-- BEGIN
-- 		declare x int;
		
-- 		select deptno into x from dept where deptno=p1;
		
-- 		if x is not null THEN
-- 			delete from dept where  deptno=p1;
-- 			call display('Record deleted');
-- 			select * from dept;
-- 		ELSE
-- 			call  display('Record not found');
-- 		end if;
		
-- end $
-- delimiter ;


-- drop procedure if exists pro13;
-- delimiter $
-- create procedure pro13()
-- begin
--     declare exit handler for 1050 select 'table  already present';
-- if day(curDate()) = 22 then
--     create table rushi (c1 int primary key, c2 int);
-- else
-- call display('table cannot be created' );
-- end if;
-- end $
-- delimiter ;


-- drop procedure if exists pro14;
-- delimiter $
-- create procedure pro14(in p1 varchar(64))

-- BEGIN
-- 		set @x := concat("drop ", p1);
-- 			select @x;

-- end $
-- delimiter ;


-- create table signup  ( username varchar (20), password varchar(20), email varchar(20));

-- drop procedure if exists adduse;
-- delimiter $
-- create procedure adduse ( username varchar (20), password varchar(20), email varchar(20))
-- begin 
--     insert into signup values(username, password, email);
--     select "data inserted in login table";
--     select * from signup;
-- end $
-- delimiter ;    


create table log (id int auto_increment primary key , curr_date datetime, curr_time datetime, message varchar(30));

drop procedure if exists checkUser;
delimiter $
    create procedure checkUser ( in emailID varchar(25))
begin 
    declare user_name varchar(20); 
    declare user_password varchar(20); 
    select username, password into user_name, user_password from login where email=emailID;
if user_name is not null and user_password is not null then
    select user_name, user_password as message;
else
    insert into log (curr_date, curr_time, message) values((select current_date), (select current_time),"Record not found");
    select * from log;
end if;
end $
delimiter ;

drop procedure if exists getQualification ;
delimiter $
    create procedure getQualification (in id int )
BEGIN
    declare x int;
    set x=id;
if x is not null then
    select  s.*, sq.name from student s join student_qualifications sq on x=s.id and s.id=sq.studentId ;
else
select "Record not found";
end if;
end $
delimiter ;

drop procedure if exists addstudent ;
delimiter $
    create procedure addstudent ()
BEGIN




    
 