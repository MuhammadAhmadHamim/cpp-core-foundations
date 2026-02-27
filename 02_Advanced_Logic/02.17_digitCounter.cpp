#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num;
	cout<<"Enter the number:"<<endl;
	cin>>num;
	int count=0;
	while(true){
		if(num !=0){
			num=num/10;
		count++;
		}
		else{
			break;
	}
	}
	cout<<"The number of digits in this number is "<<count<<endl;
	getch();
	return 0;
}
