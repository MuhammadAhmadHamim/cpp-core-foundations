#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	float temperature;
	int temp;
	
	cout<<"Choose your option:"<<endl;
	cout<<"1.Convert Celsius to Fahrenheit"<<endl;
	cout<<"2.Convert Celsius to Kelvin"<<endl;
	cin>>temp;
	
	cout<<"Enter the temperature in Celsius:"<<endl;
	cin>>temperature;
	
	switch(temp){
		case 1:	
			cout<<"Temperature in Fahrenheit: "<<(temperature*9/5)+32;
			cout<<"F"<<endl;
		break;
	
		case 2:
			cout<<"Temperature in Kelvin: "<<temperature+273.15;
			cout<<"K"<<endl;
		break;
	
		default:
			cout<<"ERROR,Please choose any of the two options"<<endl;
	}
		
	getch();
	return 0;	
}
