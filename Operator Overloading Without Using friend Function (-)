//Operator Overloading Without Using friend Function (-)

#include<iostream.h>
#include<conio.h>
class unary
{
  private:
	 int a,b,c;
  public:
	void get();
	void show();
	void operator-();//declaration
};
void unary::get()
{
   cout<<"Enter Value of a :-"<<endl;
   cin>>a;
   cout<<"Enter Value of b :-"<<endl;
   cin>>b;
   cout<<"Enter Value of c :-"<<endl;
   cin>>c;
}
void unary::operator-() //defination
{
 a=-a;
 b=-b;
 c=-c;
}
void unary::show()
{
  cout<<"a=   "<<a<<endl;
  cout<<"b=   "<<b<<endl;
  cout<<"c=   "<<c<<endl;
}
void main()
{
 clrscr();
 unary u;
 u.get();
 -u;
 u.show();
 getch();
}
