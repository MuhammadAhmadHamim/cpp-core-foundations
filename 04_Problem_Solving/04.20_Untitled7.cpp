#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	float a;
	float b;
	float c;
	
	cout<<"Enter any three numbers.."<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	
	// Greatest number check..
	if(a>b && a>c){
		cout<<"The greatest number is "<<a<<endl;	
	}
	
	else if (b>a && b>c){
		cout<<"The greatest number is "<<b<<endl;	
	}
	
	else if(c>b && a<c){
		cout<<"The greatest number is "<<c<<endl;	
	}
	
	// Smallest number check..
	if(a<b && a<c){
		cout<<"The smallest number is "<<a<<endl;	
	}

	else if (b<a && b<c){
		cout<<"The smallest number is "<<b<<endl;	
	}
	else if(c<b && a>c){
		cout<<"The smallest number is "<<c<<endl;	
	}

	getch();
	return 0;
}
