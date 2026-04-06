#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main(){
	
	int num;
	int i=1;
	int choice;
	int Squareroot;
	
	while(i>=0){
		cout<<"Enter any number:";
		cin>> num;
		cout<<endl;
		
		cout<<"Choose the operation you want to perform:-"<<endl;
		cout<<"1. Check Even or Odd"<<endl;
		cout<<"2. Check Prime Number"<<endl;
		cout<<"3. Check Positive or Negative"<<endl;
		cout<<"4. Find Square of Number"<<endl;
		cout<<"5. Exit"<<endl;
		cin>>choice;
		
		if(choice==1){
		    if(num%2==0){
				cout<<"It is an Even number"<<endl;
			}

			else{
				cout<<"It is an Odd number"<<endl;
			}
			
			cout<<endl;
			continue;
		}
		
		else if(choice==2){
			int count=0;
    
			if(num==0 || num==1){
        		cout<<"The given number is not a Prime number"<<endl;
			}
		
			else{
				
				for(int i=2;i<num;i++){
    				if(num%i==0){
        				count++;
    				}
    				
					else{
        				continue;
    				}
    			}
    	
				if(count==0){
        			cout<<"The given number is a Prime number"<<endl;
    			}
    
				else{
        			cout<<"The given number is not a Prime number"<<endl;
    			}
			}
		}
		
		else if(choice==3){
			
			if(num>0){
				cout<<"It's a Positive number"<<endl;
			}

            else{
            	cout<<"It's a Negative number"<<endl;
			}

			cout<<endl;
			continue;
		}

		else if(choice==4){
			
			cout<<"The square of the number is "<<(num*num)<<endl;
			
			cout<<endl;
			continue;
		}

		else if(choice==5){
			
			cout<<"Thank you for using the Number Operator!"<<endl;
			
			break;
		}
	}	

	getch();
	return 0;
}
