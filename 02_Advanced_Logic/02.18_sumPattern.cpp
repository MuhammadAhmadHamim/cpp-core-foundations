#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of lines you want in your Sum pattern:";
	cin>>n;
	int count=0;
	for(int i=1;i<=n;i++){
	for(int j=1;j<=i;j++){
		cout<<j<<" ";
		if(j !=i){
			cout<<"+ ";
		}
		else{
			count+=j;
			cout<<"= "<<count;
			}
			
	}
		cout<<endl;}
	getch();
	return 0;
	}

