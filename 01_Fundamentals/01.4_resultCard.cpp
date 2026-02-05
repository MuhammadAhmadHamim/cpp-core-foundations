#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float a;
	float b;
	float c;
	
	cout<<"Enter your marks in Programming Fundamentals"<<endl;
	cin>>a;
	cout<<"Enter your marks in ICT"<<endl;
	cin>>b;
	cout<<"Enter your marks in Fundamentals of Sociology"<<endl;
	cin>>c;
	cout<<" \t \t \t \tResult Card"<<endl;
	cout<<"Name:__________________\t \t \t";
	cout<<"Reg#:- ____-___-___/___"<<endl;
	cout<<"Session: _____-__ \t \t \t \t";
	cout<<"Semester: _"<<endl;
	cout<<"Subjects";
	cout<<"\t \t \t \t \tTotal Marks";
	cout<<"\t Obtained Marks"<<endl;
	cout<<"Programming Fundamentals";
	cout<<"\t \t \t 100";
	cout<<"\t \t \t"<<a<<endl;
	cout<<"ICT";
	cout<<"\t \t \t \t \t \t 100";
	cout<<"\t \t \t"<<b<<endl;
	cout<<"Fundamentals of Sociology";
	cout<<"\t \t \t 100";
	cout<<"\t \t \t"<<c<<endl;
	cout<<"Percentage:-"<<(a+b+c)*100/300;
	cout<<"%"<<endl;
		getch();
	return 0;
	
	
}
