#include<iostream.h>
#include<conio.h>
void swap(int a ,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"the swap  value is :" <<a <<"\n" <<b;
}
void main()
{
	int a,b;
	clrscr();
	cout<<"enter the two numbers : " <<endl;
	cin>>a>>b;
	swap(a,b);
	getch();
}