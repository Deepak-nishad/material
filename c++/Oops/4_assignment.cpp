// Assignment 4 CTmie hours add and compair time

#include<iostream>
using namespace std;
class CTime
{
	int hh,mm,ss;
	public:
	CTime()
	{
		
		hh=12;mm=00;ss=00;	
	}
	void accept_time(int h,int m,int s)
	{
		if(h>23)
		{
		
		h=h-24;
		hh=h;mm=m;ss=s;
		}
		else
		hh=h;mm=m;ss=s;
	}
	void display()
	{
		cout<<" "<<hh<<":"<<mm<<":"<<ss;	
	}	
	void add_hours(int h)
	{
		hh+=h;
		if(hh>23)
		{
			hh=hh-24;
		}
	}
	string operator >(CTime o)
	{
		if(hh==o.hh)
		{
			if(mm==o.mm)
			{
				if(ss==o.ss)
				return "Equal ";
				else if(ss>o.ss)
				return "Greter";
				else 
				return "Lesser";	
			}
			else if(mm>o.mm)
				return "Greter";
				else 
				return "Lesser";
		}
		else if(hh>o.hh)
				return "Greter";
				else 
				return "Lesser";
	}
	~CTime()
	{
		cout<<"\n\n destructor call";
	}
};
int main()
{
	CTime t1,t2;
	int h,m,s;
	cout<<"\n Object 1";
	cout<<"\n Enter hours";
	cin>>h;
	cout<<"\n Enter minutes";
	cin>>m;
	cout<<"\n Enter second";
	cin>>s;
	//cout<<"\n t1 :";
	//t1.display();
	t1.accept_time(h,m,s);
	cout<<"\n t1 :";
	t1.display();
	int a;
	cout<<"\n add hours";
	cin>>a;
	cout<<"\n hours added in t1:";
	t1.add_hours(a);
	cout<<"\n t1 :";
	t1.display();
	
	
	cout<<"\n Object 2";
	cout<<"\n Enter hours";
	cin>>h;
	cout<<"\n Enter minutes";
	cin>>m;
	cout<<"\n Enter second";
	cin>>s;
	//cout<<"\n t1 :";
	//t1.display();
	t2.accept_time(h,m,s);
	cout<<"\n t1 :";
	t2.display();
	
	cout<<"\n add hours";
	cin>>a;
	cout<<"\n hours added in t1:";
	t2.add_hours(a);
	cout<<"\n t2 :";
	t2.display();
	
	
	//t2.display();
	string str;
	str=t1>t2;
	cout<<"\n\n t1 "<<str<<" than t2";
	
	
return 0;
}
