//Encapsulation program

#include<iostream.h>
#include<conio.h>

class student
{
 private:
	int m1,m2,roll_no,total;

	char name[20];
 public:
	void get();
	void put();
};
void student::get()
{
 cout<<"Enter Roll No :-"<<endl;
 cin>>roll_no;
 cout<<"Enter Student Name :-"<<endl;
 cin>>name;
 cout<<"Enter Marks M1 :-"<<endl;
 cin>>m1;
 cout<<"Enter Marks M2 :-"<<endl;
 cin>>m2;
}
void student::put()
{
  total=m1+m2;
  cout<<"***********************OUTPUT***********************"<<endl;
  cout<<"Roll No :-"<<roll_no<<endl;
  cout<<"Student Name :-"<<name<<endl;
  cout<<"Marks M1 :-"<<m1<<endl;
  cout<<"Marks M2 :-"<<m2<<endl;
  cout<<"Total Marks :-"<<total<<endl;
}
 void main()
 {
  clrscr();
  student s1,s2;
  s1.get();
  s2.get();
  s1.put();
  s2.put();
  getch();
 }
