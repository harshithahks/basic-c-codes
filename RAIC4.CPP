// c++ program to print pascal triangle //
#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int r,i,j,k,sum=1;
cout<<"enter the number of rows";
cin>>r;
cout<<endl;
for(i=0;i<r;i++)
{
for(j=0;j<r-i;j++)
{cout<<" ";}
for(k=0;k<=i;k++)
{cout<<" "<<sum;
sum=sum*(i-k)/(k+1);
}
cout<<endl<<endl;
}
cout<<endl;
getch();
return 0;
}
