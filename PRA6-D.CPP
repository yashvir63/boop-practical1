#include<iostream.h>
#include<conio.h>
class student
{
	private:
	int   er_no,m,m1,m2,m3;
	char  name[20];
	char  course[20];
	public:
		void get()
		{
			cout<<"\nEnter enrollment number: ";
			cin>>er_no;
			cout<<"\nEnter name: ";
			cin>>name;
			cout<<"\n enter course name : ";
			cin >>course;
			cout<<"\nEnter subject 3 marks: ";
			cin>>m1>>m2>>m3;
		}
		void sum()
		{
			int m=m1+m2+m3;
			cout<<"\n total marks is : " <<m ;
		}
		void display()
		{
			cout<<"\n your enrollment number is : " <<er_no;
			cout<<"\n your name is : " <<name;
			cout<<"\n your course is : " <<course;
			sum();
		}
};
int main()
{
    student s1,s2;
	clrscr();
	s1.get();
	s1.display();
	s2.get();
	s2.display();
	return 0;
	getch();
}
