#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int rows;
	int j=0;
	cout<<"Enter the number of rows of your pattern: ";
	cin>>rows;
	
	do{
		int i=0;
	    
		do{
			cout<<"*";
			i++;
		
		}while(i<rows);

		cout<<endl;
		j++;
		
	}while(j<rows);
	
	getch();
	return 0;
}