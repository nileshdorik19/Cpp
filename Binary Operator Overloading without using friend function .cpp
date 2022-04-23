//Binary Operator Overloading without using friend function
#include<iostream.h>
#include<conio.h>

class binary
{
   int a,b;
   public:
	 void get();
	 void display();
	binary operator+(binary &s);
};
  void binary::get()
  {
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
  }
binary binary::operator+(binary &s)
  {
    binary b3;
    b3.a=a+s.a;
    b3.b=b+s.b;
    return(b3);
  }
  void binary::display()
  {
  cout<<"*************************************************"<<endl;
  cout<<"a="<<a<<endl;
  cout<<"b="<<b<<endl;
  }
  void main()
  {
   clrscr();
   binary b,b1,b4;
   b.get();
   b1.get();
   b.display();
   b1.display();
   b4=b+b1;
   b4.display();
   getch();
   }
