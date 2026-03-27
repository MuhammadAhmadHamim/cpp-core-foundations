#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	cout<<"Let's print natural number from 1 to 10.."<<endl;
	
	for(int i=1;i<=10;i++){
		cout<<i;
		if(i<10){
			cout<<", ";
		}
	}
		
	getch();
	return 0;
}
