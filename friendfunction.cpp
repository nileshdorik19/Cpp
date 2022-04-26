#include<iostream.h>
#include<conio.h>

class two;	//Forward Declaration of Class two

class one
{
	int a;
public:
	void setA(int x)
	{
	 a=x;
	}
friend int add(one, two); //Declare Function add as friend to Class Two

};


class two
{
	int b;
public:
	void setB(int x)
	{
	 b=x;
	}
friend int add(one, two); //Declare Function add as friend to Class One
};

int add(one p, two q) //Friend function Definition without Scope Resolution
{
	return p.a+q.b; //Access Private Members of Class one & Class two
}

void main()
{
	clrscr();
		int sum, a,b;
		one obj1;
			cout<<"\nEnter value of A :";
			cin>>a;
			obj1.setA(a);
		two obj2;
			cout<<"\nEnter value of B :";
			cin>>b;
			obj2.setB(b);
	sum=add(obj1,obj2);	//Calls Friend Function Add
	cout<<"\nAddition of A+B  :"<<sum;
	getch();
}
