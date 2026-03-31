#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int choice;
	
	while(true){
		int total;
		
		cout<<"Menu:-"<<endl;
		cout<<"1.Enter First Deposit"<<endl;
		cout<<"2.Enter Second Deposit"<<endl;
		cout<<"3.Enter Third Deposit"<<endl;
		cout<<"4.Enter Total Deposited"<<endl;
		cout<<"5.Exit"<<endl;
        
		cin>>choice;
        
		switch(choice){
        	case 1:
        		int dep1;
        		
				cout<<"Enter the amount of First deposit:";
        		cin>>dep1;
        		
				total+=dep1;
        		
			break;
        	case 2:
        		int dep2;
        		
				cout<<"Enter the amount of Second deposit:";
        		cin>>dep2;
        		
				total+=dep2;

        	break;
        	case 3:
        		int dep3;
        		
				cout<<"Enter the amount of Third deposit:";
        		cin>>dep3;
        		
				total+=dep3;

        	break;
        	case 4:
        		cout<<"The total amount deposited is Rs."<<total<<endl;
        	
			break;
        	case 5:
        			
			break;
        	default:
        		cout<<"Error,Invalid input!"<<endl;
		}
		
		if(choice==5){
			break;
		}

		else{
			continue;
		}
	}

	getch();
	return 0;
}
