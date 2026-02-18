#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a;
	cout<<"Enter any five digit number.."<<endl;
	cin>>a;
cout<<"The last digit is "<<a%10<<endl<<endl<<endl;
a=a/10;
cout<<"The second-last digit is "<<a%10<<endl<<endl<<endl;
a=a/10;
cout<<"The third-last digit is "<<a%10<<endl<<endl<<endl;
a=a/10;
cout<<"The fourth-last digit is "<<a%10<<endl<<endl<<endl;
a=a/10;
cout<<"The first digit is "<<a%10<<endl<<endl<<endl;
a=a/10;
return 0;	
	
	
}
