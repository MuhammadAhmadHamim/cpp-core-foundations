#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float a;
	float b;
	float c;
	float d;
	float e;

	cout<<"Enter the radius of Circle(in cm)"<<endl;
	cin>>a;
	cout<<"Area of the Circle is "<<3.141592*(a*a)<<endl;
	cout<<"Enter the length of Rectangle(in m)"<<endl;
	cin>>b;
	cout<<"Enter the width of Rectangle(in m)"<<endl;
	cin>>c;
	cout<<"Area of the Rectangle is "<<b*c<<endl;
	cout<<"Enter the height of Triangle(in cm)"<<endl;
	cin>>d;
	cout<<"Enter the base of Triangle(in cm)"<<endl;
	cin>>e;
	cout<<"Area of the Triangle is "<<(d*e)/2<<endl;
		getch();
	return 0;	
}
