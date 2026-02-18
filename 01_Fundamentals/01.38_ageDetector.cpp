#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int age;
	int i=1;
	while(i>=0){
		cout<<"Enter your age:"<<endl;
		cin>>age;
		if(age<0){
			cout<<"Error,Please enter a valid age"<<endl;
			continue;
		}
		else{
			break;
		}
	}
	cout<<"Your valid age is "<<age<<" years old."<<endl;
	getch();
	return 0;
}