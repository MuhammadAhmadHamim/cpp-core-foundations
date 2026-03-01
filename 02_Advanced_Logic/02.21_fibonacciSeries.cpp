#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num;
	int a=0;
	int b=1;
	int next;
	cout<<"Enter the number of terms you want of the Fibonacci series:";
	cin>>num;
	cout<<endl;
	cout<<"The required Fibonacci series= {";
	for(int i=1;i<=num;i++){
		cout<<a;
		if(i !=num){
			cout<<" , ";
		}
		else{
			cout<<"......}";
		}
		next=a+b;
				a=b;
		b=next;
        	
	}
	getch();
	return 0;
}
