#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	float a;
	float b;
	
	cout<<"Enter the value of a"<<endl;
	cin>>a;
	
	cout<<"Enter the value of b"<<endl;
	cin>>b;
	
	cout<<"Before swapping.."<<endl;
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	
	float temp=a;
	a=b;
	b=temp;
	
	cout<<"After swapping.."<<endl;
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	
	getch();
	return 0;
}
