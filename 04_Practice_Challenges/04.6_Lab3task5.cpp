#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int qty;
	int salesReps;

    cout<<"Enter the value of qty"<<endl;
    cin>>qty;
    cout<<"Enter the value of salesReps"<<endl;
    cin>>salesReps;
    
    double Qty;
    Qty=(double) qty;     //Let's convert qty integer into double by c-style casting
    
	double SalesReps;
        SalesReps=double(salesReps);     //Let's convert salesReps integer into double by functional-style casting

    double unitsEach;
    unitsEach=Qty/SalesReps;
    cout<<"The value of unitsEach is "<<unitsEach<<endl;
    	getch();
    return 0;  
}
