#include<iostream.h>
#include<conio.h>
inline int cube(int l)
struct student
{
		int r_no;
		char name[5];
		int age;
		char br[5];
};
void main()
{
	student s;
	clrscr();
	cout<<"enter name : ";
	cin>>s.name;
	cout<<"enter roll no : ";
	cin>>s.r_no;
	cout<<"enter age : ";
	cin>>s.age;
	cout<<"enter branch : ";
	cin>>s.br;
	cout<<"display student details : " <<endl;
	cout<<"roll no : " <<s.r_no <<endl;
	cout<<"name : " <<s.name <<endl;
	cout<<"branch : " <<s.br <<endl;
	getch();
}