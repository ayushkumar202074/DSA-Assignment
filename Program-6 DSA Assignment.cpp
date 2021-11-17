#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int x,y,n;
void swap1(int,int);
void swap2(int*x,int*y);
cout<<"Enter two values to be swapped\n";
cin>>x>>y;
cout<<"\nfor CALL BY VALUE press 1";
cout<<"\nfor CALL BY REFERENCE press 2\n";
cin>>n;
switch(n)
{
case 1:

cout<<"\nCALL BY VALUE";
cout<<"\nvalues before swapping : "<<x<<"\t"<<y;
swap1(x,y);
cout<<"\nafter swap outside of swap1() : ";
cout<<"\nx="<<x<<"\ny="<<y;
break;
case 2:
cout<<"\nCALL BY REFERENCE";
cout<<"\nvalues before swapping : "<<x<<y;
swap2(&x,&y);
cout<<"\nafter swap(outside of swap2() : "<<"\nx="<<x<<"\ny="<<y;
break;
}
getch();
return 0;
}
void swap1(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
cout<<"\nswapped values(inside swap1() : "<<x<<"\t"<<y;
}
void swap2(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
cout<<"\nswapped value(inside swap2() : "<<*x<<"\t"<<*y;
}