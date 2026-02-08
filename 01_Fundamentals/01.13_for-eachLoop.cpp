#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main(){
	string fruits[]={ "apple" , "banana" , "mango" , "papaya" , "grapes" , "kiwi" };
	cout<<"My Bucketlist:"<<endl;
	cout<<endl;
	int i=1;
	for(string fruit :fruits){
		cout<<i<<")"<<fruit<<endl;
		i++;
	}
	getch();
	return 0;
}
