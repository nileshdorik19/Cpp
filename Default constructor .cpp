#include<iostream.h>
#include<conio.h>

class num
{
  private:
	 int a,b,c;

  public:
	num();  //constructor
	void show();
};
num::num()
{
 cout<<"Constructor Is Called"<<endl;
  cout<<"Enter Value Of a :-"<<endl;
 cin>>a;
 cout<<"Enter Value Of b :-"<<endl;
 cin>>b;
 cout<<"Enter Value Of c :-"<<endl;
 cin>>c;

}
void num::show()
{
 cout<<"Value Of a :-"<<a<<endl;
 cout<<"Value Of b :-"<<b<<endl;
 cout<<"Value Of c :-"<<c<<endl;

}
void main()
{
 clrscr();
 num x;
 x.show();
 getch();
 }
