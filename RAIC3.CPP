//to generate a bio data of a person//
#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
char name[20],email,gender,coun[20];
int mobno;
cout<<"\t\tBIODATA";
for(int i=0;i<=70;i++)
{cout<<"_"; }
cout<<"\n";
cout<<"name:";
cin.getline(name,20);
cout<<"mobno:";
cin>>mobno;
cout<<"gender:";
cin>>gender;
for(i=0;i<=70;i++)
{
cout<<"_";}
cout<<"\n";
int no,age,pnum,mark;
char st[20],letter[20],major[20],others[30];
 cout<<"PERSONAL DETAILS"<<endl;
 cout<<"address:";
 cout<<"\t\t";
 cin>>no;
 cin.getline(st,20);
 cin.getline(coun,20);
 cout<<"age";
 cin>>age;
 cout<<"passportno";
 cin.getline(letter,20) ;
 cin>>pnum;
 cout<<"\nEDUCATIONAL DETAILS ";
 cout<<"\ngraduation";
 cin>>mark;
 cout<<"\nmajor";
 cin.getline(major,20);
 cout<<"\nother qualifications";
 cin.getline(others,30);


 getch();
 return 0;
 }
