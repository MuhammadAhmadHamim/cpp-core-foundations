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
	cout<<"Name: Muhammad Ahmad Hamim \t \t \t";
	cout<<"Reg#:- SP25-BSE-019/WAH"<<endl;
	cout<<"Session: Spring-25 \t \t \t \t";
	cout<<"Semester: 1"<<endl;
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
