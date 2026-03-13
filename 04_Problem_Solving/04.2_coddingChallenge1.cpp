#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	    int a;
    cout<<"Enter an integer"<<endl;
    cin>>a;
    if(a<10 && a%2==0){
    	cout<<"It's a very small Even Number"<<endl;}
    	if(a<10 &&a%2==1){
    		cout<<"It's a very small Odd Number"<<endl;}
    if(a<100 && a%2==0 && a>=10){
    	cout<<"It's a Small Even Number"<<endl;
    	int c;
    	c=a/10;
    	int b;
    	b=a%10;
    	cout<<"Before swapping the value of integer is "<<a<<endl;
    	cout<<"After swapping the value of integer is "<<(b*10)+c<<endl;
}
else{
	if(a>=100 && a%2==0){
		cout<<"It's a Big Even Number"<<endl;
		int c;
    	c=a/100;
    	int e;
    	e=(a/10)%10;
    	int b;
    	b=a%10;
    	cout<<"Before swapping the value of integer is "<<a<<endl;
    	cout<<"After swapping the value of integer is "<<(b*100)+(e*10)+c<<endl;
	}
if(a<=100 && a%2==1 && a>=10){
cout<<"It's a Small Odd number"<<endl;
}
if(a>100 && a%2==1){cout<<"It's Big Odd number"<<endl;
}
}
cout<<"Odd numbers till the given number are ";
int d;
for(d =1;d <=a; d+=2){
	cout<<d;
	if(d+2<=a){
		cout<<",";
	}
}
	getch();
return 0;
}
