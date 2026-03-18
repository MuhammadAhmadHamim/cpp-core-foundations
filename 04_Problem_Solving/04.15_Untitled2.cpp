#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int a;
	cout<<"Enter any number.."<<endl;
	cin>>a;
	
	if(a%2==0){
		cout<<"The given number is an Even number"<<endl;
	}
	
	else{
		cout<<"The given number is an Odd number"<<endl;
	}
	
	getch();
	return 0;
}
