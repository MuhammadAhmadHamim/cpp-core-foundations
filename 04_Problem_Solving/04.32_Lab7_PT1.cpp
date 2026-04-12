#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num;
	
	do{
		cout<<"Enter a positive number:";
		cin>>num;
		cout<<endl;
		
		if(num<=0){
			cout<<"Invalid input! Try again."<<endl;
			
			continue;
		}

		else{
			cout<<"You entered: "<<num<<endl;
			
			break;
		}
	}while(true);
	
	getch();
	return 0;
}