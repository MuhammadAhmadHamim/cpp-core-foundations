#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int type;
	int amount;
	
	cout<<"Enter the total amount you have to pay"<<endl;
	cin>>amount;
	cout<<"Enter the type of customer you are"<<endl;
	cin>>type;
	switch(type)
	{
		case 1:
			cout<<"You are an old customer.."<<endl;
			cout<<"The total amount to be paid by you is "<<amount-(amount*5/100)<<endl;
			break;
			
				case 2:
			cout<<"You are a new customer.."<<endl;
			cout<<"The total amount to be paid by you is "<<amount-(amount*15/100)<<endl;
			break;
			
				case 3:			
				cout<<"You are a premium customer.."<<endl;
			cout<<"The total amount to be paid by you is "<<amount-(amount*20/100)<<endl;
			break;
			default:
				cout<<"Invalid customer type.."<<endl;
	}
		getch();
	return 0;	
}
