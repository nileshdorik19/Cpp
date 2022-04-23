//Binary operator overloading using friend function
#include<iostream.h>
#include<conio.h>
class binary

  {
     private:
	   int a,b;
     public:
	   void get();
	  binary friend operator +(binary &s,binary &s1);
	   void display();
  };
   void binary::get()
   {
     cout<<"Enter Value Of a=";
     cin>>a;
     cout<<"Enter Value Of b=";
     cin>>b;
   }
   binary operator+(binary &s,binary &s1)
   {
      binary s3;
      s3.a=s.a+s1.a;
      s3.b=s.b+s1.b;

      return(s3);
   }

   void binary::display()
   {
    cout<<"*******************************************************"<<endl;
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
