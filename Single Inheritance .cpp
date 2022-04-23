//single Inheritance

#include<iostream.h>
#include<conio.h>

class student
{
 private:
	int roll_no;
	char name[20];
 public:
	void get();
	void show();
};
class mark: public student
{
 private:
	 int m1,m2,m3,m4;
 public:
	void getdata();
	void display();
};
void student::get()
{
   cout<<"Enter Roll No :-";
   cin>>roll_no;
   cout<<"Enter Student Name :-";
   cin>>name;
}
void mark::getdata()
{
   cout<<"************Enter Marks Of Four Subject************"<<endl;
   cout<<"Enter Marks Of M1 :-";
   cin>>m1;
   cout<<"Enter Marks Of M2 :-";
   cin>>m2;
   cout<<"Enter Marks Of M3 :-";
   cin>>m3;
   cout<<"Enter Marks Of M4 :-";
   cin>>m4;
}
void student::show()
{
  cout<<"Roll No :-"<<roll_no<<endl;
  cout<<"Student Name :"<<name<<endl;
}
void mark::display()
{
  cout<<"Marks Of Four Subject"<<endl;
  cout<<"Marks Of M1 :-"<<m1<<endl;
  cout<<"Marks Of M1 :-"<<m2<<endl;
  cout<<"Marks Of M1 :-"<<m3<<endl;
  cout<<"Marks Of M1 :-"<<m4<<endl;
}

void main()
{
 clrscr();
 mark m;
 m.get();
 m.getdata();
 m.show();
 m.display();
 getch();
 }
