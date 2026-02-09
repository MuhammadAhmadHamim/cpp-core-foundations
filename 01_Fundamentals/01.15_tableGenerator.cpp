#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int N;
	cout<<"Enter the number who's table you want to print.."<<endl;
	cin>>N;
	cout<<"The required Table is.."<<endl;
	for(int i = 1;i<=10;i++){
		cout<<N<<"\t \t \t "<<"* \t \t \t "<<i<<"\t \t \t "<<"= \t \t \t "<<i*N<<endl;
	}
		getch();
	return 0;
	
}
