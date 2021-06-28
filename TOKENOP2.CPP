#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
int main()
{
float x,y,p;
clrscr();
cout<<"Enter two numbers: ";
cin>>x>>y;
p=x*y;
cout<<"Product="<<setprecision(1)<<p<<endl;
getch();
return 0;
}
