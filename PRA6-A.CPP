#include<iostream.h>
#include<conio.h>
// define a class Temperature

class Temperature
{
	private:
	float fahren, celsius;
	public:
	float conversion(float f)
	{
		fahren=f;
		celsius=(fahren-32)* 5.0/9.0;
		return celsius;
	}
	
};
void main()
{
	clrscr();
	// define an object of Temperature class
	Temperature t;
	float f;
	cout<<"Enter Temperature in Fahrenheit=";
	cin>>f;
	// call conversion function with object t
	cout<<"Temperature in Celsius="<<t.conversion(f);
	getch();
}