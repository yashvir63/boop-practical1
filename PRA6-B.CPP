#include<iostream.h>
#include<conio.h>
class employee
{
	private:
	int   emp_id;
	char  emp_name[20];
	char  dept[20];
	public:
		void get()
		{
			cout<<"\nEnter employee id: ";
			cin>>emp_id;
			cout<<"\nEnter employee name: ";
			cin>>emp_name;
			cout<<"\nEnter department: ";
			cin>>dept;
		}
		void display()
		{
			cout<<"---------------Display Record------------";
			cout<<"\n employee id: " <<emp_id <<endl;
			cout<<"\n employee name: " <<emp_name <<endl;
			cout<<"\n employee department: " <<dept<<endl;

		}
};
void main()
{
    employee x[100];
    int i,n;
	clrscr();
	cout<<"enter number";
	cin>>n;
	for(i=0;i<n;i++)
	{
		x[i].get();
	}
	for(i=0;i<n;i++)
	{
		x[i].display();
	}
    getch();
}
