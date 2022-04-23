#include<iostream.h>
#include<conio.h>

class num
{
  private:
	 int a,b,c;

  public:
	num(int l,int m,int n);  //Parameterized constructor
	void show()
	{
	 cout<<"a="<<a<<endl<<"b="<<b<<endl<<"c="<<c<<endl;
	}
 };
 num::num(int l,int m,int n) //Parameterized Constructor
 {
   a=l;
   b=m;
   c=n;
 }
 void main()
 {
  clrscr();
  num z(10,20,30); //parameterized constructor
  z.show();
  getch();
 }






