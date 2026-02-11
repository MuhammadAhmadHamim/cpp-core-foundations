#include <iostream>
#include<string>
#include<iomanip>
#include<conio.h>
using namespace std;
int main() {
string Welcomemessage;
double num1;
double num2;

    Welcomemessage = "Welcome to the Calculator App";
    cout<<Welcomemessage<<endl;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    
    double sum;
sum = num1 + num2;
double difference;
difference = num1 - num2;
double product;
product = num1 * num2;
double division;
division = num1 / num2;
    cout<<"Sum= "<<fixed<<setprecision(2)<<sum<<endl;
    cout<<"Difference= "<<fixed<<setprecision(2)<<difference<<endl;
    cout<<"Product= "<<fixed<<setprecision(2)<<product<<endl;
    cout<<"Division= "<<fixed<<setprecision(2)<<division<<endl;
    getch();
	return 0;
}
