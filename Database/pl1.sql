/*
drop procedure if exists pro1;

delimiter $
create procedure pro1()
BEGIN
	call display('Hello World');
end $
delimiter ;



drop procedure if exists pro2;

delimiter $
create procedure pro2()
BEGIN
	declare x int default 100;
	
	declare y int;
	set y:=200;
	
	-- select x + y; 
	set @z := x + y;
	
	
end $
delimiter ;




drop procedure if exists pro3;

delimiter $
create procedure pro3(x int, in y int)
BEGIN
	select x+y;	
end $
delimiter ;



drop procedure if exists pro4;

delimiter $
create procedure pro4(x int, in y int, out z1 int, out z2 int)
BEGIN
	set z1 := x + y;	
	set z2 := x * y;	
end $
delimiter ;*




drop procedure if exists pro5;

delimiter $
create procedure pro5(inout x int)
BEGIN
	set x := x*x;
end $
delimiter ;



drop procedure if exists display;

delimiter $
create procedure display(in x varchar(4000))
BEGIN
	select x as MessageBox;
end $
delimiter ;



drop procedure if exists pro6;

delimiter $
create procedure pro6(in x int)
BEGIN
	declare y int;
	select deptno into y from dept where deptno=x;
	
	if y is not null THEN
		select * from dept where deptno=x;
		
	ELSE
		CALL display('Record not found...');
	end if;
	 
end $
delimiter ;



drop procedure if exists pro7;
delimiter $
create procedure pro7(in p1 int, p2 varchar(20) ,p3 varchar(20), p4 varchar(20))

BEGIN

	if  binary p3 = 'PUNE' THEN
		insert into dept values(p1, p2, p3, p4);
		call display('Record Inserted...');
	ELSE
		call display('Other than pune');
	end if;
end $
delimiter ;



drop procedure if exists pro8;
delimiter $
create procedure pro8(in p1 int, in p2 int)


BEGIN
	select  ename, job,sal from emp limit p1, p2;
end $
delimiter ;



drop procedure if exists pro9;
delimiter $
create procedure pro9()
BEGIN
	declare x int;
	select count(*) - 5 into x from emp;
	select  ename, job,sal from emp limit x, 5;
end $
delimiter ;



drop procedure if exists pro10;
delimiter $
create procedure pro10(in p1 int, in p2 int)
BEGIN
	
	lbl1:LOOP
		if p1 > p2 THEN
			leave lbl1;
		end if;
		
		select p1;
		set p1 := p1 + 1;
	end loop lbl1;
end $
delimiter ;



drop procedure if exists pro7;
delimiter $
create procedure pro7(in p1 int, p2 varchar(20) ,p3 varchar(20), p4 varchar(20))

BEGIN
	
	declare msg varchar(20);
	declare exit handler for 1062 select 'Invalid data';
	
	set msg := 'Other than Pune';

	if  binary p3 = 'PUNE' THEN
		insert into dept values(p1, p2, p3, p4);
		call display('Record Inserted...');
	ELSE
		call display(msg);
	end if;
end $
delimiter ;





drop procedure if exists pro11;
delimiter $
create procedure pro11(in p1 varchar(6000), in p2 varchar(64))

BEGIN
		set @x := concat("select ", p1,  " from ", p2);
		prepare y from @x;
		execute y;

end $
delimiter ;




drop procedure if exists pro12;
delimiter $
create procedure pro12(in p1 int)

BEGIN
		declare x int;
		
		select deptno into x from dept where deptno=p1;
		
		if x is not null THEN
			delete from dept where  deptno=p1;
			call display('Record deleted');
			select * from dept;
		ELSE
			call  display('Record not found');
		end if;
		
end $
delimiter ;



drop procedure if exists pro13;
delimiter $
create procedure pro13()

BEGIN
       declare exit handler for 1050 select 'table present';

		if day(curdate()) = 18 then
			create table w(c1 int primary key, c2 int);
		ELSE
			call display('table cannot be created');
		end if;
end $
delimiter ;





drop procedure if exists pro14;
delimiter $
create procedure pro14(in p1 varchar(64))

BEGIN
		set @x := concat("drop ", p1);
			select @x;

end $
delimiter ;




drop function if exists f1;

delimiter $
create function f1()  returns varchar(100)
DETERMINISTIC
BEGIN
		declare x varchar(100);
		select 'hello world' into x;
		return x;
end $
delimiter ;



drop function if exists f2;

delimiter $
create function f2(x int, y int)  returns varchar(4000)
DETERMINISTIC
BEGIN
		return concat("Output is ",ifnull(x,0) + ifnull(y,0));
end $
delimiter ;




drop function if exists f3;

delimiter $
create function f3()  returns int
DETERMINISTIC
BEGIN
		
		declare x int;
		select max(deptno)+1 into x from dept;
		return x;
end $
delimiter ;



drop procedure if exists pro1;

delimiter $
create procedure pro1()
BEGIN
	select * from dept;
	select f4();
	
	select "EOD";
end $
delimiter ;


drop function if exists f4;

delimiter $
create function f4()  returns int
DETERMINISTIC
BEGIN
		return -1;
end $
delimiter ;




drop procedure if exists pro15;

delimiter $
create procedure pro15()
b1:BEGIN
	declare x int;
	set x:= -1;
	
	b2:BEGIN
		declare y int default -2;
		select x - y;
	
	end b2;
	
end b1$
delimiter ;



drop procedure if exists pro16;

delimiter $
create procedure pro16(x int)
b1:BEGIN
	select x;
	
	b2:BEGIN
		
		select x;
	
	end b2;
	
end b1$
delimiter ;



drop procedure if exists pro17;

delimiter $
create procedure pro17()
b1:begin
	declare v1 int;
	declare v2, v3, v4 varchar(30);
	
	
	declare c1 cursor for select * from dept;
	
	declare exit handler for 1329 select 'Give your message' R1;
		
	open c1;
	
	loop
		fetch c1 into v1, v2, v3, v4;
			select v1, v2, v3, v4;
	end loop;
	
	close c1;
end b1$
delimiter ;






drop procedure if exists pro18;

delimiter $
create procedure pro18(x varchar(20))
b1:begin
	declare v1, v4 int;
	declare v2, v3 varchar(30);
	
	
	declare c1 cursor for select empno, ename, job, sal from emp  where job=x;
	
	declare exit handler for 1329 select 'Give your message' R1;
		
	open c1;
	
	loop
		fetch c1 into v1, v2, v3, v4;
			select v1 empno, v2, v3, v4 Salary;
	end loop;
	
	close c1;
end b1$
delimiter ;




drop procedure if exists pro19;

delimiter $
create procedure pro19()
b1:begin
	declare v1, v4 int;
	declare v2, v3 varchar(30);
	declare a int;
	
	declare c1 cursor for select empno, ename, job, sal from emp ;
	
	declare exit handler for 1329 select 'Give your message' R1;
		
	open c1;
	
	loop
		fetch c1 into v1, v2, v3, v4;
			set a := v4+1000;
		
			insert into s values(v1, v2, v3, a);
	end loop;
	
	close c1;
end b1$
delimiter ;



drop procedure if exists pro20;

delimiter $
create procedure pro20(d varchar(20))
b1:begin
	declare x int;

	select deptno into x from dept where dname=d;
	
	if x is null then
		call display('dname not found');
	ELSE
		b2:begin
		    declare v1, v2 varchar(20);
			declare v3 int;
			
			declare c1 cursor for select ename, job, sal from emp where deptno=x;
			declare exit handler for 1329 select 'Give your message' R1; 
			
			
			
			open c1;
			loop
				select sleep(10); 
				fetch c1 into v1, v2, v3;
					select v1, v2, v3, v3+1000 NewSalary;
			end loop;
			close c1;
		end b2;
	end if;
end b1 $
delimiter ;



drop procedure if exists pro19;

delimiter $
create procedure pro19()
b1:begin
	declare  _EMPNO, _MGR, _SAL, _COMM, _DEPTNO, _BONUSID, _isActive  int ;
	declare _GENDER char;
	declare  _ENAME,  _JOB, _USERNAME, _PWD, _PHONE varchar(30);
	declare  _HIREDATE date;
	
	declare c1 cursor for select * from emp ;
	declare exit handler for 1329 select 'Give your message' R1;
		
	open c1;
	
	loop
		fetch c1 into _EMPNO, _ENAME,_GENDER,_JOB,_MGR ,_HIREDATE,_SAL,_COMM ,_DEPTNO,_BONUSID,_USERNAME,_PWD,_PHONE, _isActive;
		
		if _deptno=10 then
			insert into ee1 values(_EMPNO, _ENAME,_GENDER,_JOB,_MGR ,_HIREDATE,_SAL,_COMM ,_DEPTNO,_BONUSID,_USERNAME,_PWD,_PHONE,_isActive);
		
		elseif _deptno=20 then
		
			insert into ee2 values(_EMPNO, _ENAME,_GENDER,_JOB,_MGR ,_HIREDATE,_SAL,_COMM ,_DEPTNO,_BONUSID,_USERNAME,_PWD,_PHONE,_isActive);
		
		elseif _deptno=30 then
		
			insert into ee3 values(_EMPNO, _ENAME,_GENDER,_JOB,_MGR ,_HIREDATE,_SAL,_COMM ,_DEPTNO,_BONUSID,_USERNAME,_PWD,_PHONE,_isActive);
		ELSE
			select _EMPNO, _ENAME,_GENDER,_JOB,_MGR ,_HIREDATE,_SAL,_COMM ,_DEPTNO,_BONUSID,_USERNAME,_PWD,_PHONE,_isActive;
		
		end if;
	end loop;
	close c1;
end b1$
delimiter ;




drop trigger if exists tr1;

delimiter $
	create trigger tr1 before insert on dept for each row
	begin
		select "hello Wrold from trigger" into @x;
	end $
delimiter ;


drop trigger if exists tr2;

delimiter $
	create trigger tr2 before insert on dept for each row
	begin
		insert into d1 values(NEW.DEPTNO, NEW.DNAME, NEW.LOC, NEW.PWD);
	end $
delimiter ;


	mysql> insert into dept values(1,,'rnd','baroda','brd777');
	
	NEW.DEPTNO- 1;
	NEW.DNAME=rnd;
	NEW.LOC=baroda;
	NEW.PWD=brd777;
	

drop trigger if exists tr3;

delimiter $
	create trigger tr3 after insert on dept for each row
	begin
		select count(*) into @x from dept;
	end $
delimiter ;




drop trigger if exists tr3;

delimiter $
	create trigger tr3 before insert on dept for each row
	begin
		set new.loc := upper(new.loc);
	end $
delimiter ;



drop trigger if exists tr3;

delimiter $
	create trigger tr3 before insert on dept for each row
	begin
		declare x int;
		
		select max(deptno)+1 into x from  dept;
		
		set new.deptno := x;
		
		
	end $
delimiter ;





drop trigger if exists tr4;

delimiter $
	create trigger tr4 before delete on dept for each row
	begin
		
		insert into d1 values(OLD.DEPTNO, OLD.DNAME, OLD.LOC, OLD.PWD,'DELETE', curDate(), curTime(), user());
		
		
	end $
delimiter ;









drop procedure if exists pro20;

delimiter $
create procedure pro20(x int)
BEGIN
	set x :=1001;
	select x;
end $
delimiter ;
*/


drop trigger if exists tr4;

delimiter $
	create trigger tr4 before insert on dept for each row
	begin
		if new.loc = 'pune' then
			signal sqlstate '42000' set message_text ='Invaid city!'; 
		end if;
	end $
delimiter ;