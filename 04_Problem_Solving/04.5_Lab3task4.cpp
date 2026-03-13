#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a;
	int b=2;
	float c=4.2;
	cout<<"a="<<b*c<<endl;
	//If we do this by declaring the function then b would be demoted to float variable and the result would also be in float which is 8.4
    a=b*c;
	cout<<"a="<<a<<endl;
	//If we do this by declaring the value of variable a then the result would be in int since a is an int variable and the result would be 8
	int f;
	int d=2;
	float e=4.2;
	d*e;
	cout<<"f="<<f<<endl;
	//If we do this by only declaring the operation and not mentioning a then there will be no value in a and the result would be 0 or some random value
	getch();
	return 0;
}
