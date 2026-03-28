#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int i=1;
	double num;
	double sum=0;
	
	while(i<=10){
		cout << "Enter value no." << i <<endl;
		cin >> num ;
		
		i++;
		
		if(num>0){
			sum+=num;
		}
		
		else{
			continue;
		}
	}

	cout<<"The sum of all the positive values ignoring the negative ones is "<<sum<<endl;
	
	getch();
	return 0;
}
