#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int N;
	int sum=0;
	cout<<"Enter the value of N till whom you want to calculate the sum of odd numbers from 1:";
	cin>>N;
	for(int i=1; i<=N; i+=2){
		cout<<"Adding "<<i<<" to the sum which is "<<sum<<" it becomes "<<i+sum<<endl;
		sum+=i;
	}
			cout<<"\n";

	cout<<"The total sum of odd numbers from 1 to the given number is "<<sum<<endl;
		getch();
	return 0;
}
