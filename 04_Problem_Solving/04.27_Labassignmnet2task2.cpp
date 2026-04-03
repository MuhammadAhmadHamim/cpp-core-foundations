#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	while(true){
		int choice;
					
		cout<<"Menu:-"<<endl;
		cout<<"1.Enter Marks for 3 Subjects"<<endl;
		cout<<"2.Calculate Total and Average"<<endl;
		cout<<"3.Check Pass or Fail"<<endl;
		cout<<"4.Exit"<<endl;
		cin>>choice;
		
		cout<<endl;
		
		switch(choice){
			case 1:
				int total;
				int marks;
				
				cout<<"Enter the marks of the 3 Subjects:"<<endl;
				for(int i=1;i<=3;i++){	
					cin>>marks;
					
					if(marks<0 || marks>100){
						cout<<"\nError,Please enter valid marks"<<endl;
						i--;
					}

					else{
						total+=marks;
					}

				}

				cout<<endl;
			break;
			case 2:
				cout<<"The total marks of the student is "<<total<<endl;
				
				int average;
				average=total/3;
				
				cout<<"The average is "<<average<<endl;
				cout<<endl;

			break;
			case 3:
				if(average>=50){
					cout<<"Pass"<<endl;
				}

				else{
					cout<<"Fail"<<endl;
				}

				cout<<endl;
			
			break;
			case 4:
			
			break;
			default:
				cout<<"Error,Invalid Input!"<<endl;	
				cout<<endl;
		}

		if(choice==4){
			break;
		}

		else{
			continue;
		}		
	}
	
	getch();
	return 0;
}
