//a simple c++ program to get the area and circumference of a circle //
 #include<iostream.h>
#define pi 3.14
#include<conio.h>
class circle
{
public:
int r;
float area,circum;
void result()
{
area=pi*r*r;
circum=2*pi*r;
cout<<"enter radius value ";
cin>>r;
cout<<"area of the circle is "<<area;
cout<<"\ncircumference of the circle is "<<circum;
}
};
void main()
{
clrscr();
circle c;
c.result();
getch();
}



