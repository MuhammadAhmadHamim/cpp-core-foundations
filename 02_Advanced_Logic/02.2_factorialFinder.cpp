#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i,product;
	product=1;

	cout<<"Enter the number you want the factorial of: ";
	cin>>i;
	cout<<"The required factorial(!) of "<<i<<" is:"<<endl;
	for( i; i>0 ;i--){
		cout<<i;
		if(i>1){
			cout<<" x ";}
		product*=i;	
			
	}
cout<<" = "<<product<<endl;
	getch();
	return 0;
	
}
