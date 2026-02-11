#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	double num1;
	double num2;
	int choice;
	double sum;
	double difference;
	double product;
	double quotient;
	int i=1;
	while(i>=0){
		cout<<"Enter the first number:"<<endl;
		cin>>num1;
		cout<<"Enter the second number:"<<endl;
		cin>>num2;
		cout<<endl;
		cout<<"Select any operation:-"<<endl;
		cout<<"1.Addition"<<endl;
		cout<<"2.Subtraction"<<endl;
		cout<<"3.Multiplication"<<endl;
		cout<<"4.Division"<<endl;
		cout<<"5.Exit"<<endl;
		
		cin>>choice;
		if(choice==1){
				sum= num1+num2;
				cout<<"The sum of given numbers is "<<sum<<endl;
						cout<<endl;
				continue;}
				
	else{
				
		if(choice==2){
				difference= num1-num2;
				cout<<"The difference of given numbers is "<<difference<<endl;
						cout<<endl;
				continue;}
				
		 if(choice==3){
			    product= num1*num2;
				cout<<"The product of given numbers is "<<product<<endl;
						cout<<endl;
				continue;}
				
		 if(choice==4){
				quotient= num1/num2;
				cout<<"The quotient of given numbers is "<<quotient<<endl;
				        cout<<endl;
				continue;}
				
		 if(choice==5){cout<<"Thank you for using this calculator"<<endl;
		cout<<endl;
					break;}}}
getch();
return 0;}

