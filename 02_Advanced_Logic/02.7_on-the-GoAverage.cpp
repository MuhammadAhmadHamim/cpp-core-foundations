#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float i=1;
	float num=0;
	float sum=0;
	
	cout<<"Enter the marks of students (Enter negative marks to stop):"<<endl;
	while(i>0){
		cout<<"Enter marks: ";
		cin>>i;
		if(i>0){
		sum += i;
		num++;}		
	}
	if(i<0){
		cout<<endl;
		cout<<"Total students: "<<num<<endl;
				cout<<"Class Average: "<<sum/num<<endl;
	}
	getch();
	return 0;
	
}
