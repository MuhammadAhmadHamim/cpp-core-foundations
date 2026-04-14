#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int num;
	cout<<"Enter the number whose pyramid you want to construct:";
	cin>>num;
	
	int i=1;
	
	do{
		int j=1;
		
		do{
			cout<<j;
			j++;
		}while(j<=i);
	
		cout<<endl;
		i++;
	
	}while(i<=num);
	
	getch();
	return 0;
}