#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int N;
	cout<<"Let's do the reverse order from N"<<endl;

	cout<<"Enter the value of N"<<endl;
	cin>>N;

	for(int i=N;i>=0;i--){
		cout<<i;
		if(i>0){
			cout<<", ";
		}
	}

	getch();
	return 0;
}
