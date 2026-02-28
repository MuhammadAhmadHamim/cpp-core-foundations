#include<iostream>
#include<conio.h>
using namespace std;
int main(){
  int num;
	cout<<"Enter the number:"<<endl;
	cin>>num;
	cout<<"The reverse of the number is ";
	while(true){
		if(num !=0){
			num%10;
					cout<<num%10;
			num=num/10;
		}
		else{
			break;
	}
	}
	getch();
	return 0;
}
