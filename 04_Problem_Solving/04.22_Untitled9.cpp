#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int N;
	cout<<"Let's print all the even numbers till N"<<endl;
	
	cout<<"Enter the value of N"<<endl;
	cin>>N;
	
	for(int i=2;i<=N;i+=2){
		cout<<i;
		if(i<N){
			cout<<", ";
		}
	}
	
	getch();
	return 0;
}
