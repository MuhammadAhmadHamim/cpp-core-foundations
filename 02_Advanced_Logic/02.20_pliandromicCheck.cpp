#include<iostream>
#include<conio.h>
using namespace std;
int main(){
  int rev=0;
  int num;
  int digit;
	cout<<"Enter the number:"<<endl;
	cin>>num;
	while(true){	
		if(num !=0){
		digit=num%10;
		rev=rev*10+digit;	
			num=num/10;
		}
		else{
			break;}
	
	}
	if(rev==num){
		cout<<"This series is Pliandromic series."<<endl;
	}
	else{
				cout<<"This series is not Pliandromic series."<<endl;
	}
	getch();
	return 0;
}
