//a program to print the basic employee details //
#include<iostream.h>
#include<conio.h>
class empdetails
{
protected:
char empnam[20],dept[20];
char desig[20];
int age,empid,salary;
char gender;
public:
void empd1()
{
cout<<"enter the name  of the employee";
cin.getline(empnam,20);
cout<<"enter the age of the employee";
cin>>age;
cout<<"enter the emp id " ;
cin>>empid;
cout<<"enter the gender";
cin>>gender;
}
void empd2()
{
cout<<"enter the designation of employee";
cin.getline(desig,20);
cout<<"\nenter employee's dept ";
cin.getline(dept,20);
cout<<"enter employees anual salary";
cin>>salary;
}
};
class result: private empdetails
{
public:
void details()
{
empd1();
empd2();
cout<<"\t\temployee details\n";
cout<<"employee name :"<<empnam<<endl;
cout<<"employee id:"<<empid<<endl;
cout<<"gender:"<<gender<<endl;
cout<<"employee's age :"<<age<<endl;
cout<<"department:"<<dept<<endl;
cout<<"designation:"<<desig<<endl;
cout<<"employee's salary:"<<salary<<endl;
}
};
void main()
{
clrscr();
result c;
c.details();
getch();
}

